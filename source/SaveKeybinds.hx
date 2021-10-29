package;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;

class SaveKeybinds extends MusicBeatState
{
    var holdTimer:Float = 0;
    override function create() {
        var warning:FlxText = new FlxText(0, 0, 0, 'Please make sure to edit your keybinds. \n\nHold Space to continue.', 42);
        warning.setFormat(Paths.font("vcr.ttf"), 42, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE,FlxColor.BLACK);
        warning.screenCenter();
        add(warning);
    }

    override function update(elapsed:Float) {
        super.update(elapsed);

        if (FlxG.keys.pressed.SPACE) {
            holdTimer += elapsed;
        }
        if (FlxG.keys.justReleased.SPACE) {
            holdTimer = 0;
        }

        if (holdTimer > 0.5) {
            FlxG.switchState(new TitleState());
        }
    }
}