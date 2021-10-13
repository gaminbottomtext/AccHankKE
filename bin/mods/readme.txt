************************ SONGS ************************


	HOW TO USE SONGS.TXT

For adding songs in a desired order, you just have to add the folder name of your
custom song(s) to songs.txt, inside mods/charts/ folder, in the order you want
them to be, if you don't care about the song order, simply don't do shit.


	CREATING A CUSTOM CHART

Let's say your custom song is named "chart", this is how your custom song folder
should be looking like:

	chart-easy.json
	chart.json
	chart-hard.json
	Inst.ogg
	Voices.ogg (NOT NEEDED IF YOU DISABLED VOCALS ON YOUR CHART)
	config.json

Check mod_example's config.json file for an example on how to use




************************ CHARACTERS ************************


Characters are a bit complex for now, i might do a Character Customizer
in the future (which would replace Animation Debug), but yeah. Good luck.

Similar to songs.txt, you can use characters.txt to add characters in a
specific order of your preference.

Check bf-bald's config.json file, it explains pretty much everything you
would need to know. Seriously, check it out before doing questions.



	I'M GETTING ERRORS

- ValueException:
You've probably put an extra comma, [] or {}. Double check your config.json
If it's not that, your character's .xml is not encrypted to UTF-8 with BOM

- Null Object Reference:
This could be a lot of stuff, either missing an Animation (or named it wrong),
Missing .xml or missing .png


	I STILL NEED HELP

If you need help in something, go ask about it on the Discord server:
https://discord.gg/tmyPafQbmF