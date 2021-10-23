package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;

class NoteSplash extends FlxSprite
{
	var setPosX:Float = 0;
	var setPosY:Float = 0;
	var swagWidthShit:Float = 0;
	public static var anims:Array<String> = ['purple', 'blue', 'green', 'red'];
	public function new(x:Float = 0, y:Float = 0, noteData:Int) 
	{
		super(x, y);

		setupNoteSplash(x, y, noteData);
	}
	
	public function setupNoteSplash(x:Float = 0, y:Float = 0, noteData:Int = 0) {
		swagWidthShit = Note.swagWidth;
		frames = Paths.getSparrowAtlas('NOTE_splashes');
		antialiasing = FlxG.save.data.antialiasing;
        switch (noteData)
        {
            case 0: //Purple
				setPosX = x - swagWidthShit * 0.95 + 45;
				setPosY = y - swagWidthShit + 32;
            case 1: //Blue
				setPosX = x - swagWidthShit * 0.95 + 55;
				setPosY = y - swagWidthShit + 32;
            case 2: //Green
				setPosX = x - swagWidthShit * 0.95 + 45;
				setPosY = y - swagWidthShit + 32;
            case 3: //Red
				setPosX = x - swagWidthShit * 0.95 + 45;
				setPosY = y - swagWidthShit + 32;
        }
		setPosition(setPosX,setPosY);
		animation.addByPrefix(anims[noteData], 'notesplash ' + anims[noteData], 48, false);
        animation.play(anims[noteData]);
	}

	override function update(elapsed:Float) { 
		if(animation.curAnim.finished) kill(); 
		super.update(elapsed); 
	}
}