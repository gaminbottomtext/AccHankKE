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

class HankSelectSubstate extends MusicBeatSubstate
{
	var curSelected:Int = 0;

	var curSelectedText:FlxText;
	public static var firstStart:Bool = true;

    var diffShit:Array<String> = ['baby', 'hard', 'fucked'];

	var camFollow:FlxObject;
	public static var finishedFunnyMove:Bool = false;
	
	public var imageDiff:FlxSprite;
    public static var tweened:Bool = false;

    var hank:FlxSprite;

	override function create()
	{
        super.create();
        hank = new FlxSprite(100, -900);
        hank.frames = Paths.getSparrowAtlas('characters/hank', 'shared');
        hank.animation.addByPrefix('hank', 'Hank Idle', 24, true, false, false);
        hank.animation.play('hank');
        add(hank);
        MainMenuState.selectedSomethin = true;

        FlxTween.tween(hank, {y: 60}, 1, {ease: FlxEase.expoInOut});

        changeDiff();

        FlxTween.tween(imageDiff, {x: 600}, 1, {ease: FlxEase.expoInOut});
        tweened = true;
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
                FlxTween.tween(hank, {y: -900}, 1, {ease: FlxEase.expoInOut});
                FlxTween.tween(imageDiff, {x: 1280}, 1, {ease: FlxEase.expoInOut});
                new FlxTimer().start(1, function(tmr:FlxTimer)
                    {
                        MainMenuState.selectedSomethin = false;
                        MainMenuState.tweenThingsBackIn();
                        close();
                    });
            }
    }

    function changeDiff(change:Int = 0) {
        curSelected += change;

        if (curSelected > 2)
            curSelected = 0;
        if (curSelected < 0)
            curSelected = 2;

        remove(imageDiff);
        if (!tweened)
            imageDiff = new FlxSprite(1280, 300).loadGraphic(Paths.image(diffShit[curSelected]));
        else
            imageDiff = new FlxSprite(600, 300).loadGraphic(Paths.image(diffShit[curSelected]));
        add(imageDiff);
    }
}
