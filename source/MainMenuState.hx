package;

//import flixel.system.macros.FlxAssetPaths;
import flixel.input.gamepad.FlxGamepad;
import Controls.KeyboardScheme;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.effects.FlxFlicker;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import io.newgrounds.NG;
import lime.app.Application;
import flixel.addons.display.FlxBackdrop;
//import flixel.system.FlxAssets;

#if windows
import Discord.DiscordClient;
#end

using StringTools;

class MainMenuState extends MusicBeatState
{
	var curSelected:Int = 0;

	var menuItems:FlxTypedGroup<FlxSprite>;

	#if !switch
	var optionShit:Array<String> = ['challenge', 'options'];
	#end
	var backdropColors:Array<Int> = [0xFFc02c2c, 0xFF9064ec];

	var newGaming:FlxText;
	var newGaming2:FlxText;
	var curSelectedText:FlxText;
	public static var firstStart:Bool = true;

	public static var nightly:String = "";

	public static var kadeEngineVer:String = "1.5.4" + nightly;
	public static var gameVer:String = "0.2.7.1";

	var magenta:FlxSprite;
	var camFollow:FlxObject;
	public static var finishedFunnyMove:Bool = false;

	var backdrop:FlxBackdrop;
	
	public var imageThing:FlxSprite;
	var mem:FlxText;

	override function create()
	{
		#if windows
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end
		HankSelectSubstate.tweened = false;

		Conductor.changeBPM(102);

		if (!FlxG.sound.music.playing)
		{
			FlxG.sound.playMusic(Paths.music('freakyMenu'));
		}

		FlxG.mouse.visible = true;

		persistentUpdate = persistentDraw = true;

		/*
		var bg:FlxSprite = new FlxSprite(-100).loadGraphic(Paths.image('menuBG'));
		bg.scrollFactor.x = 0;
		bg.scrollFactor.y = 0.10;
		bg.setGraphicSize(Std.int(bg.width * 1.1));
		bg.updateHitbox();
		bg.screenCenter();
		bg.antialiasing = true;
		add(bg);*/

		backdrop = new FlxBackdrop(Paths.image('menuBG'));
		backdrop.y = 0;
		backdrop.velocity.set(-50, 0);
		add(backdrop);

		camFollow = new FlxObject(0, 0, 1, 1);
		add(camFollow);

		/*
		magenta = new FlxSprite(-80).loadGraphic(Paths.image('menuDesat'));
		magenta.scrollFactor.x = 0;
		magenta.scrollFactor.y = 0.10;
		magenta.setGraphicSize(Std.int(magenta.width * 1.1));
		magenta.updateHitbox();
		magenta.screenCenter();
		magenta.visible = false;
		magenta.antialiasing = true;
		magenta.color = 0xFFfd719b;
		add(magenta);
		// magenta.scrollFactor.set();*/

		var behindOptions = new FlxSprite(0, 0).loadGraphic(Paths.image('behind_options', 'shared'));
		behindOptions.scrollFactor.set();
		add(behindOptions);

		add(imageThing);

		menuItems = new FlxTypedGroup<FlxSprite>();
		add(menuItems);

		var tex = Paths.getSparrowAtlas('FNF_main_menu_assets');

		for (i in 0...optionShit.length)
		{
			var menuItem:FlxSprite = new FlxSprite(0, FlxG.height * 1.6);
			menuItem.frames = tex;
			menuItem.animation.addByPrefix('idle', optionShit[i] + " basic", 24);
			menuItem.animation.addByPrefix('selected', optionShit[i] + " white", 24);
			menuItem.animation.play('idle');
			menuItem.ID = i;
			menuItem.updateHitbox();
			//menuItem.screenCenter(X);
			menuItems.add(menuItem);
			menuItem.scrollFactor.set();
			menuItem.antialiasing = true;
			if (firstStart)
				FlxTween.tween(menuItem,{y: 150 + (i * 340)}/*,60 + (i * 340) */,{ease: FlxEase.expoInOut, onComplete: function(flxTween:FlxTween) 
					{ 
						finishedFunnyMove = true; 
						changeItem();
					}});
			else
				menuItem.y = 150 + (i * 340);
				menuItem.x = 4 + (i * 170);	// Targeting Online VS menu Maybe?
		}

		firstStart = false;

		//FlxG.camera.follow(camFollow, null, 1);

		var versionShit:FlxText = new FlxText(12, FlxG.height - 24, 0, 'Accelerant KE (1.5.4)', 12);
		versionShit.scrollFactor.set();
		versionShit.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(versionShit);
		curSelectedText = new FlxText(12, FlxG.height - 44, 0, '${optionShit[curSelected]}', 12);
		curSelectedText.scrollFactor.set();
		curSelectedText.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(curSelectedText);
		mem = new FlxText(12, FlxG.height - 64, 0, '${Main.getMemory()} MB', 12);
		mem.scrollFactor.set();
		mem.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		//add(mem);

		// NG.core.calls.event.logEvent('swag').send();


		if (FlxG.save.data.dfjk)
			controls.setKeyboardScheme(KeyboardScheme.Solo, true);
		else
			controls.setKeyboardScheme(KeyboardScheme.Duo(true), true);

		changeItem();
		
		//imageThing = new FlxSprite(1232, 1232).loadGraphic(Paths.image(optionShit[curSelected], 'shared'));
		//imageThing.scrollFactor.set();

		super.create();
	}

	public static var selectedSomethin:Bool = false;

	override function update(elapsed:Float)
	{
		if (FlxG.sound.music.volume < 0.8)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

		mem.text = '${Main.getMemory()} MB';

		if (!selectedSomethin)
		{
			var gamepad:FlxGamepad = FlxG.gamepads.lastActive;

			if (gamepad != null)
			{
				if (gamepad.justPressed.DPAD_UP)
				{
					FlxG.sound.play(Paths.sound('scrollMenu'));
					changeItem(-1);
				}
				if (gamepad.justPressed.DPAD_DOWN)
				{
					FlxG.sound.play(Paths.sound('scrollMenu'));
					changeItem(1);
				}
			}

			if (FlxG.keys.justPressed.UP)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'));
				changeItem(-1);
			}

			if (FlxG.keys.justPressed.DOWN)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'));
				changeItem(1);
			}

			if (controls.BACK)
			{
				FlxG.switchState(new TitleState());
			}

			if (controls.ACCEPT)
			{
				if (curSelected == 0)
					doFunnyShit(true);
				else
					doFunnyShit(false);
			}

		super.update(elapsed);

		if (FlxG.mouse.wheel == 1)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'));
				changeItem(1);
			}
		if (FlxG.mouse.wheel == -1)
			{
				FlxG.sound.play(Paths.sound('scrollMenu'));
				changeItem(-1);
			}

		menuItems.forEach(function(spr:FlxSprite)
		{
			if (spr.ID == curSelected)
				{
					if (FlxG.mouse.overlaps(spr))
						{
							if (FlxG.mouse.justPressed)
								{
									if (curSelected == 0) {
										doFunnyShit(true);
									}
									else
										{
											doFunnyShit(false);
										}
								}
						}
				}
		});
	}
}

	function doFunnyShit(isChallenge:Bool) {
		if (!isChallenge) {
			menuItems.forEach(function(spr:FlxSprite)
				{
					FlxG.sound.play(Paths.sound('confirmMenu'));
							if (curSelected != spr.ID)
								{
									FlxTween.tween(spr, {alpha: 0}, 1.3, {
										ease: FlxEase.quadOut,
										onComplete: function(twn:FlxTween)
										{
											spr.kill();
										}
									});
								}
								else
								{
									if (FlxG.save.data.flashing)
									{
										FlxFlicker.flicker(spr, 1, 0.06, false, false, function(flick:FlxFlicker)
										{
											goToState();
										});
									}
									else
									{
										new FlxTimer().start(1, function(tmr:FlxTimer)
										{
											goToState();
										});
									}
								}
				}
			);
		}
		else {
			tweenThingsOut();
		}
	}
	
	function goToState()
	{
		FlxG.switchState(new OptionsMenu());
	}

	function changeItem(huh:Int = 0)
	{
		//remove(imageThing);
		if (finishedFunnyMove)
		{
			curSelected += huh;

			if (curSelected >= menuItems.length)
				curSelected = 0;
			if (curSelected < 0)
				curSelected = menuItems.length - 1;
		}
		menuItems.forEach(function(spr:FlxSprite)
		{
			spr.animation.play('idle');
			spr.updateHitbox();

			if (spr.ID == curSelected && finishedFunnyMove)
			{
				spr.animation.play('selected');
				spr.updateHitbox();
				//camFollow.setPosition(spr.getGraphicMidpoint().x, spr.getGraphicMidpoint().y);
			}

			//spr.updateHitbox();
		});

		curSelectedText.text = '${optionShit[curSelected]}';
		updateScreenStuff(finishedFunnyMove);
	}

	override function beatHit() {
		super.beatHit();
		trace(imageThing.scale.x);
		trace(imageThing.scale.y);
	}

	function updateScreenStuff(tweenBefore:Bool) {
		if (!tweenBefore) {
			remove(imageThing);
			imageThing = new FlxSprite(700, 720).loadGraphic(Paths.image(optionShit[curSelected], 'shared'));
			imageThing.scrollFactor.set();
			add(imageThing);
			FlxTween.tween(imageThing, {y: 150}, 1, {ease: FlxEase.expoInOut});
		}
		else
		{
			remove(imageThing);
			imageThing = new FlxSprite(700, 150).loadGraphic(Paths.image(optionShit[curSelected], 'shared'));
			imageThing.scrollFactor.set();
			add(imageThing);
		}

		FlxTween.tween(backdrop, {color: backdropColors[curSelected]}, 0.001);
		trace(backdrop.color);
	}

	function tweenThingsOut() {
		menuItems.forEach(function(spr:FlxSprite)
			{
				if (spr.ID == curSelected) {
					if (FlxG.save.data.flashing)
						{
							FlxFlicker.flicker(spr, 1, 0.06, false, false, function(flick:FlxFlicker)
							{
								trace('finish flashing');
							});
						}
				}
				FlxTween.tween(spr, {x: 1280}, 1.6, {ease: FlxEase.expoInOut, onComplete: function(flxTween:FlxTween) {
					//openSubState(new ChallengeSubState());
					trace('finish!!');
					openSubState(new HankSelectSubstate());
				}});
			});
			FlxTween.tween(imageThing, {x: 1280}, 1.6, {ease: FlxEase.expoInOut});
	}

	public static function tweenThingsBackIn() {
		FlxG.resetState();
	}
}
