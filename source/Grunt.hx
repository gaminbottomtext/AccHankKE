package;

import flixel.FlxSprite;

class Grunt extends FlxSprite
{

    var anim:Array<String> = ['normal', 'bussiness', 'electronic']; //grunt
    public function new(x:Float = 0, y:Float = 0, type:Int = 0) {
        super(x,y);
        
        frames = Paths.getSparrowAtlas('hank/grunt_variants', 'shared');

        for (i in 0...anim.length) {
            animation.addByPrefix(anim[i], anim[i], 24, true);
        }

        animation.play(anim[type]);
    }
}