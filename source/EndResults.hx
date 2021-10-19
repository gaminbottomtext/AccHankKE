package;

import flixel.text.FlxText;
import flixel.tweens.FlxEase;
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
    var separatedScoreScore:Array<Int> = [];
    var intAccuracy:Int = 0;
    var score:Int = 0;
    var topCombo:Int;
    var misses:Int;

    var rankLetter:FlxSprite;
    var fade:FlxSprite;
    var fade2:FlxSprite;
    var backdrop:FlxBackdrop;

    var endNumbers:FlxTypedGroup<FlxSprite>;
    var accAddUp:FlxTypedGroup<FlxSprite>;
    var scoreAddUp:FlxTypedGroup<FlxSprite>;
    var comboAddUp:FlxTypedGroup<FlxSprite>;
    var missesAddUp:FlxTypedGroup<FlxSprite>;

    var endNumber:Array<Int> = [0, 0, 0];

    var curVal:Int = 0;

    var times:Int;

    var ranks:Array<String> = ['f', 'e', 'd', 'c', 'b', 'a', 's'];
    var ratingImg:Array<String> = ['shit', 'bad', 'good', 'sick'];
    var ratingString:String;
    var ratingInt:Int = 0;
    var rankInt:Int = 0;

    var bgcolors:Array<Int> = [0xFF5b3c6e, 0xFF5b3c6e, 0xFF5b3c6e, 0xFF3e4599, 0xFF3e4599, 0xFFc16ac8, 0xFF72ccaf];

    var mustFadeAway:Bool = false;

    var percent:FlxSprite;

    var scoreWord:FlxSprite;
    var topcomboWord:FlxSprite;
    var missesWord:FlxSprite;

    var canExit:Bool = false;

    var pressEnter:FlxSprite;

    var ratingSpr:FlxSprite;
    var ratingText:FlxText;

    var rawAccuracy:Float;


    override function create() {

        setRatingString(); 

        intAccuracy = Std.int(PlayState.accuracy);
        score = Std.int(PlayState.instance.songScore);
        topCombo = Std.int(PlayState.highestCombo);
        misses = Std.int(PlayState.misses);

        rawAccuracy = PlayState.accuracy;
        trace(intAccuracy);
        trace(score);
        trace(topCombo);
        times = intAccuracy + 1;
        //addScore();

        endNumbers = new FlxTypedGroup<FlxSprite>();
        accAddUp = new FlxTypedGroup<FlxSprite>();
        scoreAddUp = new FlxTypedGroup<FlxSprite>();
        comboAddUp = new FlxTypedGroup<FlxSprite>();
        missesAddUp = new FlxTypedGroup<FlxSprite>();
        add(endNumbers);
        add(accAddUp);
        add(scoreAddUp);
        add(comboAddUp);
        add(missesAddUp);


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
                    mustFadeAway = true;
                    finish();
                    popupNumbers();
                }

                switch (curVal)
                {
                    case 16 | 32 | 48 | 64 | 72 | 94:
                        FlxG.camera.flash(0xFFFFFFFF, 0.5);
                        rankInt++;
                        FlxG.sound.play(Paths.sound('ranking-' + ranks[rankInt]));
                }
                switch (curVal) {
                    case 20 | 35 | 60 | 90:
                        ratingInt++;
                }
            }, times);
    }

    function setRatingString() {
        if (PlayState.misses == 0 && PlayState.bads == 0 && PlayState.shits == 0 && PlayState.goods == 0) // Marvelous (SICK) Full Combo
            ratingString = "MFC";
        else if (PlayState.misses == 0 && PlayState.bads == 0 && PlayState.shits == 0 && PlayState.goods >= 1) // Good Full Combo (Nothing but Goods & Sicks)
            ratingString = "GFC";
        else if (PlayState.misses == 0) // Regular FC
            ratingString = "FC";
        else if (PlayState.misses < 10) // Single Digit Combo Breaks
            ratingString = "SDCB";
        else
            ratingString = 'CLEAR';

        trace(ratingString);
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
                accAddUp.forEach(function(spr:FlxSprite) {
                    FlxTween.tween(spr, {alpha: 0}, 1);
                });

                var numScore:FlxSprite = new FlxSprite(918, 85).loadGraphic(Paths.image('num' + Std.int(seperatedScore[i])));
                remove(numScore);
                numScore.x = 918 + (i * 50);
                numScore.scale.set(0.5, 0.5);
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

        if (canExit) {
            if (FlxG.keys.justPressed.ENTER) {
                FlxG.sound.play(Paths.sound('confirmMenu'));
                FlxG.camera.flash(0xFFffffff, 1);
                FlxTween.tween(pressEnter,{x: -1000},2,{ease: FlxEase.expoInOut});
                new FlxTimer().start(2, function(tmr:FlxTimer)
                    {
                        FlxG.switchState(new MainMenuState());
                    });
            }
        }
    }

    

    function updateRankLetter() {
        backdrop.color = bgcolors[rankInt];
        remove(rankLetter);
        rankLetter = new FlxSprite(900, 200).loadGraphic(Paths.image('ranking/' + ranks[rankInt]));
        rankLetter.scale.set(2, 2);

        add(rankLetter);
    }

    function finish() {
        for (i in 0...endNumber.length)
            {
                var number:FlxSprite = new FlxSprite(574, 344).loadGraphic(Paths.image('num' + endNumber[i]));
                number.x = 574 + (i * 47);
                number.scale.set(0.5, 0.5);
                endNumbers.add(number);
                number.alpha = 0;
                add(number);
            }

        FlxG.sound.play(Paths.sound('cancelMenu'));

        endNumbers.forEach(function(spr:FlxSprite) {
            FlxTween.tween(spr, {alpha: 1}, 1);
        });

        percent = new FlxSprite(754, 367).loadGraphic(Paths.image('ranking/percent'));
        percent.antialiasing = true;
        add(percent);

        ratingSpr = new FlxSprite(116, 236).loadGraphic(Paths.image(ratingImg[ratingInt], 'shared'));
        ratingSpr.scale.set(20, 20);
        FlxTween.tween(ratingSpr.scale,{x: 1, y: 1}, 0.99,{ease: FlxEase.expoInOut, onComplete: function(twn:FlxTween) {
            FlxG.camera.flash(0xffffffff, 1);
            FlxG.camera.shake(0.01, 1);
            FlxG.sound.play(Paths.sound('unlocksound'));
        }});
        add(ratingSpr);

        new FlxTimer().start(1, function(tmr:FlxTimer)
            {
                popupScore();
                popupTopCombo();
                popupMisses();
                allowExit();
                FlxG.sound.play(Paths.sound('cancelMenu'));
            });

        ratingText = new FlxText(633, 438, 0, ratingString + '\n${Ratings.letterRankGenerator(rawAccuracy)}', 48);
        ratingText.font = Paths.font('fnf.ttf');
        ratingText.alignment = CENTER;
        add(ratingText);
    }

    function popupScore() {
        var comboSplitScore:Array<String> = (score + "").split('');
        trace(comboSplitScore);

        scoreWord = new FlxSprite(207, 425).loadGraphic(Paths.image('ranking/score'));
        add(scoreWord);

        for (i in 0...comboSplitScore.length) {
            var number:FlxSprite = new FlxSprite(130, 420).loadGraphic(Paths.image('num' + comboSplitScore[i]));
            number.x = 130 + (i * 47);
            number.scale.set(0.5, 0.5);
            scoreAddUp.add(number);
            number.alpha = 0;
            add(number);

            scoreAddUp.forEach(function(spr:FlxSprite) {
                FlxTween.tween(spr, {alpha: 1}, 1);
            });

            trace('added num${comboSplitScore[i]}');

            scoreWord.x = 207 + (i * 47);
        }
    }

    function popupTopCombo() {
        var comboSplitTopcombo:Array<String> = (topCombo + "").split('');
        trace(comboSplitTopcombo);

        topcomboWord = new FlxSprite(207, 525).loadGraphic(Paths.image('ranking/topcombo'));
        add(topcomboWord);

        for (i in 0...comboSplitTopcombo.length) {
            var number:FlxSprite = new FlxSprite(130, 520).loadGraphic(Paths.image('num' + comboSplitTopcombo[i]));
            number.x = 130 + (i * 47);
            number.scale.set(0.5, 0.5);
            comboAddUp.add(number);
            number.alpha = 0;
            add(number);

            comboAddUp.forEach(function(spr:FlxSprite) {
                FlxTween.tween(spr, {alpha: 1}, 1);
            });

            trace('added num${comboSplitTopcombo[i]}');

            topcomboWord.x = 207 + (i * 47);
        }
    }

    function popupMisses() {
        var comboSplitMisses:Array<String> = (misses + "").split('');
        trace(comboSplitMisses);

        missesWord = new FlxSprite(207, 625).loadGraphic(Paths.image('ranking/misses'));
        add(missesWord);

        for (i in 0...comboSplitMisses.length) {
            var number:FlxSprite = new FlxSprite(130, 620).loadGraphic(Paths.image('num' + comboSplitMisses[i]));
            number.x = 130 + (i * 47);
            number.scale.set(0.5, 0.5);
            missesAddUp.add(number);
            number.alpha = 0;
            add(number);

            missesAddUp.forEach(function(spr:FlxSprite) {
                FlxTween.tween(spr, {alpha: 1}, 1);
            });

            trace('added num${comboSplitMisses[i]}');

            missesWord.x = 207 + (i * 47);
        }
    }

    function allowExit() {
        new FlxTimer().start(1, function(tmr:FlxTimer)
            {
                canExit = true;

                pressEnter = new FlxSprite(-1000, 35).loadGraphic(Paths.image('ranking/pressenter'));
                add(pressEnter);

                FlxTween.tween(pressEnter,{x: 95},2,{ease: FlxEase.expoInOut});
            });
    }
}