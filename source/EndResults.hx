package;

import flixel.util.FlxTimer;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.addons.display.FlxBackdrop;

using StringTools;

class EndResults extends MusicBeatState
{

    var seperatedScore:Array<Int> = [];
    var intAccuracy:Int = 0;

    var rankLetter:FlxSprite;

    var curVal:Int = 0;

    var times:Int;


    override function create() {

        intAccuracy = Std.int(PlayState.accuracy);
        trace(intAccuracy);
        times = intAccuracy + 1;
        addScore();
    }

    function addScore() {
        new FlxTimer().start(0.09, function(tmr:FlxTimer)
            {
                if (curVal != intAccuracy) {
                    curVal++;
                    FlxG.sound.play(Paths.sound('scrollMenu'));
                    popupNumbers();
                }
                else if (curVal == intAccuracy) {
                    FlxG.sound.play(Paths.sound('confirmMenu'));
                }
            }, times);
    }

    function popupNumbers() {
        var comboSplit:Array<String> = (curVal + "").split('');
        trace(comboSplit);

        seperatedScore.remove(seperatedScore[0]);
        seperatedScore.remove(seperatedScore[1]);   //idk but ok
        seperatedScore.remove(seperatedScore[2]);
        seperatedScore.remove(seperatedScore[3]);

        trace('after remove ' + seperatedScore);

        if (comboSplit.length == 1)
			{
				seperatedScore.push(0);
				seperatedScore.push(0);
			}
		else if (comboSplit.length == 2)
                seperatedScore.push(0);

        trace('combo split ' + comboSplit);
        

        for(i in 0...comboSplit.length)
            {
                var str:String = comboSplit[i];
                seperatedScore.push(Std.parseInt(str));
            }

        trace('after push ' + seperatedScore);
        seperatedScore.remove(seperatedScore[0]);
        trace('after delete ' + seperatedScore);

        for (i in 0...seperatedScore.length)
            {
                var numScore:FlxSprite = new FlxSprite(0, 0).loadGraphic(Paths.image('num' + Std.int(seperatedScore[i])));
                remove(numScore);
                numScore.x = 0 + (i * 100);
                add(numScore);
            }
    }
}