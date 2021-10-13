#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyBindMenu
#include <KeyBindMenu.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
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
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b43d8094f4720380_32_new,"KeyBindMenu","new",0x54f9290d,"KeyBindMenu.new","KeyBindMenu.hx",32,0x3c137703)
static const ::String _hx_array_data_e27a9e9b_1[] = {
	HX_("ESCAPE",81,ef,5c,8d),HX_("ENTER",f8,a4,74,ee),HX_("BACKSPACE",1f,f5,42,c6),HX_("SPACE",a6,c4,54,ff),HX_("TAB",35,f6,3f,00),
};
static const ::String _hx_array_data_e27a9e9b_2[] = {
	HX_("DPAD_LEFT",17,2a,9d,8c),HX_("DPAD_DOWN",72,1a,5b,87),HX_("DPAD_UP",6b,00,87,a2),HX_("DPAD_RIGHT",ac,b7,f4,f3),
};
static const ::String _hx_array_data_e27a9e9b_3[] = {
	HX_("A",41,00,00,00),HX_("S",53,00,00,00),HX_("W",57,00,00,00),HX_("D",44,00,00,00),HX_("R",52,00,00,00),
};
static const ::String _hx_array_data_e27a9e9b_4[] = {
	HX_("LEFT",07,d0,70,32),HX_("DOWN",62,c0,2e,2d),HX_("UP",5b,4a,00,00),HX_("RIGHT",bc,43,52,67),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_60_create,"KeyBindMenu","create",0x79aaf86f,"KeyBindMenu.create","KeyBindMenu.hx",60,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_116_update,"KeyBindMenu","update",0x84a1177c,"KeyBindMenu.update","KeyBindMenu.hx",116,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_250_textUpdate,"KeyBindMenu","textUpdate",0x7642cd89,"KeyBindMenu.textUpdate","KeyBindMenu.hx",250,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_278_save,"KeyBindMenu","save",0x0855c9f0,"KeyBindMenu.save","KeyBindMenu.hx",278,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_296_reset,"KeyBindMenu","reset",0xb1f6e7bc,"KeyBindMenu.reset","KeyBindMenu.hx",296,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_314_quit,"KeyBindMenu","quit",0x07127e82,"KeyBindMenu.quit","KeyBindMenu.hx",314,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_305_quit,"KeyBindMenu","quit",0x07127e82,"KeyBindMenu.quit","KeyBindMenu.hx",305,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_319_addKeyGamepad,"KeyBindMenu","addKeyGamepad",0x62689d30,"KeyBindMenu.addKeyGamepad","KeyBindMenu.hx",319,0x3c137703)
static const ::String _hx_array_data_e27a9e9b_17[] = {
	HX_("START",42,ac,f9,01),HX_("RIGHT_TRIGGER",55,e2,81,00),HX_("LEFT_TRIGGER",a0,31,c6,eb),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_351_addKey,"KeyBindMenu","addKey",0x9c9e2b71,"KeyBindMenu.addKey","KeyBindMenu.hx",351,0x3c137703)
HX_LOCAL_STACK_FRAME(_hx_pos_b43d8094f4720380_394_changeItem,"KeyBindMenu","changeItem",0xd855c196,"KeyBindMenu.changeItem","KeyBindMenu.hx",394,0x3c137703)

void KeyBindMenu_obj::__construct( ::Dynamic BGColor){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_32_new)
HXLINE( 113)		this->frames = 0;
HXLINE(  57)		this->state = HX_("select",fc,1a,33,6a);
HXLINE(  52)		this->blacklist = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_1,5);
HXLINE(  51)		this->tempKey = HX_("",00,00,00,00);
HXLINE(  47)		this->gpKeys = ::Array_obj< ::String >::__new(4)->init(0, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gpleftBind",8d,64,a6,ef),::hx::paccDynamic)))->init(1, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gpdownBind",68,1e,93,1d),::hx::paccDynamic)))->init(2, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gpupBind",a1,30,42,a5),::hx::paccDynamic)))->init(3, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("gprightBind",70,e4,ee,a5),::hx::paccDynamic)));
HXLINE(  43)		this->keys = ::Array_obj< ::String >::__new(4)->init(0, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)))->init(1, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)))->init(2, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)))->init(3, ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)));
HXLINE(  41)		this->curSelected = 0;
HXLINE(  40)		this->defaultGpKeys = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_2,4);
HXLINE(  39)		this->defaultKeys = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_3,5);
HXLINE(  38)		this->keyText = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_4,4);
HXLINE(  32)		super::__construct(BGColor);
            	}

Dynamic KeyBindMenu_obj::__CreateEmpty() { return new KeyBindMenu_obj; }

void *KeyBindMenu_obj::_hx_vtable = 0;

Dynamic KeyBindMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyBindMenu_obj > _hx_result = new KeyBindMenu_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool KeyBindMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0a838ef3) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a838ef3;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void KeyBindMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b43d8094f4720380_60_create)
HXLINE(  62)		{
HXLINE(  62)			int _g = 0;
HXDLIN(  62)			int _g1 = this->keys->length;
HXDLIN(  62)			while((_g < _g1)){
HXLINE(  62)				_g = (_g + 1);
HXDLIN(  62)				int i = (_g - 1);
HXLINE(  64)				::String k = this->keys->__get(i);
HXLINE(  65)				if (::hx::IsNull( k )) {
HXLINE(  66)					this->keys[i] = this->defaultKeys->__get(i);
            				}
            			}
            		}
HXLINE(  69)		{
HXLINE(  69)			int _g2 = 0;
HXDLIN(  69)			int _g3 = this->gpKeys->length;
HXDLIN(  69)			while((_g2 < _g3)){
HXLINE(  69)				_g2 = (_g2 + 1);
HXDLIN(  69)				int i = (_g2 - 1);
HXLINE(  71)				::String k = this->gpKeys->__get(i);
HXLINE(  72)				if (::hx::IsNull( k )) {
HXLINE(  73)					this->gpKeys[i] = this->defaultGpKeys->__get(i);
            				}
            			}
            		}
HXLINE(  78)		this->persistentUpdate = true;
HXLINE(  80)		this->keyTextDisplay =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-10,0,1280,HX_("",00,00,00,00),72,null());
HXLINE(  81)		this->keyTextDisplay->scrollFactor->set(0,0);
HXLINE(  82)		this->keyTextDisplay->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),42,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  83)		this->keyTextDisplay->set_borderSize(( (Float)(2) ));
HXLINE(  84)		this->keyTextDisplay->set_borderQuality(( (Float)(3) ));
HXLINE(  86)		this->blackBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  87)		this->add(this->blackBox);
HXLINE(  89)		::String _hx_tmp;
HXDLIN(  89)		if (::KeyBinds_obj::gamepad) {
HXLINE(  89)			_hx_tmp = HX_("GAMEPAD",81,b4,59,09);
            		}
            		else {
HXLINE(  89)			_hx_tmp = HX_("KEYBOARD",a7,4c,af,c1);
            		}
HXDLIN(  89)		::String _hx_tmp1;
HXDLIN(  89)		if (::KeyBinds_obj::gamepad) {
HXLINE(  89)			_hx_tmp1 = HX_("RIGHT Trigger",b4,20,95,3a);
            		}
            		else {
HXLINE(  89)			_hx_tmp1 = HX_("Escape",a1,b7,6e,0f);
            		}
HXDLIN(  89)		::String _hx_tmp2;
HXDLIN(  89)		if (::KeyBinds_obj::gamepad) {
HXLINE(  89)			_hx_tmp2 = HX_("LEFT Trigger",ff,6f,d9,25);
            		}
            		else {
HXLINE(  89)			_hx_tmp2 = HX_("Backspace",1f,65,bd,6c);
            		}
HXDLIN(  89)		::String _hx_tmp3;
HXDLIN(  89)		if (::KeyBinds_obj::gamepad) {
HXLINE(  89)			_hx_tmp3 = HX_("START To change a keybind",b4,26,64,5b);
            		}
            		else {
HXLINE(  89)			_hx_tmp3 = HX_("",00,00,00,00);
            		}
HXDLIN(  89)		this->infoText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-10,580,1280,((((((((HX_("Current Mode: ",10,12,a3,12) + _hx_tmp) + HX_(". Press TAB to switch\n(",7d,8c,1b,61)) + _hx_tmp1) + HX_(" to save, ",d6,9e,75,c1)) + _hx_tmp2) + HX_(" to leave without saving. ",72,b0,af,25)) + _hx_tmp3) + HX_(")",29,00,00,00)),72,null());
HXLINE(  90)		this->infoText->scrollFactor->set(0,0);
HXLINE(  91)		this->infoText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),24,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  92)		this->infoText->set_borderSize(( (Float)(2) ));
HXLINE(  93)		this->infoText->set_borderQuality(( (Float)(3) ));
HXLINE(  94)		this->infoText->set_alpha(( (Float)(0) ));
HXLINE(  95)		this->infoText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  96)		this->add(this->infoText);
HXLINE(  97)		this->add(this->keyTextDisplay);
HXLINE(  99)		this->blackBox->set_alpha(( (Float)(0) ));
HXLINE( 100)		this->keyTextDisplay->set_alpha(( (Float)(0) ));
HXLINE( 102)		::flixel::tweens::FlxTween_obj::tween(this->keyTextDisplay, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 103)		::flixel::tweens::FlxTween_obj::tween(this->infoText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)1.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 104)		::flixel::tweens::FlxTween_obj::tween(this->blackBox, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.7))),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 106)		::OptionsMenu_obj::instance->acceptInput = false;
HXLINE( 108)		this->textUpdate();
HXLINE( 110)		this->super::create();
            	}


void KeyBindMenu_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_116_update)
HXLINE( 117)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 119)		if ((this->frames <= 10)) {
HXLINE( 120)			this->frames++;
            		}
HXLINE( 122)		::String _hx_switch_0 = this->state;
            		if (  (_hx_switch_0==HX_("exiting",84,dc,da,24)) ){
HXLINE( 235)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("input",0a,c4,1d,be)) ){
HXLINE( 182)			this->tempKey = this->keys->__get(this->curSelected);
HXLINE( 183)			this->keys[this->curSelected] = HX_("?",3f,00,00,00);
HXLINE( 184)			if (::KeyBinds_obj::gamepad) {
HXLINE( 185)				this->gpKeys[this->curSelected] = HX_("?",3f,00,00,00);
            			}
HXLINE( 186)			this->textUpdate();
HXLINE( 187)			this->state = HX_("waiting",8d,e9,27,df);
HXLINE( 181)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("select",fc,1a,33,6a)) ){
HXLINE( 125)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 125)			if (_this->keyManager->checkStatus(38,_this->status)) {
HXLINE( 127)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 127)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 128)				this->changeItem(-1);
            			}
HXLINE( 131)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 131)			if (_this1->keyManager->checkStatus(40,_this1->status)) {
HXLINE( 133)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 133)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 134)				this->changeItem(1);
            			}
HXLINE( 137)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 137)			if (_this2->keyManager->checkStatus(9,_this2->status)) {
HXLINE( 139)				::KeyBinds_obj::gamepad = !(::KeyBinds_obj::gamepad);
HXLINE( 140)				::String _hx_tmp;
HXDLIN( 140)				if (::KeyBinds_obj::gamepad) {
HXLINE( 140)					_hx_tmp = HX_("GAMEPAD",81,b4,59,09);
            				}
            				else {
HXLINE( 140)					_hx_tmp = HX_("KEYBOARD",a7,4c,af,c1);
            				}
HXDLIN( 140)				::String _hx_tmp1;
HXDLIN( 140)				if (::KeyBinds_obj::gamepad) {
HXLINE( 140)					_hx_tmp1 = HX_("RIGHT Trigger",b4,20,95,3a);
            				}
            				else {
HXLINE( 140)					_hx_tmp1 = HX_("Escape",a1,b7,6e,0f);
            				}
HXDLIN( 140)				::String _hx_tmp2;
HXDLIN( 140)				if (::KeyBinds_obj::gamepad) {
HXLINE( 140)					_hx_tmp2 = HX_("LEFT Trigger",ff,6f,d9,25);
            				}
            				else {
HXLINE( 140)					_hx_tmp2 = HX_("Backspace",1f,65,bd,6c);
            				}
HXDLIN( 140)				::String _hx_tmp3;
HXDLIN( 140)				if (::KeyBinds_obj::gamepad) {
HXLINE( 140)					_hx_tmp3 = HX_("START To change a keybind",b4,26,64,5b);
            				}
            				else {
HXLINE( 140)					_hx_tmp3 = HX_("",00,00,00,00);
            				}
HXDLIN( 140)				this->infoText->set_text(((((((((HX_("Current Mode: ",10,12,a3,12) + _hx_tmp) + HX_(". Press TAB to switch\n(",7d,8c,1b,61)) + _hx_tmp1) + HX_(" to save, ",d6,9e,75,c1)) + _hx_tmp2) + HX_(" to leave without saving. ",72,b0,af,25)) + _hx_tmp3) + HX_(")",29,00,00,00)));
HXLINE( 141)				this->textUpdate();
            			}
HXLINE( 144)			 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 144)			if (_this3->keyManager->checkStatus(13,_this3->status)) {
HXLINE( 145)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 145)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 146)				this->state = HX_("input",0a,c4,1d,be);
            			}
            			else {
HXLINE( 148)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 148)				if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 149)					this->quit();
            				}
            				else {
HXLINE( 151)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 151)					if (_this->keyManager->checkStatus(8,_this->status)) {
HXLINE( 152)						this->reset();
            					}
            				}
            			}
HXLINE( 154)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 156)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 156)				int id = 11;
HXDLIN( 156)				 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 156)				int Status = _this->status;
HXDLIN( 156)				bool _hx_tmp;
HXDLIN( 156)				switch((int)(id)){
            					case (int)-2: {
HXLINE( 156)						_hx_tmp = _this1->anyButton(Status);
            					}
            					break;
            					case (int)-1: {
HXLINE( 156)						_hx_tmp = !(_this1->anyButton(Status));
            					}
            					break;
            					default:{
HXLINE( 156)						int RawID = _this1->mapping->getRawID(id);
HXDLIN( 156)						 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 156)						if (::hx::IsNotNull( button )) {
HXLINE( 156)							_hx_tmp = button->hasState(Status);
            						}
            						else {
HXLINE( 156)							_hx_tmp = false;
            						}
            					}
            				}
HXDLIN( 156)				if (_hx_tmp) {
HXLINE( 158)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 158)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 159)					this->changeItem(-1);
HXLINE( 160)					this->textUpdate();
            				}
HXLINE( 162)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this2 = gamepad->justPressed;
HXDLIN( 162)				int id1 = 12;
HXDLIN( 162)				 ::flixel::input::gamepad::FlxGamepad _this3 = _this2->gamepad;
HXDLIN( 162)				int Status1 = _this2->status;
HXDLIN( 162)				bool _hx_tmp1;
HXDLIN( 162)				switch((int)(id1)){
            					case (int)-2: {
HXLINE( 162)						_hx_tmp1 = _this3->anyButton(Status1);
            					}
            					break;
            					case (int)-1: {
HXLINE( 162)						_hx_tmp1 = !(_this3->anyButton(Status1));
            					}
            					break;
            					default:{
HXLINE( 162)						int RawID = _this3->mapping->getRawID(id1);
HXDLIN( 162)						 ::flixel::input::gamepad::FlxGamepadButton button = _this3->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 162)						if (::hx::IsNotNull( button )) {
HXLINE( 162)							_hx_tmp1 = button->hasState(Status1);
            						}
            						else {
HXLINE( 162)							_hx_tmp1 = false;
            						}
            					}
            				}
HXDLIN( 162)				if (_hx_tmp1) {
HXLINE( 164)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 164)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 165)					this->changeItem(1);
HXLINE( 166)					this->textUpdate();
            				}
HXLINE( 169)				bool _hx_tmp2;
HXDLIN( 169)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this4 = gamepad->justPressed;
HXDLIN( 169)				int id2 = 7;
HXDLIN( 169)				 ::flixel::input::gamepad::FlxGamepad _this5 = _this4->gamepad;
HXDLIN( 169)				int Status2 = _this4->status;
HXDLIN( 169)				bool _hx_tmp3;
HXDLIN( 169)				switch((int)(id2)){
            					case (int)-2: {
HXLINE( 169)						_hx_tmp3 = _this5->anyButton(Status2);
            					}
            					break;
            					case (int)-1: {
HXLINE( 169)						_hx_tmp3 = !(_this5->anyButton(Status2));
            					}
            					break;
            					default:{
HXLINE( 169)						int RawID = _this5->mapping->getRawID(id2);
HXDLIN( 169)						 ::flixel::input::gamepad::FlxGamepadButton button = _this5->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 169)						if (::hx::IsNotNull( button )) {
HXLINE( 169)							_hx_tmp3 = button->hasState(Status2);
            						}
            						else {
HXLINE( 169)							_hx_tmp3 = false;
            						}
            					}
            				}
HXDLIN( 169)				if (_hx_tmp3) {
HXLINE( 169)					_hx_tmp2 = (this->frames > 10);
            				}
            				else {
HXLINE( 169)					_hx_tmp2 = false;
            				}
HXDLIN( 169)				if (_hx_tmp2) {
HXLINE( 170)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 170)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 171)					this->state = HX_("input",0a,c4,1d,be);
            				}
            				else {
HXLINE( 173)					 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 173)					int id = 17;
HXDLIN( 173)					 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 173)					int Status = _this->status;
HXDLIN( 173)					bool _hx_tmp;
HXDLIN( 173)					switch((int)(id)){
            						case (int)-2: {
HXLINE( 173)							_hx_tmp = _this1->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE( 173)							_hx_tmp = !(_this1->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE( 173)							int RawID = _this1->mapping->getRawID(id);
HXDLIN( 173)							 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 173)							if (::hx::IsNotNull( button )) {
HXLINE( 173)								_hx_tmp = button->hasState(Status);
            							}
            							else {
HXLINE( 173)								_hx_tmp = false;
            							}
            						}
            					}
HXDLIN( 173)					if (_hx_tmp) {
HXLINE( 174)						this->quit();
            					}
            					else {
HXLINE( 176)						 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 176)						int id = 18;
HXDLIN( 176)						 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 176)						int Status = _this->status;
HXDLIN( 176)						bool _hx_tmp;
HXDLIN( 176)						switch((int)(id)){
            							case (int)-2: {
HXLINE( 176)								_hx_tmp = _this1->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE( 176)								_hx_tmp = !(_this1->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE( 176)								int RawID = _this1->mapping->getRawID(id);
HXDLIN( 176)								 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 176)								if (::hx::IsNotNull( button )) {
HXLINE( 176)									_hx_tmp = button->hasState(Status);
            								}
            								else {
HXLINE( 176)									_hx_tmp = false;
            								}
            							}
            						}
HXDLIN( 176)						if (_hx_tmp) {
HXLINE( 177)							this->reset();
            						}
            					}
            				}
            			}
HXLINE( 124)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("waiting",8d,e9,27,df)) ){
HXLINE( 190)			bool _hx_tmp;
HXDLIN( 190)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 190)				_hx_tmp = ::KeyBinds_obj::gamepad;
            			}
            			else {
HXLINE( 190)				_hx_tmp = false;
            			}
HXDLIN( 190)			if (_hx_tmp) {
HXLINE( 192)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 192)				if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 193)					this->gpKeys[this->curSelected] = this->tempKey;
HXLINE( 194)					this->state = HX_("select",fc,1a,33,6a);
HXLINE( 195)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 195)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 198)				 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this1 = gamepad->justPressed;
HXDLIN( 198)				int id = 7;
HXDLIN( 198)				 ::flixel::input::gamepad::FlxGamepad _this2 = _this1->gamepad;
HXDLIN( 198)				int Status = _this1->status;
HXDLIN( 198)				bool _hx_tmp;
HXDLIN( 198)				switch((int)(id)){
            					case (int)-2: {
HXLINE( 198)						_hx_tmp = _this2->anyButton(Status);
            					}
            					break;
            					case (int)-1: {
HXLINE( 198)						_hx_tmp = !(_this2->anyButton(Status));
            					}
            					break;
            					default:{
HXLINE( 198)						int RawID = _this2->mapping->getRawID(id);
HXDLIN( 198)						 ::flixel::input::gamepad::FlxGamepadButton button = _this2->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 198)						if (::hx::IsNotNull( button )) {
HXLINE( 198)							_hx_tmp = button->hasState(Status);
            						}
            						else {
HXLINE( 198)							_hx_tmp = false;
            						}
            					}
            				}
HXDLIN( 198)				if (_hx_tmp) {
HXLINE( 200)					this->addKeyGamepad(this->defaultKeys->__get(this->curSelected));
HXLINE( 201)					this->save();
HXLINE( 202)					this->state = HX_("select",fc,1a,33,6a);
            				}
HXLINE( 205)				if (gamepad->justPressed->get_ANY()) {
HXLINE( 207)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 207)					 ::flixel::input::gamepad::mappings::FlxGamepadMapping gamepad1 = gamepad->mapping;
HXDLIN( 207)					int this1 = gamepad1->getID(gamepad->firstJustPressedRawID());
HXDLIN( 207)					::String _hx_tmp1 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get_string(this1);
HXDLIN( 207)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),207,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("update",09,86,05,87)));
HXLINE( 208)					 ::flixel::input::gamepad::mappings::FlxGamepadMapping gamepad2 = gamepad->mapping;
HXDLIN( 208)					int this2 = gamepad2->getID(gamepad->firstJustPressedRawID());
HXDLIN( 208)					this->addKeyGamepad(::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get_string(this2));
HXLINE( 209)					this->save();
HXLINE( 210)					this->state = HX_("select",fc,1a,33,6a);
HXLINE( 211)					this->textUpdate();
            				}
            			}
            			else {
HXLINE( 217)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 217)				if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 218)					this->keys[this->curSelected] = this->tempKey;
HXLINE( 219)					this->state = HX_("select",fc,1a,33,6a);
HXLINE( 220)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 220)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 222)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 222)					if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE( 223)						this->addKey(this->defaultKeys->__get(this->curSelected));
HXLINE( 224)						this->save();
HXLINE( 225)						this->state = HX_("select",fc,1a,33,6a);
            					}
            					else {
HXLINE( 227)						if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 228)							int this1 = ( (int)(::flixel::FlxG_obj::keys->getIsDown()->__get(0).StaticCast<  ::flixel::input::FlxInput >()->ID) );
HXDLIN( 228)							this->addKey(::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get_string(this1));
HXLINE( 229)							this->save();
HXLINE( 230)							this->state = HX_("select",fc,1a,33,6a);
            						}
            					}
            				}
            			}
HXLINE( 190)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 239)			this->state = HX_("select",fc,1a,33,6a);
            		}
            		_hx_goto_8:;
HXLINE( 243)		if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 244)			this->textUpdate();
            		}
HXLINE( 246)		this->super::update(elapsed);
            	}


void KeyBindMenu_obj::textUpdate(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_250_textUpdate)
HXLINE( 252)		this->keyTextDisplay->set_text(HX_("\n\n",c0,08,00,00));
HXLINE( 254)		if (::KeyBinds_obj::gamepad) {
HXLINE( 256)			{
HXLINE( 258)				::String textStart;
HXDLIN( 258)				if ((0 == this->curSelected)) {
HXLINE( 258)					textStart = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 258)					textStart = HX_("  ",00,1c,00,00);
            				}
HXLINE( 259)				::haxe::Log_obj::trace(this->gpKeys->__get(0),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),259,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 260)				 ::flixel::text::FlxText fh = this->keyTextDisplay;
HXDLIN( 260)				fh->set_text((fh->text + ((((textStart + this->keyText->__get(0)) + HX_(": ",a6,32,00,00)) + this->gpKeys->__get(0)) + HX_("\n",0a,00,00,00))));
            			}
HXLINE( 256)			{
HXLINE( 258)				::String textStart1;
HXDLIN( 258)				if ((1 == this->curSelected)) {
HXLINE( 258)					textStart1 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 258)					textStart1 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 259)				::haxe::Log_obj::trace(this->gpKeys->__get(1),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),259,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 260)				 ::flixel::text::FlxText fh1 = this->keyTextDisplay;
HXDLIN( 260)				fh1->set_text((fh1->text + ((((textStart1 + this->keyText->__get(1)) + HX_(": ",a6,32,00,00)) + this->gpKeys->__get(1)) + HX_("\n",0a,00,00,00))));
            			}
HXLINE( 256)			{
HXLINE( 258)				::String textStart2;
HXDLIN( 258)				if ((2 == this->curSelected)) {
HXLINE( 258)					textStart2 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 258)					textStart2 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 259)				::haxe::Log_obj::trace(this->gpKeys->__get(2),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),259,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 260)				 ::flixel::text::FlxText fh2 = this->keyTextDisplay;
HXDLIN( 260)				fh2->set_text((fh2->text + ((((textStart2 + this->keyText->__get(2)) + HX_(": ",a6,32,00,00)) + this->gpKeys->__get(2)) + HX_("\n",0a,00,00,00))));
            			}
HXLINE( 256)			{
HXLINE( 258)				::String textStart3;
HXDLIN( 258)				if ((3 == this->curSelected)) {
HXLINE( 258)					textStart3 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 258)					textStart3 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 259)				::haxe::Log_obj::trace(this->gpKeys->__get(3),::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),259,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("textUpdate",96,06,f6,bd)));
HXLINE( 260)				 ::flixel::text::FlxText fh3 = this->keyTextDisplay;
HXDLIN( 260)				fh3->set_text((fh3->text + ((((textStart3 + this->keyText->__get(3)) + HX_(": ",a6,32,00,00)) + this->gpKeys->__get(3)) + HX_("\n",0a,00,00,00))));
            			}
            		}
            		else {
HXLINE( 266)			{
HXLINE( 268)				::String textStart;
HXDLIN( 268)				if ((0 == this->curSelected)) {
HXLINE( 268)					textStart = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 268)					textStart = HX_("  ",00,1c,00,00);
            				}
HXLINE( 269)				 ::flixel::text::FlxText fh = this->keyTextDisplay;
HXDLIN( 269)				::String _hx_tmp;
HXDLIN( 269)				if ((this->keys->__get(0) != this->keyText->__get(0))) {
HXLINE( 269)					_hx_tmp = (this->keys->__get(0) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 269)					_hx_tmp = HX_("",00,00,00,00);
            				}
HXDLIN( 269)				fh->set_text((fh->text + (((((textStart + this->keyText->__get(0)) + HX_(": ",a6,32,00,00)) + _hx_tmp) + this->keyText->__get(0)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 266)			{
HXLINE( 268)				::String textStart1;
HXDLIN( 268)				if ((1 == this->curSelected)) {
HXLINE( 268)					textStart1 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 268)					textStart1 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 269)				 ::flixel::text::FlxText fh1 = this->keyTextDisplay;
HXDLIN( 269)				::String _hx_tmp1;
HXDLIN( 269)				if ((this->keys->__get(1) != this->keyText->__get(1))) {
HXLINE( 269)					_hx_tmp1 = (this->keys->__get(1) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 269)					_hx_tmp1 = HX_("",00,00,00,00);
            				}
HXDLIN( 269)				fh1->set_text((fh1->text + (((((textStart1 + this->keyText->__get(1)) + HX_(": ",a6,32,00,00)) + _hx_tmp1) + this->keyText->__get(1)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 266)			{
HXLINE( 268)				::String textStart2;
HXDLIN( 268)				if ((2 == this->curSelected)) {
HXLINE( 268)					textStart2 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 268)					textStart2 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 269)				 ::flixel::text::FlxText fh2 = this->keyTextDisplay;
HXDLIN( 269)				::String _hx_tmp2;
HXDLIN( 269)				if ((this->keys->__get(2) != this->keyText->__get(2))) {
HXLINE( 269)					_hx_tmp2 = (this->keys->__get(2) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 269)					_hx_tmp2 = HX_("",00,00,00,00);
            				}
HXDLIN( 269)				fh2->set_text((fh2->text + (((((textStart2 + this->keyText->__get(2)) + HX_(": ",a6,32,00,00)) + _hx_tmp2) + this->keyText->__get(2)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
HXLINE( 266)			{
HXLINE( 268)				::String textStart3;
HXDLIN( 268)				if ((3 == this->curSelected)) {
HXLINE( 268)					textStart3 = HX_("> ",22,36,00,00);
            				}
            				else {
HXLINE( 268)					textStart3 = HX_("  ",00,1c,00,00);
            				}
HXLINE( 269)				 ::flixel::text::FlxText fh3 = this->keyTextDisplay;
HXDLIN( 269)				::String _hx_tmp3;
HXDLIN( 269)				if ((this->keys->__get(3) != this->keyText->__get(3))) {
HXLINE( 269)					_hx_tmp3 = (this->keys->__get(3) + HX_(" / ",31,71,18,00));
            				}
            				else {
HXLINE( 269)					_hx_tmp3 = HX_("",00,00,00,00);
            				}
HXDLIN( 269)				fh3->set_text((fh3->text + (((((textStart3 + this->keyText->__get(3)) + HX_(": ",a6,32,00,00)) + _hx_tmp3) + this->keyText->__get(3)) + HX_(" ARROW\n",61,9a,2c,9d))));
            			}
            		}
HXLINE( 274)		this->keyTextDisplay->screenCenter(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,textUpdate,(void))

void KeyBindMenu_obj::save(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_278_save)
HXLINE( 280)		::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),this->keys->__get(2),::hx::paccDynamic);
HXLINE( 281)		::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),this->keys->__get(1),::hx::paccDynamic);
HXLINE( 282)		::flixel::FlxG_obj::save->data->__SetField(HX_("leftBind",64,39,12,48),this->keys->__get(0),::hx::paccDynamic);
HXLINE( 283)		::flixel::FlxG_obj::save->data->__SetField(HX_("rightBind",b9,4b,dd,ab),this->keys->__get(3),::hx::paccDynamic);
HXLINE( 285)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpupBind",a1,30,42,a5),this->gpKeys->__get(2),::hx::paccDynamic);
HXLINE( 286)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpdownBind",68,1e,93,1d),this->gpKeys->__get(1),::hx::paccDynamic);
HXLINE( 287)		::flixel::FlxG_obj::save->data->__SetField(HX_("gpleftBind",8d,64,a6,ef),this->gpKeys->__get(0),::hx::paccDynamic);
HXLINE( 288)		::flixel::FlxG_obj::save->data->__SetField(HX_("gprightBind",70,e4,ee,a5),this->gpKeys->__get(3),::hx::paccDynamic);
HXLINE( 290)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 292)		::PlayerSettings_obj::player1->controls->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,save,(void))

void KeyBindMenu_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_296_reset)
HXLINE( 298)		{
HXLINE( 299)			this->keys[0] = this->defaultKeys->__get(0);
HXDLIN( 299)			this->keys[1] = this->defaultKeys->__get(1);
HXDLIN( 299)			this->keys[2] = this->defaultKeys->__get(2);
HXDLIN( 299)			this->keys[3] = this->defaultKeys->__get(3);
HXDLIN( 299)			this->keys[4] = this->defaultKeys->__get(4);
            		}
HXLINE( 301)		this->quit();
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,reset,(void))

void KeyBindMenu_obj::quit(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::KeyBindMenu,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween flx){
            			HX_STACKFRAME(&_hx_pos_b43d8094f4720380_314_quit)
HXLINE( 314)			_gthis->close();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_305_quit)
HXDLIN( 305)		 ::KeyBindMenu _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 307)		this->state = HX_("exiting",84,dc,da,24);
HXLINE( 309)		this->save();
HXLINE( 311)		::OptionsMenu_obj::instance->acceptInput = true;
HXLINE( 313)		::flixel::tweens::FlxTween_obj::tween(this->keyTextDisplay, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
HXLINE( 314)		::flixel::tweens::FlxTween_obj::tween(this->blackBox, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)1.1), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 315)		::flixel::tweens::FlxTween_obj::tween(this->infoText, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyBindMenu_obj,quit,(void))

void KeyBindMenu_obj::addKeyGamepad(::String r){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_319_addKeyGamepad)
HXLINE( 321)		bool shouldReturn = true;
HXLINE( 323)		::Array< ::String > notAllowed = ::Array_obj< ::String >::fromData( _hx_array_data_e27a9e9b_17,3);
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			int _g1 = this->gpKeys->length;
HXDLIN( 325)			while((_g < _g1)){
HXLINE( 325)				_g = (_g + 1);
HXDLIN( 325)				int x = (_g - 1);
HXLINE( 327)				::String oK = this->gpKeys->__get(x);
HXLINE( 328)				if ((oK == r)) {
HXLINE( 329)					this->gpKeys[x] = null();
            				}
HXLINE( 330)				if (notAllowed->contains(oK)) {
HXLINE( 332)					this->gpKeys[x] = null();
HXLINE( 333)					return;
            				}
            			}
            		}
HXLINE( 337)		if (shouldReturn) {
HXLINE( 338)			this->gpKeys[this->curSelected] = r;
HXLINE( 339)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 339)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 342)			this->gpKeys[this->curSelected] = this->tempKey;
HXLINE( 343)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 343)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 344)			this->keyWarning->set_alpha(( (Float)(1) ));
HXLINE( 345)			this->warningTween->cancel();
HXLINE( 346)			this->warningTween = ::flixel::tweens::FlxTween_obj::tween(this->keyWarning, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),2)
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,addKeyGamepad,(void))

void KeyBindMenu_obj::addKey(::String r){
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_351_addKey)
HXLINE( 353)		bool shouldReturn = true;
HXLINE( 355)		::Array< ::String > notAllowed = ::Array_obj< ::String >::__new(0);
HXLINE( 357)		{
HXLINE( 357)			int _g = 0;
HXDLIN( 357)			::Array< ::String > _g1 = this->blacklist;
HXDLIN( 357)			while((_g < _g1->length)){
HXLINE( 357)				::String x = _g1->__get(_g);
HXDLIN( 357)				_g = (_g + 1);
HXDLIN( 357)				notAllowed->push(x);
            			}
            		}
HXLINE( 359)		::haxe::Log_obj::trace(notAllowed,::hx::SourceInfo(HX_("source/KeyBindMenu.hx",f7,48,ad,05),359,HX_("KeyBindMenu",9b,9e,7a,e2),HX_("addKey",fe,99,02,9f)));
HXLINE( 361)		{
HXLINE( 361)			int _g2 = 0;
HXDLIN( 361)			int _g3 = this->keys->length;
HXDLIN( 361)			while((_g2 < _g3)){
HXLINE( 361)				_g2 = (_g2 + 1);
HXDLIN( 361)				int x = (_g2 - 1);
HXLINE( 363)				::String oK = this->keys->__get(x);
HXLINE( 364)				if ((oK == r)) {
HXLINE( 365)					this->keys[x] = null();
            				}
HXLINE( 366)				if (notAllowed->contains(oK)) {
HXLINE( 368)					this->keys[x] = null();
HXLINE( 369)					return;
            				}
            			}
            		}
HXLINE( 373)		if ((r.indexOf(HX_("NUMPAD",cd,ce,07,54),null()) != -1)) {
HXLINE( 375)			this->keys[this->curSelected] = null();
HXLINE( 376)			return;
            		}
HXLINE( 379)		if (shouldReturn) {
HXLINE( 380)			this->keys[this->curSelected] = r;
HXLINE( 381)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 381)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 384)			this->keys[this->curSelected] = this->tempKey;
HXLINE( 385)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 385)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 386)			this->keyWarning->set_alpha(( (Float)(1) ));
HXLINE( 387)			this->warningTween->cancel();
HXLINE( 388)			this->warningTween = ::flixel::tweens::FlxTween_obj::tween(this->keyWarning, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("startDelay",c1,af,3d,f3),2)
            				->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,addKey,(void))

void KeyBindMenu_obj::changeItem(::hx::Null< int >  __o__amount){
            		int _amount = __o__amount.Default(0);
            	HX_STACKFRAME(&_hx_pos_b43d8094f4720380_394_changeItem)
HXLINE( 395)		 ::KeyBindMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 395)		_hx_tmp->curSelected = (_hx_tmp->curSelected + _amount);
HXLINE( 397)		if ((this->curSelected > 3)) {
HXLINE( 398)			this->curSelected = 0;
            		}
HXLINE( 399)		if ((this->curSelected < 0)) {
HXLINE( 400)			this->curSelected = 3;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyBindMenu_obj,changeItem,(void))


::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__new( ::Dynamic BGColor) {
	::hx::ObjectPtr< KeyBindMenu_obj > __this = new KeyBindMenu_obj();
	__this->__construct(BGColor);
	return __this;
}

::hx::ObjectPtr< KeyBindMenu_obj > KeyBindMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic BGColor) {
	KeyBindMenu_obj *__this = (KeyBindMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyBindMenu_obj), true, "KeyBindMenu"));
	*(void **)__this = KeyBindMenu_obj::_hx_vtable;
	__this->__construct(BGColor);
	return __this;
}

KeyBindMenu_obj::KeyBindMenu_obj()
{
}

void KeyBindMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyBindMenu);
	HX_MARK_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_MARK_MEMBER_NAME(keyWarning,"keyWarning");
	HX_MARK_MEMBER_NAME(warningTween,"warningTween");
	HX_MARK_MEMBER_NAME(keyText,"keyText");
	HX_MARK_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_MARK_MEMBER_NAME(defaultGpKeys,"defaultGpKeys");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_MEMBER_NAME(gpKeys,"gpKeys");
	HX_MARK_MEMBER_NAME(tempKey,"tempKey");
	HX_MARK_MEMBER_NAME(blacklist,"blacklist");
	HX_MARK_MEMBER_NAME(blackBox,"blackBox");
	HX_MARK_MEMBER_NAME(infoText,"infoText");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(frames,"frames");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KeyBindMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyTextDisplay,"keyTextDisplay");
	HX_VISIT_MEMBER_NAME(keyWarning,"keyWarning");
	HX_VISIT_MEMBER_NAME(warningTween,"warningTween");
	HX_VISIT_MEMBER_NAME(keyText,"keyText");
	HX_VISIT_MEMBER_NAME(defaultKeys,"defaultKeys");
	HX_VISIT_MEMBER_NAME(defaultGpKeys,"defaultGpKeys");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(keys,"keys");
	HX_VISIT_MEMBER_NAME(gpKeys,"gpKeys");
	HX_VISIT_MEMBER_NAME(tempKey,"tempKey");
	HX_VISIT_MEMBER_NAME(blacklist,"blacklist");
	HX_VISIT_MEMBER_NAME(blackBox,"blackBox");
	HX_VISIT_MEMBER_NAME(infoText,"infoText");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val KeyBindMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		if (HX_FIELD_EQ(inName,"quit") ) { return ::hx::Val( quit_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return ::hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gpKeys") ) { return ::hx::Val( gpKeys ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"addKey") ) { return ::hx::Val( addKey_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { return ::hx::Val( keyText ); }
		if (HX_FIELD_EQ(inName,"tempKey") ) { return ::hx::Val( tempKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blackBox") ) { return ::hx::Val( blackBox ); }
		if (HX_FIELD_EQ(inName,"infoText") ) { return ::hx::Val( infoText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blacklist") ) { return ::hx::Val( blacklist ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { return ::hx::Val( keyWarning ); }
		if (HX_FIELD_EQ(inName,"textUpdate") ) { return ::hx::Val( textUpdate_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { return ::hx::Val( defaultKeys ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { return ::hx::Val( warningTween ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultGpKeys") ) { return ::hx::Val( defaultGpKeys ); }
		if (HX_FIELD_EQ(inName,"addKeyGamepad") ) { return ::hx::Val( addKeyGamepad_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { return ::hx::Val( keyTextDisplay ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyBindMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gpKeys") ) { gpKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyText") ) { keyText=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tempKey") ) { tempKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blackBox") ) { blackBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"infoText") ) { infoText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blacklist") ) { blacklist=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyWarning") ) { keyWarning=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"warningTween") ) { warningTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultGpKeys") ) { defaultGpKeys=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyTextDisplay") ) { keyTextDisplay=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyBindMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyTextDisplay",b6,e9,da,71));
	outFields->push(HX_("keyWarning",7d,7a,53,78));
	outFields->push(HX_("warningTween",6f,32,71,d8));
	outFields->push(HX_("keyText",ec,3d,d3,a6));
	outFields->push(HX_("defaultKeys",55,db,c5,18));
	outFields->push(HX_("defaultGpKeys",5e,04,fc,d7));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("keys",f4,e1,06,47));
	outFields->push(HX_("gpKeys",bd,30,83,dd));
	outFields->push(HX_("tempKey",eb,a2,b3,46));
	outFields->push(HX_("blacklist",9d,3d,3c,1c));
	outFields->push(HX_("blackBox",8c,81,93,80));
	outFields->push(HX_("infoText",3b,00,9e,3d));
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("frames",a6,af,85,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyBindMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyTextDisplay),HX_("keyTextDisplay",b6,e9,da,71)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,keyWarning),HX_("keyWarning",7d,7a,53,78)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(KeyBindMenu_obj,warningTween),HX_("warningTween",6f,32,71,d8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keyText),HX_("keyText",ec,3d,d3,a6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,defaultKeys),HX_("defaultKeys",55,db,c5,18)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,defaultGpKeys),HX_("defaultGpKeys",5e,04,fc,d7)},
	{::hx::fsInt,(int)offsetof(KeyBindMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,keys),HX_("keys",f4,e1,06,47)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,gpKeys),HX_("gpKeys",bd,30,83,dd)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,tempKey),HX_("tempKey",eb,a2,b3,46)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(KeyBindMenu_obj,blacklist),HX_("blacklist",9d,3d,3c,1c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(KeyBindMenu_obj,blackBox),HX_("blackBox",8c,81,93,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(KeyBindMenu_obj,infoText),HX_("infoText",3b,00,9e,3d)},
	{::hx::fsString,(int)offsetof(KeyBindMenu_obj,state),HX_("state",11,76,0b,84)},
	{::hx::fsInt,(int)offsetof(KeyBindMenu_obj,frames),HX_("frames",a6,af,85,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyBindMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyBindMenu_obj_sMemberFields[] = {
	HX_("keyTextDisplay",b6,e9,da,71),
	HX_("keyWarning",7d,7a,53,78),
	HX_("warningTween",6f,32,71,d8),
	HX_("keyText",ec,3d,d3,a6),
	HX_("defaultKeys",55,db,c5,18),
	HX_("defaultGpKeys",5e,04,fc,d7),
	HX_("curSelected",fb,eb,ab,32),
	HX_("keys",f4,e1,06,47),
	HX_("gpKeys",bd,30,83,dd),
	HX_("tempKey",eb,a2,b3,46),
	HX_("blacklist",9d,3d,3c,1c),
	HX_("blackBox",8c,81,93,80),
	HX_("infoText",3b,00,9e,3d),
	HX_("state",11,76,0b,84),
	HX_("create",fc,66,0f,7c),
	HX_("frames",a6,af,85,ac),
	HX_("update",09,86,05,87),
	HX_("textUpdate",96,06,f6,bd),
	HX_("save",3d,8b,4d,4c),
	HX_("reset",cf,49,c8,e6),
	HX_("quit",cf,3f,0a,4b),
	HX_("addKeyGamepad",43,ca,56,62),
	HX_("addKey",fe,99,02,9f),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

::hx::Class KeyBindMenu_obj::__mClass;

void KeyBindMenu_obj::__register()
{
	KeyBindMenu_obj _hx_dummy;
	KeyBindMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("KeyBindMenu",9b,9e,7a,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyBindMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyBindMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyBindMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyBindMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

