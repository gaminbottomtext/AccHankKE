package;

//import flixel.system.macros.FlxAssetPaths;
import flixel.addons.transition.FlxTransitionableState;
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
import flixel.FlxCamera;
//import flixel.system.FlxAssets;

#if windows
import Discord.DiscordClient;
#end

using StringTools;

class HankSelectSubstate extends MusicBeatSubstate
{
	var curSelected:Int = 0;
    var curDiff:Int = 0;

    var backdropColors:Array<Int> = [0xFFc02c2c, 0xFFc02c2c, 0xFF9064ec];

	var curSelectedText:FlxText;
	public static var firstStart:Bool = true;

    var diffShit:Array<String> = ['baby', 'hard', 'fucked'];

	var camFollow:FlxObject;
	public static var finishedFunnyMove:Bool = false;
	
	public var imageDiff:FlxSprite;
    public static var tweened:Bool = false;

    var hank:FlxSprite;

    var accelerantWord:FlxSprite;
    var backdrop:FlxBackdrop;
    var pressEnter:FlxSprite;
    var pbText:FlxText;
    var arrow:FlxSprite;
    var leftArrowHitBox:FlxSprite;
    var rightArrowHitBox:FlxSprite;

	override function create()
	{
        FlxTransitionableState.defaultTransIn = null;
		FlxTransitionableState.defaultTransOut = null;
        
        super.create();

        backdrop = new FlxBackdrop(Paths.image('menuDesat'));
		backdrop.y = 0;
		backdrop.velocity.set(-50, 0);
		add(backdrop);

        accelerantWord = new FlxSprite(-400, 40);   //460
        accelerantWord.frames = Paths.getSparrowAtlas('menu_accelerant');
        accelerantWord.animation.addByPrefix('idle', 'accelerant word', 24, true);
        accelerantWord.animation.play('idle');
        add(accelerantWord);
        FlxTween.tween(accelerantWord, {x: 460}, 1, {ease: FlxEase.expoInOut});

        var behindOptions = new FlxSprite(0, 0).loadGraphic(Paths.image('behind_options', 'shared'));
		behindOptions.scrollFactor.set();
		add(behindOptions);

        hank = new FlxSprite(100, -900);
        hank.frames = Paths.getSparrowAtlas('characters/hank', 'shared');
        hank.animation.addByPrefix('hank', 'Hank Idle', 24, true, false, false);
        hank.animation.play('hank');
        add(hank);
        MainMenuState.selectedSomethin = true;

        FlxTween.tween(hank, {y: 60}, 1, {ease: FlxEase.expoInOut});

        imageDiff = new FlxSprite(1280, 320);
        imageDiff.frames = Paths.getSparrowAtlas('diff_sel');
        imageDiff.animation.addByPrefix('baby', 'baby');
        imageDiff.animation.addByPrefix('fucked', 'fucked', 24, true);
        imageDiff.animation.addByPrefix('hard', 'hard');
        //imageDiff.animation.play('baby');
        add(imageDiff);

        FlxTween.tween(imageDiff, {x: 600}, 1, {ease: FlxEase.expoInOut});
        tweened = true;

        pressEnter = new FlxSprite(350, 720);
        pressEnter.frames = Paths.getSparrowAtlas('titleEnter');
        pressEnter.animation.addByPrefix('idle', 'Press Enter To Begin', 24, true, false, false);
        pressEnter.scale.set(0.7, 0.7);
        pressEnter.animation.play('idle');
        add(pressEnter);

        FlxTween.tween(pressEnter, {y: 400}, 1, {ease: FlxEase.expoInOut});

        pbText = new FlxText(570, 485, 0, 'placeholder', 32);
        pbText.font = Paths.font('vcr.ttf');
        pbText.color = FlxColor.WHITE;
        pbText.alpha = 0;
        //add(pbText);

        FlxTween.tween(pbText, {alpha: 1}, 1);

        arrow = new FlxSprite(20, 20);
        arrow.frames = Paths.getSparrowAtlas('back_arrow');
        arrow.animation.addByPrefix('static', 'back arrow static');
        arrow.animation.addByPrefix('selected', 'back arrow selected');
        arrow.animation.play('static');
        add(arrow);

        leftArrowHitBox = new FlxSprite(600, 320).makeGraphic(42, 76, FlxColor.WHITE);
        leftArrowHitBox.alpha = 0;
        add(leftArrowHitBox);

        rightArrowHitBox = new FlxSprite(620, 320).makeGraphic(42, 76, FlxColor.WHITE);
        rightArrowHitBox.alpha = 0;
        add(rightArrowHitBox);

        changeDiff();

        //pbText.text = 'BEST RUN: \nScore: ${Highscore.getScore('accelerant', curSelected)}\nCombo: ${Highscore.getCombo('accelerant', curSelected)}';
    }
    override function update(elapsed:Float) {
        super.update(elapsed);

        if (FlxG.keys.justPressed.LEFT)
            {
                changeDiff(-1);
            }
        if (FlxG.keys.justPressed.RIGHT)
            {
                changeDiff(1);
            }
        if (FlxG.keys.justPressed.ESCAPE)
            {
                getOut();
            }

        if (FlxG.mouse.overlaps(arrow)) {
            arrow.animation.play('selected');
            arrow.updateHitbox();
            if (FlxG.mouse.justPressed) {
                getOut();
            }
        }
        else {
            arrow.animation.play('static');
            arrow.updateHitbox();
        }

        if (FlxG.mouse.overlaps(imageDiff)) {
            if (FlxG.mouse.wheel == 1) {
                changeDiff(1);
            }
            if (FlxG.mouse.wheel == -1) {
                changeDiff(-1);
            }
        }

        if (FlxG.mouse.overlaps(leftArrowHitBox)) {
            if (FlxG.mouse.justPressed) {
                changeDiff(-1);
            }
        }
        if (FlxG.mouse.overlaps(rightArrowHitBox)) {
            if (FlxG.mouse.justPressed) {
                changeDiff(1);
            }
        } 

        
        if (FlxG.keys.justPressed.ENTER) {
        //    PUT CODE HERE!! THIS IS JUST FOR REFERENCE
            switch (curDiff) {
                case 0:
                    PlayState.SONG = Song.loadFromJson('accelerant-easy', 'accelerant');
                    PlayState.storyDifficulty = 0;
                case 1:
                    PlayState.SONG = Song.loadFromJson('accelerant', 'accelerant');
                    PlayState.storyDifficulty = 1;
                case 2:
                    PlayState.SONG = Song.loadFromJson('accelerant-hard', 'accelerant');
                    PlayState.storyDifficulty = 2;
            }
            PlayState.isStoryMode = false;
            new FlxTimer().start(2, function(tmr:FlxTimer) 
                {
                    LoadingState.loadAndSwitchState(new PlayState());
                });
        }
        
    }

    function changeDiff(change:Int = 0) {
        curDiff += change;

        if (curDiff > 2)
            curDiff = 0;
        if (curDiff < 0)
            curDiff = 2;

        switch (curDiff) {
            case 0:
                imageDiff.animation.play('baby');
                rightArrowHitBox.x = 857;
            case 1:
                imageDiff.animation.play('hard');
                rightArrowHitBox.x = 867;
            case 2:
                imageDiff.animation.play('fucked');
                rightArrowHitBox.x = 932;
        }

        trace(rightArrowHitBox.x);

        //pbText.text = 'BEST RUN: \nScore: ${Highscore.getScore('accelerant', curSelected)}\nCombo: ${Highscore.getCombo('accelerant', curSelected)}';

        FlxTween.tween(backdrop, {color: backdropColors[curDiff]}, 0.001, {ease: FlxEase.expoInOut});
    }

    function getOut() {
        FlxG.sound.play(Paths.sound('cancelMenu'));
        FlxTween.tween(pressEnter, {y: 720}, 0.2, {ease: FlxEase.expoInOut});
        FlxTween.tween(hank, {y: -900}, 0.2, {ease: FlxEase.expoInOut});
        FlxTween.tween(imageDiff, {x: 1280}, 0.2, {ease: FlxEase.expoInOut});
        FlxTween.tween(accelerantWord, {x: -400}, 0.1, {ease: FlxEase.expoInOut});
        new FlxTimer().start(0.3, function(tmr:FlxTimer)
            {
                MainMenuState.selectedSomethin = false;
                MainMenuState.finishedFunnyMove = false;
                MainMenuState.tweenThingsBackIn();
                close();
            });
    }
}
