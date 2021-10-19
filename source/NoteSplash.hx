package;

import flixel.FlxSprite;

class NoteSplash extends FlxSprite
{
    public function new(x:Float, y:Float, noteData:Int)
        {
            super(x, y);

            frames = Paths.getSparrowAtlas('NOTE_splashes');

            animation.addByPrefix('purple', 'notesplash purple', 24, false);
            animation.addByPrefix('blue', 'notesplash blue', 24, false);
            animation.addByPrefix('green', 'notesplash green', 24, false);
            animation.addByPrefix('red', 'notesplash red', 24, false);

            switch (noteData) {
                case 0:
                    animation.play('purple');
                case 1:
                    animation.play('blue');
                case 2:
                    animation.play('green');
                case 3:
                    animation.play('red');
            }
        }

    override function update(elapsed:Float) {
        if(animation.curAnim.finished) kill();

		super.update(elapsed);
    }
}