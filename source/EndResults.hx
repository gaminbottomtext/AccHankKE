package;

import flixel.tweens.FlxTween;
import flixel.group.FlxGroup.FlxTypedGroup;
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
    var fade:FlxSprite;
    var fade2:FlxSprite;
    var backdrop:FlxBackdrop;

    var endNumbers:FlxTypedGroup<FlxSprite>;
    var accAddUp:FlxTypedGroup<FlxSprite>;

    var endNumber:Array<Int> = [0, 0, 0];

    var curVal:Int = 0;

    var times:Int;

    var ranks:Array<String> = ['f', 'e', 'd', 'c', 'b', 'a', 's'];
    var rankInt:Int = 0;

    var bgcolors:Array<Int> = [0xFF5b3c6e, 0xFF5b3c6e, 0xFF5b3c6e, 0xFF3e4599, 0xFF3e4599, 0xFFc16ac8, 0xFF72ccaf];

    var mustFadeAway:Bool = false;

    var percent:FlxSprite;


    override function create() {

        intAccuracy = Std.int(PlayState.accuracy);
        trace(intAccuracy);
        times = intAccuracy + 1;
        //addScore();

        endNumbers = new FlxTypedGroup<FlxSprite>();
        accAddUp = new FlxTypedGroup<FlxSprite>();
        add(endNumbers);
        add(accAddUp);

        backdrop = new FlxBackdrop(Paths.image('menuDesat'));
		backdrop.y = 0;
		backdrop.velocity.set(50, 0);
		add(backdrop);

        fade = new FlxSprite(0, -415).loadGraphic(Paths.image('ranking/fade'));
        add(fade);
        fade2 = new FlxSprite(0, 415).loadGraphic(Paths.image('ranking/fade'));
        add(fade2);

        new FlxTimer().start(1, function(tmr:FlxTimer)
            {
                addScore();
                updateRankLetter();
            });
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
                    mustFadeAway = true;
                    finish();
                    popupNumbers();
                }

                switch (curVal)
                {
                    case 16 | 32 | 48 | 64 | 72 | 94:
                        FlxG.sound.play(Paths.sound('confirmMenu'));
                        FlxG.camera.flash(0xFFFFFFFF, 0.5);
                        rankInt++;
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
                var numScore:FlxSprite = new FlxSprite(800, 75).loadGraphic(Paths.image('num' + Std.int(seperatedScore[i])));
                remove(numScore);
                numScore.x = 800 + (i * 100);
                accAddUp.add(numScore);
                if (!mustFadeAway) {
                    add(numScore);
                }
                else {
                    accAddUp.forEach(function(spr:FlxSprite) {
                        FlxTween.tween(spr, {alpha: 0}, 1);
                    });
                }
            }
        
        endNumber[0] = seperatedScore[0];
        endNumber[1] = seperatedScore[1];
        endNumber[2] = seperatedScore[2];
    }

    override function update(elapsed:Float) {
        updateRankLetter();
    }

    

    function updateRankLetter() {
        backdrop.color = bgcolors[rankInt];
        remove(rankLetter);
        rankLetter = new FlxSprite(850, 230).loadGraphic(Paths.image('ranking/' + ranks[rankInt]));
        add(rankLetter);
    }

    function finish() {
        for (i in 0...endNumber.length)
            {
                var number:FlxSprite = new FlxSprite(410, 310).loadGraphic(Paths.image('num' + endNumber[i]));
                number.x = 410 + (i * 100);
                endNumbers.add(number);
                number.alpha = 0;
                add(number);
            }

        endNumbers.forEach(function(spr:FlxSprite) {
            FlxTween.tween(spr, {alpha: 1}, 1);
        });

        percent = new FlxSprite(740, 360).loadGraphic(Paths.image('ranking/percent'));
        percent.scale.set(2, 2);
        percent.antialiasing = true;
        add(percent);
    }
}