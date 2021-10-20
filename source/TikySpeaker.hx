package;

import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

class TikySpeaker extends FlxSprite
{
	public function new(x:Float, y:Float)
	{
		super(x, y);

		// SPEAKERS WHOAAAAAA YEAAAAAAAAAAAAAA :( Wish i could bring back the children i killed in 1994 
        frames = Paths.getSparrowAtlas('Dance', 'shared');

        animation.addByPrefix('playing', 'stereo', 24, false); //i changed this so i could beathit this shit
        antialiasing = true;
		y -= 300;
	}

	public function playAnim() {
		animation.play('playing');
	}
}
