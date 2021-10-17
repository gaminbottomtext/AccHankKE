package;

import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

class TikySpeaker extends FlxSprite
{
	public function new(x:Float, y:Float)
	{
		super(x, y);

		// SPEAKERS WHOAAAAAA YEAAAAAAAAAAAAAA :( Wish i could bring back the children i killed in 1994 
        frames = Paths.getSparrowAtlas('speaker');

        animation.addByPrefix('Playing', 'BUMP', 24, true);
        antialiasing = true;
        animation.play('Playing', true);
		y -= 300;
	}
}
