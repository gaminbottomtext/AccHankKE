#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_25_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",25,0x0e5db805)
static const ::String _hx_array_data_205e8859_1[] = {
	HX_("story mode",6e,d7,a7,5e),HX_("freeplay",a0,90,86,22),HX_("donate",6f,f1,29,2e),HX_("options",5e,33,fe,df),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_51_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",51,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_107_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",107,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_233_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",233,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_140_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",140,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_197_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",197,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_203_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",203,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_213_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",213,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_220_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",220,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_238_goToState,"MainMenuState","goToState",0xcf6f00f9,"MainMenuState.goToState","MainMenuState.hx",238,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_268_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",268,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_257_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",257,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_39_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",39,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_41_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",41,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_43_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",43,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_44_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",44,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_48_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",48,0x0e5db805)

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_25_new)
HXLINE( 137)		this->selectedSomethin = false;
HXLINE(  32)		this->optionShit = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_1,4);
HXLINE(  27)		this->curSelected = 0;
HXLINE(  25)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6915cded || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_51_create)
HXDLIN(  51)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  57)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE(  59)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  59)			::String library = null();
HXDLIN(  59)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
            		}
HXLINE(  62)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  64)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,null(),null());
HXDLIN(  64)		::String library = null();
HXDLIN(  64)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  65)		bg1->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  66)		bg1->scrollFactor->set_y(((Float)0.10));
HXLINE(  67)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)1.1))),null());
HXLINE(  68)		bg1->updateHitbox();
HXLINE(  69)		bg1->screenCenter(null());
HXLINE(  70)		bg1->set_antialiasing(true);
HXLINE(  71)		this->add(bg1);
HXLINE(  73)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  74)		this->add(this->camFollow);
HXLINE(  76)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  76)		::String library1 = null();
HXDLIN(  76)		this->magenta = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1),null(),null(),null(),null(),null());
HXLINE(  77)		this->magenta->scrollFactor->set_x(( (Float)(0) ));
HXLINE(  78)		this->magenta->scrollFactor->set_y(((Float)0.10));
HXLINE(  79)		 ::flixel::FlxSprite _hx_tmp1 = this->magenta;
HXDLIN(  79)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->magenta->get_width() * ((Float)1.1))),null());
HXLINE(  80)		this->magenta->updateHitbox();
HXLINE(  81)		this->magenta->screenCenter(null());
HXLINE(  82)		this->magenta->set_visible(false);
HXLINE(  83)		this->magenta->set_antialiasing(true);
HXLINE(  84)		this->magenta->set_color(-167525);
HXLINE(  85)		this->add(this->magenta);
HXLINE(  88)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  89)		this->add(this->menuItems);
HXLINE(  91)		::String library2 = null();
HXDLIN(  91)		::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FNF_main_menu_assets",be,dc,57,e2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library2);
HXDLIN(  91)		 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("FNF_main_menu_assets",be,dc,57,e2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2));
HXLINE(  93)		{
HXLINE(  93)			int _g = 0;
HXDLIN(  93)			int _g1 = this->optionShit->length;
HXDLIN(  93)			while((_g < _g1)){
HXLINE(  93)				_g = (_g + 1);
HXDLIN(  93)				int i = (_g - 1);
HXLINE(  95)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.6)),null());
HXLINE(  96)				menuItem->set_frames(tex1);
HXLINE(  97)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->optionShit->__get(i) + HX_(" basic",8e,b6,25,79)),24,null(),null(),null());
HXLINE(  98)				menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->optionShit->__get(i) + HX_(" white",89,d6,28,95)),24,null(),null(),null());
HXLINE(  99)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 100)				menuItem->ID = i;
HXLINE( 101)				menuItem->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 102)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 103)				menuItem->scrollFactor->set(null(),null());
HXLINE( 104)				menuItem->set_antialiasing(true);
HXLINE( 105)				if (::MainMenuState_obj::firstStart) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween flxTween){
            						HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_107_create)
HXLINE( 108)						::MainMenuState_obj::finishedFunnyMove = true;
HXLINE( 109)						_gthis->changeItem(null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 106)					::flixel::tweens::FlxTween_obj::tween(menuItem, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),(60 + (i * 160)))),(1 + (( (Float)(i) ) * ((Float)0.25))), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            				}
            				else {
HXLINE( 112)					menuItem->set_y(( (Float)((60 + (i * 160))) ));
            				}
            			}
            		}
HXLINE( 115)		::MainMenuState_obj::firstStart = false;
HXLINE( 117)		::flixel::FlxG_obj::camera->follow(this->camFollow,null(),(((Float)0.60) * (( (Float)(60) ) / ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("fpsCap",a9,7b,7e,91),::hx::paccDynamic)) ))));
HXLINE( 119)		::String versionShit;
HXDLIN( 119)		if (::Main_obj::watermarks) {
HXLINE( 119)			versionShit = ((HX_(" FNF - ",55,b8,48,47) + ::MainMenuState_obj::kadeEngineVer) + HX_(" Kade Engine",0b,2a,4a,30));
            		}
            		else {
HXLINE( 119)			versionShit = HX_("",00,00,00,00);
            		}
HXDLIN( 119)		 ::flixel::text::FlxText versionShit1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,5,(::flixel::FlxG_obj::height - 18),0,(::MainMenuState_obj::gameVer + versionShit),12,null());
HXLINE( 120)		versionShit1->scrollFactor->set(null(),null());
HXLINE( 121)		versionShit1->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 122)		this->add(versionShit1);
HXLINE( 127)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("dfjk",c3,18,67,42),::hx::paccDynamic)) )) {
HXLINE( 128)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),true);
            		}
            		else {
HXLINE( 130)			::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Duo(true),true);
            		}
HXLINE( 132)		this->changeItem(null());
HXLINE( 134)		this->super::create();
            	}


void MainMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_233_update)
HXLINE( 233)			spr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_140_update)
HXDLIN( 140)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 141)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 143)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 143)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 146)		if (!(this->selectedSomethin)) {
HXLINE( 148)			 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 150)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 152)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 152)				int id = 11;
HXDLIN( 152)				 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 152)				int Status = _this->status;
HXDLIN( 152)				bool _hx_tmp;
HXDLIN( 152)				switch((int)(id)){
            					case (int)-2: {
HXLINE( 152)						_hx_tmp = _this1->anyButton(Status);
            					}
            					break;
            					case (int)-1: {
HXLINE( 152)						_hx_tmp = !(_this1->anyButton(Status));
            					}
            					break;
            					default:{
HXLINE( 152)						int RawID = _this1->mapping->getRawID(id);
HXDLIN( 152)						 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 152)						if (::hx::IsNotNull( button )) {
HXLINE( 152)							_hx_tmp = button->hasState(Status);
            						}
            						else {
HXLINE( 152)							_hx_tmp = false;
            						}
            					}
            				}
HXDLIN( 152)				if (_hx_tmp) {
HXLINE( 154)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 154)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 155)					this->changeItem(-1);
            				}
HXLINE( 157)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this2 = gamepad->justPressed;
HXDLIN( 157)				int id1 = 12;
HXDLIN( 157)				 ::flixel::input::gamepad::FlxGamepad _this3 = _this2->gamepad;
HXDLIN( 157)				int Status1 = _this2->status;
HXDLIN( 157)				bool _hx_tmp1;
HXDLIN( 157)				switch((int)(id1)){
            					case (int)-2: {
HXLINE( 157)						_hx_tmp1 = _this3->anyButton(Status1);
            					}
            					break;
            					case (int)-1: {
HXLINE( 157)						_hx_tmp1 = !(_this3->anyButton(Status1));
            					}
            					break;
            					default:{
HXLINE( 157)						int RawID = _this3->mapping->getRawID(id1);
HXDLIN( 157)						 ::flixel::input::gamepad::FlxGamepadButton button = _this3->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 157)						if (::hx::IsNotNull( button )) {
HXLINE( 157)							_hx_tmp1 = button->hasState(Status1);
            						}
            						else {
HXLINE( 157)							_hx_tmp1 = false;
            						}
            					}
            				}
HXDLIN( 157)				if (_hx_tmp1) {
HXLINE( 159)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 159)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 160)					this->changeItem(1);
            				}
            			}
HXLINE( 164)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 164)			if (_this->keyManager->checkStatus(38,_this->status)) {
HXLINE( 166)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 167)				this->changeItem(-1);
            			}
HXLINE( 170)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 170)			if (_this1->keyManager->checkStatus(40,_this1->status)) {
HXLINE( 172)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 172)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 173)				this->changeItem(1);
            			}
HXLINE( 176)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 178)				 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 178)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 178)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 181)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 183)				if ((this->optionShit->__get(this->curSelected) == HX_("donate",6f,f1,29,2e))) {
HXLINE( 185)					this->fancyOpenURL(HX_("https://ninja-muffin24.itch.io/funkin",69,b0,72,92));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::MainMenuState,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::FlxSprite spr){
            						HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_197_update)
HXLINE( 197)						if ((_gthis->curSelected != spr->ID)) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween twn){
            								HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_203_update)
HXLINE( 203)								spr->kill();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 199)							::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.3), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            						}
            						else {
HXLINE( 209)							if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::MainMenuState,_gthis) HXARGC(1)
            								void _hx_run( ::flixel::effects::FlxFlicker flick){
            									HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_213_update)
HXLINE( 213)									_gthis->goToState();
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 211)								::flixel::effects::FlxFlicker_obj::flicker(spr,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            							}
            							else {
            								HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::MainMenuState,_gthis) HXARGC(1)
            								void _hx_run( ::flixel::util::FlxTimer tmr){
            									HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_220_update)
HXLINE( 220)									_gthis->goToState();
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 218)								 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_2(_gthis)),null());
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 189)					this->selectedSomethin = true;
HXLINE( 190)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 190)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 192)					if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) )) {
HXLINE( 193)						::flixel::effects::FlxFlicker_obj::flicker(this->magenta,((Float)1.1),((Float)0.15),false,null(),null(),null());
            					}
HXLINE( 195)					this->menuItems->forEach( ::Dynamic(new _hx_Closure_3(_gthis)),null());
            				}
            			}
            		}
HXLINE( 229)		this->super::update(elapsed);
HXLINE( 231)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_4()),null());
            	}


void MainMenuState_obj::goToState(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_238_goToState)
HXLINE( 239)		::String daChoice = this->optionShit->__get(this->curSelected);
HXLINE( 241)		::String _hx_switch_0 = daChoice;
            		if (  (_hx_switch_0==HX_("freeplay",a0,90,86,22)) ){
HXLINE( 247)			{
HXLINE( 247)				 ::flixel::FlxState nextState =  ::FreeplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 247)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 247)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 249)			::haxe::Log_obj::trace(HX_("Freeplay Menu Selected",9c,6d,5a,ca),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),249,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 246)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("options",5e,33,fe,df)) ){
HXLINE( 252)			 ::flixel::FlxState nextState =  ::OptionsMenu_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 252)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 252)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
HXDLIN( 252)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("story mode",6e,d7,a7,5e)) ){
HXLINE( 244)			{
HXLINE( 244)				 ::flixel::FlxState nextState =  ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 244)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 244)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
HXLINE( 245)			::haxe::Log_obj::trace(HX_("Story Menu Selected",71,ff,9b,4a),::hx::SourceInfo(HX_("source/MainMenuState.hx",f9,ee,86,cf),245,HX_("MainMenuState",59,88,5e,20),HX_("goToState",4e,a5,e1,c9)));
HXLINE( 243)			goto _hx_goto_11;
            		}
            		_hx_goto_11:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MainMenuState_obj,goToState,(void))

void MainMenuState_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_268_changeItem)
HXLINE( 269)			spr->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 271)			bool _hx_tmp;
HXDLIN( 271)			if ((spr->ID == _gthis->curSelected)) {
HXLINE( 271)				_hx_tmp = ::MainMenuState_obj::finishedFunnyMove;
            			}
            			else {
HXLINE( 271)				_hx_tmp = false;
            			}
HXDLIN( 271)			if (_hx_tmp) {
HXLINE( 273)				spr->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 274)				 ::flixel::FlxObject _gthis1 = _gthis->camFollow;
HXDLIN( 274)				Float _hx_tmp = spr->getGraphicMidpoint(null())->x;
HXDLIN( 274)				_gthis1->setPosition(_hx_tmp,spr->getGraphicMidpoint(null())->y);
            			}
HXLINE( 277)			spr->updateHitbox();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_257_changeItem)
HXDLIN( 257)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 258)		if (::MainMenuState_obj::finishedFunnyMove) {
HXLINE( 260)			 ::MainMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 260)			_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE( 262)			if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 263)				this->curSelected = 0;
            			}
HXLINE( 264)			if ((this->curSelected < 0)) {
HXLINE( 265)				this->curSelected = (this->menuItems->length - 1);
            			}
            		}
HXLINE( 267)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeItem,(void))

bool MainMenuState_obj::firstStart;

::String MainMenuState_obj::nightly;

::String MainMenuState_obj::kadeEngineVer;

::String MainMenuState_obj::gameVer;

bool MainMenuState_obj::finishedFunnyMove;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(newGaming,"newGaming");
	HX_MARK_MEMBER_NAME(newGaming2,"newGaming2");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(newGaming,"newGaming");
	HX_VISIT_MEMBER_NAME(newGaming2,"newGaming2");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"newGaming") ) { return ::hx::Val( newGaming ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"goToState") ) { return ::hx::Val( goToState_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { return ::hx::Val( newGaming2 ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { outValue = ( nightly ); return true; }
		if (HX_FIELD_EQ(inName,"gameVer") ) { outValue = ( gameVer ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { outValue = ( firstStart ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { outValue = ( kadeEngineVer ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finishedFunnyMove") ) { outValue = ( finishedFunnyMove ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming") ) { newGaming=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newGaming2") ) { newGaming2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"nightly") ) { nightly=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"gameVer") ) { gameVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firstStart") ) { firstStart=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kadeEngineVer") ) { kadeEngineVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finishedFunnyMove") ) { finishedFunnyMove=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("newGaming",2f,8a,ad,0e));
	outFields->push(HX_("newGaming2",23,5f,2b,c9));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MainMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming),HX_("newGaming",2f,8a,ad,0e)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MainMenuState_obj,newGaming2),HX_("newGaming2",23,5f,2b,c9)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(MainMenuState_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &MainMenuState_obj::firstStart,HX_("firstStart",12,be,e9,c1)},
	{::hx::fsString,(void *) &MainMenuState_obj::nightly,HX_("nightly",65,3e,0e,6d)},
	{::hx::fsString,(void *) &MainMenuState_obj::kadeEngineVer,HX_("kadeEngineVer",2a,26,b2,03)},
	{::hx::fsString,(void *) &MainMenuState_obj::gameVer,HX_("gameVer",91,29,72,89)},
	{::hx::fsBool,(void *) &MainMenuState_obj::finishedFunnyMove,HX_("finishedFunnyMove",a9,44,72,47)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuItems",e1,15,e5,5c),
	HX_("optionShit",d5,2d,ee,91),
	HX_("newGaming",2f,8a,ad,0e),
	HX_("newGaming2",23,5f,2b,c9),
	HX_("magenta",29,ba,9d,0e),
	HX_("camFollow",e0,6e,47,22),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("goToState",4e,a5,e1,c9),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::nightly,"nightly");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::gameVer,"gameVer");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::finishedFunnyMove,"finishedFunnyMove");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::firstStart,"firstStart");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::nightly,"nightly");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::kadeEngineVer,"kadeEngineVer");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::gameVer,"gameVer");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::finishedFunnyMove,"finishedFunnyMove");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("firstStart",12,be,e9,c1),
	HX_("nightly",65,3e,0e,6d),
	HX_("kadeEngineVer",2a,26,b2,03),
	HX_("gameVer",91,29,72,89),
	HX_("finishedFunnyMove",a9,44,72,47),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_39_boot)
HXDLIN(  39)		firstStart = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_41_boot)
HXDLIN(  41)		nightly = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_43_boot)
HXDLIN(  43)		kadeEngineVer = (HX_("1.5.4",fe,9c,32,55) + ::MainMenuState_obj::nightly);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_44_boot)
HXDLIN(  44)		gameVer = HX_("0.2.7.1",40,93,0b,19);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_48_boot)
HXDLIN(  48)		finishedFunnyMove = false;
            	}
}

