#include <hxcpp.h>

#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Device
#include <Device.h>
#endif
#ifndef INCLUDED_KeyBinds
#include <KeyBinds.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionAnalog
#include <flixel/input/actions/FlxActionAnalog.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionManager
#include <flixel/input/actions/FlxActionManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_948b5caa279cd923_96_new,"Controls","new",0x4f8de688,"Controls.new","Controls.hx",96,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_128_get_UP,"Controls","get_UP",0xb958147c,"Controls.get_UP","Controls.hx",128,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_133_get_LEFT,"Controls","get_LEFT",0xc8e82468,"Controls.get_LEFT","Controls.hx",133,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_138_get_RIGHT,"Controls","get_RIGHT",0x7944c43b,"Controls.get_RIGHT","Controls.hx",138,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_143_get_DOWN,"Controls","get_DOWN",0xc3a614c3,"Controls.get_DOWN","Controls.hx",143,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_148_get_UP_P,"Controls","get_UP_P",0xcee37e8d,"Controls.get_UP_P","Controls.hx",148,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_153_get_LEFT_P,"Controls","get_LEFT_P",0xee886179,"Controls.get_LEFT_P","Controls.hx",153,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_158_get_RIGHT_P,"Controls","get_RIGHT_P",0xe72adc0c,"Controls.get_RIGHT_P","Controls.hx",158,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_163_get_DOWN_P,"Controls","get_DOWN_P",0x88e75e94,"Controls.get_DOWN_P","Controls.hx",163,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_168_get_UP_R,"Controls","get_UP_R",0xcee37e8f,"Controls.get_UP_R","Controls.hx",168,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_173_get_LEFT_R,"Controls","get_LEFT_R",0xee88617b,"Controls.get_LEFT_R","Controls.hx",173,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_178_get_RIGHT_R,"Controls","get_RIGHT_R",0xe72adc0e,"Controls.get_RIGHT_R","Controls.hx",178,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_183_get_DOWN_R,"Controls","get_DOWN_R",0x88e75e96,"Controls.get_DOWN_R","Controls.hx",183,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_188_get_ACCEPT,"Controls","get_ACCEPT",0x5fc72da9,"Controls.get_ACCEPT","Controls.hx",188,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_193_get_BACK,"Controls","get_BACK",0xc248f688,"Controls.get_BACK","Controls.hx",193,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_198_get_PAUSE,"Controls","get_PAUSE",0x4d388f55,"Controls.get_PAUSE","Controls.hx",198,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_203_get_RESET,"Controls","get_RESET",0x76a9022e,"Controls.get_RESET","Controls.hx",203,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_208_get_CHEAT,"Controls","get_CHEAT",0xd5974f72,"Controls.get_CHEAT","Controls.hx",208,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_272_update,"Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",272,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_282_checkByName,"Controls","checkByName",0xbe587cd2,"Controls.checkByName","Controls.hx",282,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_286_getDialogueName,"Controls","getDialogueName",0xe1263f61,"Controls.getDialogueName","Controls.hx",286,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_298_getDialogueNameFromToken,"Controls","getDialogueNameFromToken",0x6458998e,"Controls.getDialogueNameFromToken","Controls.hx",298,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_303_getActionFromControl,"Controls","getActionFromControl",0xa2e9ae5f,"Controls.getActionFromControl","Controls.hx",303,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_331_forEachBound,"Controls","forEachBound",0x9a98930c,"Controls.forEachBound","Controls.hx",331,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_363_replaceBinding,"Controls","replaceBinding",0x45096449,"Controls.replaceBinding","Controls.hx",363,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_384_copyFrom,"Controls","copyFrom",0xdf1da497,"Controls.copyFrom","Controls.hx",384,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_431_copyTo,"Controls","copyTo",0xdf5b4f68,"Controls.copyTo","Controls.hx",431,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_436_mergeKeyboardScheme,"Controls","mergeKeyboardScheme",0x61e2372c,"Controls.mergeKeyboardScheme","Controls.hx",436,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_455_bindKeys,"Controls","bindKeys",0xcb8dbf29,"Controls.bindKeys","Controls.hx",455,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_468_unbindKeys,"Controls","unbindKeys",0xec4b8c82,"Controls.unbindKeys","Controls.hx",468,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_494_setKeyboardScheme,"Controls","setKeyboardScheme",0x039bdb96,"Controls.setKeyboardScheme","Controls.hx",494,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_570_loadKeyBinds,"Controls","loadKeyBinds",0x1c488715,"Controls.loadKeyBinds","Controls.hx",570,0x0ab041e8)
static const int _hx_array_data_116e4296_189[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_190[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_191[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_192[] = {
	(int)90,(int)32,(int)13,
};
static const int _hx_array_data_116e4296_193[] = {
	(int)8,(int)27,
};
static const int _hx_array_data_116e4296_194[] = {
	(int)80,(int)13,(int)27,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_603_removeKeyboard,"Controls","removeKeyboard",0xd2dac3e3,"Controls.removeKeyboard","Controls.hx",603,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_616_addGamepad,"Controls","addGamepad",0xa2c68b58,"Controls.addGamepad","Controls.hx",616,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_632_addGamepadLiteral,"Controls","addGamepadLiteral",0x50b4e0f7,"Controls.addGamepadLiteral","Controls.hx",632,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_645_removeGamepad,"Controls","removeGamepad",0xfdf294e5,"Controls.removeGamepad","Controls.hx",645,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_663_addDefaultGamepad,"Controls","addDefaultGamepad",0xaa5e6409,"Controls.addDefaultGamepad","Controls.hx",663,0x0ab041e8)
static const int _hx_array_data_116e4296_258[] = {
	(int)0,
};
static const int _hx_array_data_116e4296_259[] = {
	(int)1,
};
static const int _hx_array_data_116e4296_260[] = {
	(int)11,(int)34,
};
static const int _hx_array_data_116e4296_261[] = {
	(int)12,(int)36,
};
static const int _hx_array_data_116e4296_262[] = {
	(int)13,(int)37,
};
static const int _hx_array_data_116e4296_263[] = {
	(int)14,(int)35,
};
static const int _hx_array_data_116e4296_264[] = {
	(int)7,
};
static const int _hx_array_data_116e4296_265[] = {
	(int)3,
};
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_697_bindButtons,"Controls","bindButtons",0x94dee42c,"Controls.bindButtons","Controls.hx",697,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_710_unbindButtons,"Controls","unbindButtons",0x83d33473,"Controls.unbindButtons","Controls.hx",710,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_734_getInputsFor,"Controls","getInputsFor",0xa3571ac2,"Controls.getInputsFor","Controls.hx",734,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_758_removeDevice,"Controls","removeDevice",0x4c1b5cd2,"Controls.removeDevice","Controls.hx",758,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_318_init,"Controls","init",0x495487e8,"Controls.init","Controls.hx",318,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_476_addKeys,"Controls","addKeys",0xd0486edd,"Controls.addKeys","Controls.hx",476,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_481_removeKeys,"Controls","removeKeys",0x75dc9b30,"Controls.removeKeys","Controls.hx",481,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_718_addButtons,"Controls","addButtons",0xe3b5fcf8,"Controls.addButtons","Controls.hx",718,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_723_removeButtons,"Controls","removeButtons",0x3ee20685,"Controls.removeButtons","Controls.hx",723,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_769_isDevice,"Controls","isDevice",0xe09e10f8,"Controls.isDevice","Controls.hx",769,0x0ab041e8)
HX_LOCAL_STACK_FRAME(_hx_pos_948b5caa279cd923_778_isGamepad,"Controls","isGamepad",0x5bcd81ff,"Controls.isGamepad","Controls.hx",778,0x0ab041e8)

void Controls_obj::__construct(::String name, ::KeyboardScheme __o_scheme){
            		 ::KeyboardScheme scheme = __o_scheme;
            		if (::hx::IsNull(__o_scheme)) scheme = ::KeyboardScheme_obj::None_dyn();
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_96_new)
HXLINE( 123)		this->keyboardScheme = ::KeyboardScheme_obj::None_dyn();
HXLINE( 122)		this->gamepadsAdded = ::Array_obj< int >::__new(0);
HXLINE( 117)		this->byName =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 114)		this->_cheat =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("cheat",13,97,b6,45),null());
HXLINE( 113)		this->_reset =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("reset",cf,49,c8,e6),null());
HXLINE( 112)		this->_pause =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("pause",f6,d6,57,bd),null());
HXLINE( 111)		this->_back =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("back",27,da,10,41),null());
HXLINE( 110)		this->_accept =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("accept",08,93,06,0b),null());
HXLINE( 109)		this->_downR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-release",9c,bf,5b,fc),null());
HXLINE( 108)		this->_rightR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-release",16,dd,28,fb),null());
HXLINE( 107)		this->_leftR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-release",41,7c,5d,2e),null());
HXLINE( 106)		this->_upR =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-release",95,4e,72,92),null());
HXLINE( 105)		this->_downP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down-press",18,fe,06,cf),null());
HXLINE( 104)		this->_rightP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right-press",12,e9,87,fb),null());
HXLINE( 103)		this->_leftP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left-press",7d,d7,13,c1),null());
HXLINE( 102)		this->_upP =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up-press",d1,ac,09,1c),null());
HXLINE( 101)		this->_down =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("down",62,f8,6d,42),null());
HXLINE( 100)		this->_right =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("right",dc,0b,64,e9),null());
HXLINE(  99)		this->_left =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("left",07,08,b0,47),null());
HXLINE(  98)		this->_up =  ::flixel::input::actions::FlxActionDigital_obj::__alloc( HX_CTX ,HX_("up",5b,66,00,00),null());
HXLINE( 213)		super::__construct(name,null(),null());
HXLINE( 215)		this->add(this->_up);
HXLINE( 216)		this->add(this->_left);
HXLINE( 217)		this->add(this->_right);
HXLINE( 218)		this->add(this->_down);
HXLINE( 219)		this->add(this->_upP);
HXLINE( 220)		this->add(this->_leftP);
HXLINE( 221)		this->add(this->_rightP);
HXLINE( 222)		this->add(this->_downP);
HXLINE( 223)		this->add(this->_upR);
HXLINE( 224)		this->add(this->_leftR);
HXLINE( 225)		this->add(this->_rightR);
HXLINE( 226)		this->add(this->_downR);
HXLINE( 227)		this->add(this->_accept);
HXLINE( 228)		this->add(this->_back);
HXLINE( 229)		this->add(this->_pause);
HXLINE( 230)		this->add(this->_reset);
HXLINE( 231)		this->add(this->_cheat);
HXLINE( 233)		{
HXLINE( 233)			int _g = 0;
HXDLIN( 233)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 233)			while((_g < _g1->length)){
HXLINE( 233)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 233)				_g = (_g + 1);
HXLINE( 234)				this->byName->set(action->name,action);
            			}
            		}
HXLINE( 236)		this->setKeyboardScheme(scheme,false);
            	}

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x315ddd0d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x315ddd0d;
	} else {
		return inClassId==(int)0x6cff3556;
	}
}

bool Controls_obj::get_UP(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_128_get_UP)
HXDLIN( 128)		return this->_up->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP,return )

bool Controls_obj::get_LEFT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_133_get_LEFT)
HXDLIN( 133)		return this->_left->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT,return )

bool Controls_obj::get_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_138_get_RIGHT)
HXDLIN( 138)		return this->_right->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT,return )

bool Controls_obj::get_DOWN(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_143_get_DOWN)
HXDLIN( 143)		return this->_down->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN,return )

bool Controls_obj::get_UP_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_148_get_UP_P)
HXDLIN( 148)		return this->_upP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_P,return )

bool Controls_obj::get_LEFT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_153_get_LEFT_P)
HXDLIN( 153)		return this->_leftP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_P,return )

bool Controls_obj::get_RIGHT_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_158_get_RIGHT_P)
HXDLIN( 158)		return this->_rightP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_P,return )

bool Controls_obj::get_DOWN_P(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_163_get_DOWN_P)
HXDLIN( 163)		return this->_downP->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_P,return )

bool Controls_obj::get_UP_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_168_get_UP_R)
HXDLIN( 168)		return this->_upR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_UP_R,return )

bool Controls_obj::get_LEFT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_173_get_LEFT_R)
HXDLIN( 173)		return this->_leftR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_LEFT_R,return )

bool Controls_obj::get_RIGHT_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_178_get_RIGHT_R)
HXDLIN( 178)		return this->_rightR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RIGHT_R,return )

bool Controls_obj::get_DOWN_R(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_183_get_DOWN_R)
HXDLIN( 183)		return this->_downR->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_DOWN_R,return )

bool Controls_obj::get_ACCEPT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_188_get_ACCEPT)
HXDLIN( 188)		return this->_accept->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_ACCEPT,return )

bool Controls_obj::get_BACK(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_193_get_BACK)
HXDLIN( 193)		return this->_back->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_BACK,return )

bool Controls_obj::get_PAUSE(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_198_get_PAUSE)
HXDLIN( 198)		return this->_pause->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_PAUSE,return )

bool Controls_obj::get_RESET(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_203_get_RESET)
HXDLIN( 203)		return this->_reset->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_RESET,return )

bool Controls_obj::get_CHEAT(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_208_get_CHEAT)
HXDLIN( 208)		return this->_cheat->check();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,get_CHEAT,return )

void Controls_obj::update(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_272_update)
HXDLIN( 272)		this->super::update();
            	}


bool Controls_obj::checkByName(::String name){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_282_checkByName)
HXDLIN( 282)		return ( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->check();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,checkByName,return )

::String Controls_obj::getDialogueName( ::flixel::input::actions::FlxActionDigital action){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_286_getDialogueName)
HXLINE( 287)		 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(0).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 288)		 ::flixel::input::actions::FlxInputDevice _g = input->device;
HXDLIN( 288)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
HXLINE( 290)				return ((HX_("[",5b,00,00,00) + ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap->get(input->inputID)) + HX_("]",5d,00,00,00));
            			}
            			break;
            			case (int)4: {
HXLINE( 291)				return ((HX_("(",28,00,00,00) + ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap->get(input->inputID)) + HX_(")",29,00,00,00));
            			}
            			break;
            			default:{
HXLINE( 292)				 ::flixel::input::actions::FlxInputDevice device = _g;
HXDLIN( 292)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("unhandled device: ",f9,e1,62,a5) + ::Std_obj::string(device))));
            			}
            		}
HXLINE( 288)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueName,return )

::String Controls_obj::getDialogueNameFromToken(::String token){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_298_getDialogueNameFromToken)
HXDLIN( 298)		::cpp::VirtualArray params = null();
HXDLIN( 298)		return this->getDialogueName(this->getActionFromControl(::Type_obj::createEnum(::hx::ClassOf< ::Control >(),token.toUpperCase(),params)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getDialogueNameFromToken,return )

 ::flixel::input::actions::FlxActionDigital Controls_obj::getActionFromControl( ::Control control){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_303_getActionFromControl)
HXDLIN( 303)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 305)				return this->_up;
            			}
            			break;
            			case (int)1: {
HXLINE( 307)				return this->_left;
            			}
            			break;
            			case (int)2: {
HXLINE( 308)				return this->_right;
            			}
            			break;
            			case (int)3: {
HXLINE( 306)				return this->_down;
            			}
            			break;
            			case (int)4: {
HXLINE( 312)				return this->_reset;
            			}
            			break;
            			case (int)5: {
HXLINE( 309)				return this->_accept;
            			}
            			break;
            			case (int)6: {
HXLINE( 310)				return this->_back;
            			}
            			break;
            			case (int)7: {
HXLINE( 311)				return this->_pause;
            			}
            			break;
            			case (int)8: {
HXLINE( 313)				return this->_cheat;
            			}
            			break;
            		}
HXLINE( 303)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,getActionFromControl,return )

void Controls_obj::forEachBound( ::Control control, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_331_forEachBound)
HXDLIN( 331)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXLINE( 334)				func(this->_up,1);
HXLINE( 335)				func(this->_upP,2);
HXLINE( 336)				func(this->_upR,-1);
            			}
            			break;
            			case (int)1: {
HXLINE( 338)				func(this->_left,1);
HXLINE( 339)				func(this->_leftP,2);
HXLINE( 340)				func(this->_leftR,-1);
            			}
            			break;
            			case (int)2: {
HXLINE( 342)				func(this->_right,1);
HXLINE( 343)				func(this->_rightP,2);
HXLINE( 344)				func(this->_rightR,-1);
            			}
            			break;
            			case (int)3: {
HXLINE( 346)				func(this->_down,1);
HXLINE( 347)				func(this->_downP,2);
HXLINE( 348)				func(this->_downR,-1);
            			}
            			break;
            			case (int)4: {
HXLINE( 356)				func(this->_reset,2);
            			}
            			break;
            			case (int)5: {
HXLINE( 350)				func(this->_accept,2);
            			}
            			break;
            			case (int)6: {
HXLINE( 352)				func(this->_back,2);
            			}
            			break;
            			case (int)7: {
HXLINE( 354)				func(this->_pause,2);
            			}
            			break;
            			case (int)8: {
HXLINE( 358)				func(this->_cheat,2);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,forEachBound,(void))

void Controls_obj::replaceBinding( ::Control control, ::Device device, ::Dynamic toAdd, ::Dynamic toRemove){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_363_replaceBinding)
HXLINE( 364)		if (::hx::IsEq( toAdd,toRemove )) {
HXLINE( 365)			return;
            		}
HXLINE( 367)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 370)				if (::hx::IsNotNull( toRemove )) {
HXLINE( 371)					this->unbindKeys(control,::Array_obj< int >::__new(1)->init(0,toRemove));
            				}
HXLINE( 372)				if (::hx::IsNotNull( toAdd )) {
HXLINE( 373)					this->bindKeys(control,::Array_obj< int >::__new(1)->init(0,toAdd));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 375)				int id = device->_hx_getInt(0);
HXDLIN( 375)				{
HXLINE( 376)					if (::hx::IsNotNull( toRemove )) {
HXLINE( 377)						this->unbindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toRemove));
            					}
HXLINE( 378)					if (::hx::IsNotNull( toAdd )) {
HXLINE( 379)						this->bindButtons(control,id,::Array_obj< int >::__new(1)->init(0,toAdd));
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,replaceBinding,(void))

void Controls_obj::copyFrom( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_384_copyFrom)
HXLINE( 386)		{
HXLINE( 386)			::Dynamic map = controls->byName;
HXDLIN( 386)			::Dynamic _g_map = map;
HXDLIN( 386)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 386)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 386)				::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 386)				 ::flixel::input::actions::FlxActionDigital _g1_value = ( ( ::flixel::input::actions::FlxActionDigital)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 386)				::String _g1_key = key;
HXDLIN( 386)				::String name = _g1_key;
HXDLIN( 386)				 ::flixel::input::actions::FlxActionDigital action = _g1_value;
HXLINE( 388)				{
HXLINE( 388)					int _g = 0;
HXDLIN( 388)					::Array< ::Dynamic> _g1 = action->inputs;
HXDLIN( 388)					while((_g < _g1->length)){
HXLINE( 388)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 388)						_g = (_g + 1);
HXLINE( 390)						bool _hx_tmp;
HXDLIN( 390)						if (::hx::IsNotNull( device )) {
HXLINE( 390)							_hx_tmp = ::Controls_obj::isDevice(input,device);
            						}
            						else {
HXLINE( 390)							_hx_tmp = true;
            						}
HXDLIN( 390)						if (_hx_tmp) {
HXLINE( 391)							( ( ::flixel::input::actions::FlxActionDigital)(this->byName->get(name)) )->add(( ( ::flixel::input::actions::FlxActionInputDigital)(input) ));
            						}
            					}
            				}
            			}
            		}
HXLINE( 406)		if (::hx::IsNull( device )) {
HXLINE( 411)			{
HXLINE( 411)				int _g = 0;
HXDLIN( 411)				::Array< int > _g1 = controls->gamepadsAdded;
HXDLIN( 411)				while((_g < _g1->length)){
HXLINE( 411)					int gamepad = _g1->__get(_g);
HXDLIN( 411)					_g = (_g + 1);
HXLINE( 412)					if (!(this->gamepadsAdded->contains(gamepad))) {
HXLINE( 413)						this->gamepadsAdded->push(gamepad);
            					}
            				}
            			}
HXLINE( 420)			this->mergeKeyboardScheme(controls->keyboardScheme);
            		}
            		else {
HXLINE( 406)			switch((int)(device->_hx_getIndex())){
            				case (int)0: {
HXLINE( 425)					this->mergeKeyboardScheme(controls->keyboardScheme);
            				}
            				break;
            				case (int)1: {
HXLINE( 422)					int id = device->_hx_getInt(0);
HXLINE( 423)					this->gamepadsAdded->push(id);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyFrom,(void))

void Controls_obj::copyTo( ::Controls controls, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_431_copyTo)
HXDLIN( 431)		controls->copyFrom(::hx::ObjectPtr<OBJ_>(this),device);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,copyTo,(void))

void Controls_obj::mergeKeyboardScheme( ::KeyboardScheme scheme){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_436_mergeKeyboardScheme)
HXDLIN( 436)		if (::hx::IsPointerNotEq( scheme,::KeyboardScheme_obj::None_dyn() )) {
HXLINE( 438)			if ((this->keyboardScheme->_hx_getIndex() == 2)) {
HXLINE( 441)				this->keyboardScheme = scheme;
            			}
            			else {
HXLINE( 443)				this->keyboardScheme = ::KeyboardScheme_obj::Custom_dyn();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,mergeKeyboardScheme,(void))

void Controls_obj::bindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_455_bindKeys)
HXDLIN( 455)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 455)					int state = 1;
HXDLIN( 455)					int _g = 0;
HXDLIN( 455)					while((_g < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g);
HXDLIN( 455)						_g = (_g + 1);
HXDLIN( 455)						action->addKey(key,state);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 455)					int state1 = 2;
HXDLIN( 455)					int _g1 = 0;
HXDLIN( 455)					while((_g1 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g1);
HXDLIN( 455)						_g1 = (_g1 + 1);
HXDLIN( 455)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 455)					int state2 = -1;
HXDLIN( 455)					int _g2 = 0;
HXDLIN( 455)					while((_g2 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g2);
HXDLIN( 455)						_g2 = (_g2 + 1);
HXDLIN( 455)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 455)					int state = 1;
HXDLIN( 455)					int _g = 0;
HXDLIN( 455)					while((_g < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g);
HXDLIN( 455)						_g = (_g + 1);
HXDLIN( 455)						action->addKey(key,state);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 455)					int state1 = 2;
HXDLIN( 455)					int _g1 = 0;
HXDLIN( 455)					while((_g1 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g1);
HXDLIN( 455)						_g1 = (_g1 + 1);
HXDLIN( 455)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 455)					int state2 = -1;
HXDLIN( 455)					int _g2 = 0;
HXDLIN( 455)					while((_g2 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g2);
HXDLIN( 455)						_g2 = (_g2 + 1);
HXDLIN( 455)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 455)					int state = 1;
HXDLIN( 455)					int _g = 0;
HXDLIN( 455)					while((_g < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g);
HXDLIN( 455)						_g = (_g + 1);
HXDLIN( 455)						action->addKey(key,state);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 455)					int state1 = 2;
HXDLIN( 455)					int _g1 = 0;
HXDLIN( 455)					while((_g1 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g1);
HXDLIN( 455)						_g1 = (_g1 + 1);
HXDLIN( 455)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 455)					int state2 = -1;
HXDLIN( 455)					int _g2 = 0;
HXDLIN( 455)					while((_g2 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g2);
HXDLIN( 455)						_g2 = (_g2 + 1);
HXDLIN( 455)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 455)					int state = 1;
HXDLIN( 455)					int _g = 0;
HXDLIN( 455)					while((_g < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g);
HXDLIN( 455)						_g = (_g + 1);
HXDLIN( 455)						action->addKey(key,state);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 455)					int state1 = 2;
HXDLIN( 455)					int _g1 = 0;
HXDLIN( 455)					while((_g1 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g1);
HXDLIN( 455)						_g1 = (_g1 + 1);
HXDLIN( 455)						action1->addKey(key,state1);
            					}
            				}
HXDLIN( 455)				{
HXDLIN( 455)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 455)					int state2 = -1;
HXDLIN( 455)					int _g2 = 0;
HXDLIN( 455)					while((_g2 < keys->length)){
HXDLIN( 455)						int key = keys->__get(_g2);
HXDLIN( 455)						_g2 = (_g2 + 1);
HXDLIN( 455)						action2->addKey(key,state2);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 455)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 455)				int state = 2;
HXDLIN( 455)				int _g = 0;
HXDLIN( 455)				while((_g < keys->length)){
HXDLIN( 455)					int key = keys->__get(_g);
HXDLIN( 455)					_g = (_g + 1);
HXDLIN( 455)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 455)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 455)				int state = 2;
HXDLIN( 455)				int _g = 0;
HXDLIN( 455)				while((_g < keys->length)){
HXDLIN( 455)					int key = keys->__get(_g);
HXDLIN( 455)					_g = (_g + 1);
HXDLIN( 455)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 455)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 455)				int state = 2;
HXDLIN( 455)				int _g = 0;
HXDLIN( 455)				while((_g < keys->length)){
HXDLIN( 455)					int key = keys->__get(_g);
HXDLIN( 455)					_g = (_g + 1);
HXDLIN( 455)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 455)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 455)				int state = 2;
HXDLIN( 455)				int _g = 0;
HXDLIN( 455)				while((_g < keys->length)){
HXDLIN( 455)					int key = keys->__get(_g);
HXDLIN( 455)					_g = (_g + 1);
HXDLIN( 455)					action->addKey(key,state);
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 455)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 455)				int state = 2;
HXDLIN( 455)				int _g = 0;
HXDLIN( 455)				while((_g < keys->length)){
HXDLIN( 455)					int key = keys->__get(_g);
HXDLIN( 455)					_g = (_g + 1);
HXDLIN( 455)					action->addKey(key,state);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,bindKeys,(void))

void Controls_obj::unbindKeys( ::Control control,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_468_unbindKeys)
HXDLIN( 468)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_up,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_upP,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_upR,keys);
            			}
            			break;
            			case (int)1: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_left,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_leftP,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_leftR,keys);
            			}
            			break;
            			case (int)2: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_right,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_rightP,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_rightR,keys);
            			}
            			break;
            			case (int)3: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_down,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_downP,keys);
HXDLIN( 468)				::Controls_obj::removeKeys(this->_downR,keys);
            			}
            			break;
            			case (int)4: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_reset,keys);
            			}
            			break;
            			case (int)5: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_accept,keys);
            			}
            			break;
            			case (int)6: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_back,keys);
            			}
            			break;
            			case (int)7: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_pause,keys);
            			}
            			break;
            			case (int)8: {
HXDLIN( 468)				::Controls_obj::removeKeys(this->_cheat,keys);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,unbindKeys,(void))

void Controls_obj::setKeyboardScheme( ::KeyboardScheme scheme,::hx::Null< bool >  __o_reset){
            		bool reset = __o_reset.Default(true);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_494_setKeyboardScheme)
HXDLIN( 494)		this->loadKeyBinds();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,setKeyboardScheme,(void))

void Controls_obj::loadKeyBinds(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_570_loadKeyBinds)
HXLINE( 574)		this->removeKeyboard();
HXLINE( 575)		if ((this->gamepadsAdded->length != 0)) {
HXLINE( 576)			this->removeGamepad(null());
            		}
HXLINE( 577)		::KeyBinds_obj::keyCheck();
HXLINE( 579)		 ::haxe::ds::EnumValueMap buttons =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 581)		{
HXLINE( 581)			::String s = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gpupBind",a1,30,42,a5),::hx::paccDynamic)) );
HXDLIN( 581)			s = s.toUpperCase();
HXDLIN( 581)			int value;
HXDLIN( 581)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s)) {
HXLINE( 581)				value = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s);
            			}
            			else {
HXLINE( 581)				value = -1;
            			}
HXDLIN( 581)			buttons->set(::Control_obj::UP_dyn(),::Array_obj< int >::__new(1)->init(0,value));
            		}
HXLINE( 582)		{
HXLINE( 582)			::String s1 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gpleftBind",8d,64,a6,ef),::hx::paccDynamic)) );
HXDLIN( 582)			s1 = s1.toUpperCase();
HXDLIN( 582)			int value1;
HXDLIN( 582)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s1)) {
HXLINE( 582)				value1 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s1);
            			}
            			else {
HXLINE( 582)				value1 = -1;
            			}
HXDLIN( 582)			buttons->set(::Control_obj::LEFT_dyn(),::Array_obj< int >::__new(1)->init(0,value1));
            		}
HXLINE( 583)		{
HXLINE( 583)			::String s2 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gpdownBind",68,1e,93,1d),::hx::paccDynamic)) );
HXDLIN( 583)			s2 = s2.toUpperCase();
HXDLIN( 583)			int value2;
HXDLIN( 583)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s2)) {
HXLINE( 583)				value2 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s2);
            			}
            			else {
HXLINE( 583)				value2 = -1;
            			}
HXDLIN( 583)			buttons->set(::Control_obj::DOWN_dyn(),::Array_obj< int >::__new(1)->init(0,value2));
            		}
HXLINE( 584)		{
HXLINE( 584)			::String s3 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("gprightBind",70,e4,ee,a5),::hx::paccDynamic)) );
HXDLIN( 584)			s3 = s3.toUpperCase();
HXDLIN( 584)			int value3;
HXDLIN( 584)			if (::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->exists(s3)) {
HXLINE( 584)				value3 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap->get_int(s3);
            			}
            			else {
HXLINE( 584)				value3 = -1;
            			}
HXDLIN( 584)			buttons->set(::Control_obj::RIGHT_dyn(),::Array_obj< int >::__new(1)->init(0,value3));
            		}
HXLINE( 585)		buttons->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_189,1));
HXLINE( 586)		buttons->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_190,1));
HXLINE( 587)		buttons->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_191,1));
HXLINE( 589)		this->addGamepad(0,buttons);
HXLINE( 591)		{
HXLINE( 591)			::String s4 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)) );
HXDLIN( 591)			s4 = s4.toUpperCase();
HXDLIN( 591)			int keys;
HXDLIN( 591)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s4)) {
HXLINE( 591)				keys = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s4);
            			}
            			else {
HXLINE( 591)				keys = -1;
            			}
HXDLIN( 591)			::Array< int > keys1 = ::Array_obj< int >::__new(2)->init(0,keys)->init(1,38);
HXDLIN( 591)			switch((int)(::Control_obj::UP_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 591)						int state = 1;
HXDLIN( 591)						int _g = 0;
HXDLIN( 591)						while((_g < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g);
HXDLIN( 591)							_g = (_g + 1);
HXDLIN( 591)							action->addKey(key,state);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 591)						int state1 = 2;
HXDLIN( 591)						int _g1 = 0;
HXDLIN( 591)						while((_g1 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g1);
HXDLIN( 591)							_g1 = (_g1 + 1);
HXDLIN( 591)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 591)						int state2 = -1;
HXDLIN( 591)						int _g2 = 0;
HXDLIN( 591)						while((_g2 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g2);
HXDLIN( 591)							_g2 = (_g2 + 1);
HXDLIN( 591)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 591)						int state = 1;
HXDLIN( 591)						int _g = 0;
HXDLIN( 591)						while((_g < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g);
HXDLIN( 591)							_g = (_g + 1);
HXDLIN( 591)							action->addKey(key,state);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 591)						int state1 = 2;
HXDLIN( 591)						int _g1 = 0;
HXDLIN( 591)						while((_g1 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g1);
HXDLIN( 591)							_g1 = (_g1 + 1);
HXDLIN( 591)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 591)						int state2 = -1;
HXDLIN( 591)						int _g2 = 0;
HXDLIN( 591)						while((_g2 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g2);
HXDLIN( 591)							_g2 = (_g2 + 1);
HXDLIN( 591)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 591)						int state = 1;
HXDLIN( 591)						int _g = 0;
HXDLIN( 591)						while((_g < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g);
HXDLIN( 591)							_g = (_g + 1);
HXDLIN( 591)							action->addKey(key,state);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 591)						int state1 = 2;
HXDLIN( 591)						int _g1 = 0;
HXDLIN( 591)						while((_g1 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g1);
HXDLIN( 591)							_g1 = (_g1 + 1);
HXDLIN( 591)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 591)						int state2 = -1;
HXDLIN( 591)						int _g2 = 0;
HXDLIN( 591)						while((_g2 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g2);
HXDLIN( 591)							_g2 = (_g2 + 1);
HXDLIN( 591)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 591)						int state = 1;
HXDLIN( 591)						int _g = 0;
HXDLIN( 591)						while((_g < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g);
HXDLIN( 591)							_g = (_g + 1);
HXDLIN( 591)							action->addKey(key,state);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 591)						int state1 = 2;
HXDLIN( 591)						int _g1 = 0;
HXDLIN( 591)						while((_g1 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g1);
HXDLIN( 591)							_g1 = (_g1 + 1);
HXDLIN( 591)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 591)					{
HXLINE( 591)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 591)						int state2 = -1;
HXDLIN( 591)						int _g2 = 0;
HXDLIN( 591)						while((_g2 < keys1->length)){
HXLINE( 591)							int key = keys1->__get(_g2);
HXDLIN( 591)							_g2 = (_g2 + 1);
HXDLIN( 591)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 591)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 591)					int state = 2;
HXDLIN( 591)					int _g = 0;
HXDLIN( 591)					while((_g < keys1->length)){
HXLINE( 591)						int key = keys1->__get(_g);
HXDLIN( 591)						_g = (_g + 1);
HXDLIN( 591)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 591)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 591)					int state = 2;
HXDLIN( 591)					int _g = 0;
HXDLIN( 591)					while((_g < keys1->length)){
HXLINE( 591)						int key = keys1->__get(_g);
HXDLIN( 591)						_g = (_g + 1);
HXDLIN( 591)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 591)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 591)					int state = 2;
HXDLIN( 591)					int _g = 0;
HXDLIN( 591)					while((_g < keys1->length)){
HXLINE( 591)						int key = keys1->__get(_g);
HXDLIN( 591)						_g = (_g + 1);
HXDLIN( 591)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 591)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 591)					int state = 2;
HXDLIN( 591)					int _g = 0;
HXDLIN( 591)					while((_g < keys1->length)){
HXLINE( 591)						int key = keys1->__get(_g);
HXDLIN( 591)						_g = (_g + 1);
HXDLIN( 591)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 591)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 591)					int state = 2;
HXDLIN( 591)					int _g = 0;
HXDLIN( 591)					while((_g < keys1->length)){
HXLINE( 591)						int key = keys1->__get(_g);
HXDLIN( 591)						_g = (_g + 1);
HXDLIN( 591)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 592)		{
HXLINE( 592)			::String s5 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)) );
HXDLIN( 592)			s5 = s5.toUpperCase();
HXDLIN( 592)			int keys2;
HXDLIN( 592)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s5)) {
HXLINE( 592)				keys2 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s5);
            			}
            			else {
HXLINE( 592)				keys2 = -1;
            			}
HXDLIN( 592)			::Array< int > keys3 = ::Array_obj< int >::__new(2)->init(0,keys2)->init(1,40);
HXDLIN( 592)			switch((int)(::Control_obj::DOWN_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 592)						int state = 1;
HXDLIN( 592)						int _g = 0;
HXDLIN( 592)						while((_g < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g);
HXDLIN( 592)							_g = (_g + 1);
HXDLIN( 592)							action->addKey(key,state);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 592)						int state1 = 2;
HXDLIN( 592)						int _g1 = 0;
HXDLIN( 592)						while((_g1 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g1);
HXDLIN( 592)							_g1 = (_g1 + 1);
HXDLIN( 592)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 592)						int state2 = -1;
HXDLIN( 592)						int _g2 = 0;
HXDLIN( 592)						while((_g2 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g2);
HXDLIN( 592)							_g2 = (_g2 + 1);
HXDLIN( 592)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 592)						int state = 1;
HXDLIN( 592)						int _g = 0;
HXDLIN( 592)						while((_g < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g);
HXDLIN( 592)							_g = (_g + 1);
HXDLIN( 592)							action->addKey(key,state);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 592)						int state1 = 2;
HXDLIN( 592)						int _g1 = 0;
HXDLIN( 592)						while((_g1 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g1);
HXDLIN( 592)							_g1 = (_g1 + 1);
HXDLIN( 592)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 592)						int state2 = -1;
HXDLIN( 592)						int _g2 = 0;
HXDLIN( 592)						while((_g2 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g2);
HXDLIN( 592)							_g2 = (_g2 + 1);
HXDLIN( 592)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 592)						int state = 1;
HXDLIN( 592)						int _g = 0;
HXDLIN( 592)						while((_g < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g);
HXDLIN( 592)							_g = (_g + 1);
HXDLIN( 592)							action->addKey(key,state);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 592)						int state1 = 2;
HXDLIN( 592)						int _g1 = 0;
HXDLIN( 592)						while((_g1 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g1);
HXDLIN( 592)							_g1 = (_g1 + 1);
HXDLIN( 592)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 592)						int state2 = -1;
HXDLIN( 592)						int _g2 = 0;
HXDLIN( 592)						while((_g2 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g2);
HXDLIN( 592)							_g2 = (_g2 + 1);
HXDLIN( 592)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 592)						int state = 1;
HXDLIN( 592)						int _g = 0;
HXDLIN( 592)						while((_g < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g);
HXDLIN( 592)							_g = (_g + 1);
HXDLIN( 592)							action->addKey(key,state);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 592)						int state1 = 2;
HXDLIN( 592)						int _g1 = 0;
HXDLIN( 592)						while((_g1 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g1);
HXDLIN( 592)							_g1 = (_g1 + 1);
HXDLIN( 592)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 592)					{
HXLINE( 592)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 592)						int state2 = -1;
HXDLIN( 592)						int _g2 = 0;
HXDLIN( 592)						while((_g2 < keys3->length)){
HXLINE( 592)							int key = keys3->__get(_g2);
HXDLIN( 592)							_g2 = (_g2 + 1);
HXDLIN( 592)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 592)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 592)					int state = 2;
HXDLIN( 592)					int _g = 0;
HXDLIN( 592)					while((_g < keys3->length)){
HXLINE( 592)						int key = keys3->__get(_g);
HXDLIN( 592)						_g = (_g + 1);
HXDLIN( 592)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 592)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 592)					int state = 2;
HXDLIN( 592)					int _g = 0;
HXDLIN( 592)					while((_g < keys3->length)){
HXLINE( 592)						int key = keys3->__get(_g);
HXDLIN( 592)						_g = (_g + 1);
HXDLIN( 592)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 592)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 592)					int state = 2;
HXDLIN( 592)					int _g = 0;
HXDLIN( 592)					while((_g < keys3->length)){
HXLINE( 592)						int key = keys3->__get(_g);
HXDLIN( 592)						_g = (_g + 1);
HXDLIN( 592)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 592)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 592)					int state = 2;
HXDLIN( 592)					int _g = 0;
HXDLIN( 592)					while((_g < keys3->length)){
HXLINE( 592)						int key = keys3->__get(_g);
HXDLIN( 592)						_g = (_g + 1);
HXDLIN( 592)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 592)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 592)					int state = 2;
HXDLIN( 592)					int _g = 0;
HXDLIN( 592)					while((_g < keys3->length)){
HXLINE( 592)						int key = keys3->__get(_g);
HXDLIN( 592)						_g = (_g + 1);
HXDLIN( 592)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 593)		{
HXLINE( 593)			::String s6 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("leftBind",64,39,12,48),::hx::paccDynamic)) );
HXDLIN( 593)			s6 = s6.toUpperCase();
HXDLIN( 593)			int keys4;
HXDLIN( 593)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s6)) {
HXLINE( 593)				keys4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s6);
            			}
            			else {
HXLINE( 593)				keys4 = -1;
            			}
HXDLIN( 593)			::Array< int > keys5 = ::Array_obj< int >::__new(2)->init(0,keys4)->init(1,37);
HXDLIN( 593)			switch((int)(::Control_obj::LEFT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 593)						int state = 1;
HXDLIN( 593)						int _g = 0;
HXDLIN( 593)						while((_g < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g);
HXDLIN( 593)							_g = (_g + 1);
HXDLIN( 593)							action->addKey(key,state);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 593)						int state1 = 2;
HXDLIN( 593)						int _g1 = 0;
HXDLIN( 593)						while((_g1 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g1);
HXDLIN( 593)							_g1 = (_g1 + 1);
HXDLIN( 593)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 593)						int state2 = -1;
HXDLIN( 593)						int _g2 = 0;
HXDLIN( 593)						while((_g2 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g2);
HXDLIN( 593)							_g2 = (_g2 + 1);
HXDLIN( 593)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 593)						int state = 1;
HXDLIN( 593)						int _g = 0;
HXDLIN( 593)						while((_g < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g);
HXDLIN( 593)							_g = (_g + 1);
HXDLIN( 593)							action->addKey(key,state);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 593)						int state1 = 2;
HXDLIN( 593)						int _g1 = 0;
HXDLIN( 593)						while((_g1 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g1);
HXDLIN( 593)							_g1 = (_g1 + 1);
HXDLIN( 593)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 593)						int state2 = -1;
HXDLIN( 593)						int _g2 = 0;
HXDLIN( 593)						while((_g2 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g2);
HXDLIN( 593)							_g2 = (_g2 + 1);
HXDLIN( 593)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 593)						int state = 1;
HXDLIN( 593)						int _g = 0;
HXDLIN( 593)						while((_g < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g);
HXDLIN( 593)							_g = (_g + 1);
HXDLIN( 593)							action->addKey(key,state);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 593)						int state1 = 2;
HXDLIN( 593)						int _g1 = 0;
HXDLIN( 593)						while((_g1 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g1);
HXDLIN( 593)							_g1 = (_g1 + 1);
HXDLIN( 593)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 593)						int state2 = -1;
HXDLIN( 593)						int _g2 = 0;
HXDLIN( 593)						while((_g2 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g2);
HXDLIN( 593)							_g2 = (_g2 + 1);
HXDLIN( 593)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 593)						int state = 1;
HXDLIN( 593)						int _g = 0;
HXDLIN( 593)						while((_g < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g);
HXDLIN( 593)							_g = (_g + 1);
HXDLIN( 593)							action->addKey(key,state);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 593)						int state1 = 2;
HXDLIN( 593)						int _g1 = 0;
HXDLIN( 593)						while((_g1 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g1);
HXDLIN( 593)							_g1 = (_g1 + 1);
HXDLIN( 593)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 593)					{
HXLINE( 593)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 593)						int state2 = -1;
HXDLIN( 593)						int _g2 = 0;
HXDLIN( 593)						while((_g2 < keys5->length)){
HXLINE( 593)							int key = keys5->__get(_g2);
HXDLIN( 593)							_g2 = (_g2 + 1);
HXDLIN( 593)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 593)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 593)					int state = 2;
HXDLIN( 593)					int _g = 0;
HXDLIN( 593)					while((_g < keys5->length)){
HXLINE( 593)						int key = keys5->__get(_g);
HXDLIN( 593)						_g = (_g + 1);
HXDLIN( 593)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 593)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 593)					int state = 2;
HXDLIN( 593)					int _g = 0;
HXDLIN( 593)					while((_g < keys5->length)){
HXLINE( 593)						int key = keys5->__get(_g);
HXDLIN( 593)						_g = (_g + 1);
HXDLIN( 593)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 593)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 593)					int state = 2;
HXDLIN( 593)					int _g = 0;
HXDLIN( 593)					while((_g < keys5->length)){
HXLINE( 593)						int key = keys5->__get(_g);
HXDLIN( 593)						_g = (_g + 1);
HXDLIN( 593)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 593)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 593)					int state = 2;
HXDLIN( 593)					int _g = 0;
HXDLIN( 593)					while((_g < keys5->length)){
HXLINE( 593)						int key = keys5->__get(_g);
HXDLIN( 593)						_g = (_g + 1);
HXDLIN( 593)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 593)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 593)					int state = 2;
HXDLIN( 593)					int _g = 0;
HXDLIN( 593)					while((_g < keys5->length)){
HXLINE( 593)						int key = keys5->__get(_g);
HXDLIN( 593)						_g = (_g + 1);
HXDLIN( 593)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 594)		{
HXLINE( 594)			::String s7 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("rightBind",b9,4b,dd,ab),::hx::paccDynamic)) );
HXDLIN( 594)			s7 = s7.toUpperCase();
HXDLIN( 594)			int keys6;
HXDLIN( 594)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s7)) {
HXLINE( 594)				keys6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s7);
            			}
            			else {
HXLINE( 594)				keys6 = -1;
            			}
HXDLIN( 594)			::Array< int > keys7 = ::Array_obj< int >::__new(2)->init(0,keys6)->init(1,39);
HXDLIN( 594)			switch((int)(::Control_obj::RIGHT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 594)						int state = 1;
HXDLIN( 594)						int _g = 0;
HXDLIN( 594)						while((_g < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g);
HXDLIN( 594)							_g = (_g + 1);
HXDLIN( 594)							action->addKey(key,state);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 594)						int state1 = 2;
HXDLIN( 594)						int _g1 = 0;
HXDLIN( 594)						while((_g1 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g1);
HXDLIN( 594)							_g1 = (_g1 + 1);
HXDLIN( 594)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 594)						int state2 = -1;
HXDLIN( 594)						int _g2 = 0;
HXDLIN( 594)						while((_g2 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g2);
HXDLIN( 594)							_g2 = (_g2 + 1);
HXDLIN( 594)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 594)						int state = 1;
HXDLIN( 594)						int _g = 0;
HXDLIN( 594)						while((_g < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g);
HXDLIN( 594)							_g = (_g + 1);
HXDLIN( 594)							action->addKey(key,state);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 594)						int state1 = 2;
HXDLIN( 594)						int _g1 = 0;
HXDLIN( 594)						while((_g1 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g1);
HXDLIN( 594)							_g1 = (_g1 + 1);
HXDLIN( 594)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 594)						int state2 = -1;
HXDLIN( 594)						int _g2 = 0;
HXDLIN( 594)						while((_g2 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g2);
HXDLIN( 594)							_g2 = (_g2 + 1);
HXDLIN( 594)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 594)						int state = 1;
HXDLIN( 594)						int _g = 0;
HXDLIN( 594)						while((_g < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g);
HXDLIN( 594)							_g = (_g + 1);
HXDLIN( 594)							action->addKey(key,state);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 594)						int state1 = 2;
HXDLIN( 594)						int _g1 = 0;
HXDLIN( 594)						while((_g1 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g1);
HXDLIN( 594)							_g1 = (_g1 + 1);
HXDLIN( 594)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 594)						int state2 = -1;
HXDLIN( 594)						int _g2 = 0;
HXDLIN( 594)						while((_g2 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g2);
HXDLIN( 594)							_g2 = (_g2 + 1);
HXDLIN( 594)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 594)						int state = 1;
HXDLIN( 594)						int _g = 0;
HXDLIN( 594)						while((_g < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g);
HXDLIN( 594)							_g = (_g + 1);
HXDLIN( 594)							action->addKey(key,state);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 594)						int state1 = 2;
HXDLIN( 594)						int _g1 = 0;
HXDLIN( 594)						while((_g1 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g1);
HXDLIN( 594)							_g1 = (_g1 + 1);
HXDLIN( 594)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 594)					{
HXLINE( 594)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 594)						int state2 = -1;
HXDLIN( 594)						int _g2 = 0;
HXDLIN( 594)						while((_g2 < keys7->length)){
HXLINE( 594)							int key = keys7->__get(_g2);
HXDLIN( 594)							_g2 = (_g2 + 1);
HXDLIN( 594)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 594)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 594)					int state = 2;
HXDLIN( 594)					int _g = 0;
HXDLIN( 594)					while((_g < keys7->length)){
HXLINE( 594)						int key = keys7->__get(_g);
HXDLIN( 594)						_g = (_g + 1);
HXDLIN( 594)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 594)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 594)					int state = 2;
HXDLIN( 594)					int _g = 0;
HXDLIN( 594)					while((_g < keys7->length)){
HXLINE( 594)						int key = keys7->__get(_g);
HXDLIN( 594)						_g = (_g + 1);
HXDLIN( 594)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 594)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 594)					int state = 2;
HXDLIN( 594)					int _g = 0;
HXDLIN( 594)					while((_g < keys7->length)){
HXLINE( 594)						int key = keys7->__get(_g);
HXDLIN( 594)						_g = (_g + 1);
HXDLIN( 594)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 594)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 594)					int state = 2;
HXDLIN( 594)					int _g = 0;
HXDLIN( 594)					while((_g < keys7->length)){
HXLINE( 594)						int key = keys7->__get(_g);
HXDLIN( 594)						_g = (_g + 1);
HXDLIN( 594)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 594)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 594)					int state = 2;
HXDLIN( 594)					int _g = 0;
HXDLIN( 594)					while((_g < keys7->length)){
HXLINE( 594)						int key = keys7->__get(_g);
HXDLIN( 594)						_g = (_g + 1);
HXDLIN( 594)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 595)		{
HXLINE( 595)			::Array< int > keys8 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_192,3);
HXDLIN( 595)			switch((int)(::Control_obj::ACCEPT_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 595)						int state = 1;
HXDLIN( 595)						int _g = 0;
HXDLIN( 595)						while((_g < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g);
HXDLIN( 595)							_g = (_g + 1);
HXDLIN( 595)							action->addKey(key,state);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 595)						int state1 = 2;
HXDLIN( 595)						int _g1 = 0;
HXDLIN( 595)						while((_g1 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g1);
HXDLIN( 595)							_g1 = (_g1 + 1);
HXDLIN( 595)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 595)						int state2 = -1;
HXDLIN( 595)						int _g2 = 0;
HXDLIN( 595)						while((_g2 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g2);
HXDLIN( 595)							_g2 = (_g2 + 1);
HXDLIN( 595)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 595)						int state = 1;
HXDLIN( 595)						int _g = 0;
HXDLIN( 595)						while((_g < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g);
HXDLIN( 595)							_g = (_g + 1);
HXDLIN( 595)							action->addKey(key,state);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 595)						int state1 = 2;
HXDLIN( 595)						int _g1 = 0;
HXDLIN( 595)						while((_g1 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g1);
HXDLIN( 595)							_g1 = (_g1 + 1);
HXDLIN( 595)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 595)						int state2 = -1;
HXDLIN( 595)						int _g2 = 0;
HXDLIN( 595)						while((_g2 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g2);
HXDLIN( 595)							_g2 = (_g2 + 1);
HXDLIN( 595)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 595)						int state = 1;
HXDLIN( 595)						int _g = 0;
HXDLIN( 595)						while((_g < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g);
HXDLIN( 595)							_g = (_g + 1);
HXDLIN( 595)							action->addKey(key,state);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 595)						int state1 = 2;
HXDLIN( 595)						int _g1 = 0;
HXDLIN( 595)						while((_g1 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g1);
HXDLIN( 595)							_g1 = (_g1 + 1);
HXDLIN( 595)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 595)						int state2 = -1;
HXDLIN( 595)						int _g2 = 0;
HXDLIN( 595)						while((_g2 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g2);
HXDLIN( 595)							_g2 = (_g2 + 1);
HXDLIN( 595)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 595)						int state = 1;
HXDLIN( 595)						int _g = 0;
HXDLIN( 595)						while((_g < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g);
HXDLIN( 595)							_g = (_g + 1);
HXDLIN( 595)							action->addKey(key,state);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 595)						int state1 = 2;
HXDLIN( 595)						int _g1 = 0;
HXDLIN( 595)						while((_g1 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g1);
HXDLIN( 595)							_g1 = (_g1 + 1);
HXDLIN( 595)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 595)					{
HXLINE( 595)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 595)						int state2 = -1;
HXDLIN( 595)						int _g2 = 0;
HXDLIN( 595)						while((_g2 < keys8->length)){
HXLINE( 595)							int key = keys8->__get(_g2);
HXDLIN( 595)							_g2 = (_g2 + 1);
HXDLIN( 595)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 595)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 595)					int state = 2;
HXDLIN( 595)					int _g = 0;
HXDLIN( 595)					while((_g < keys8->length)){
HXLINE( 595)						int key = keys8->__get(_g);
HXDLIN( 595)						_g = (_g + 1);
HXDLIN( 595)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 595)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 595)					int state = 2;
HXDLIN( 595)					int _g = 0;
HXDLIN( 595)					while((_g < keys8->length)){
HXLINE( 595)						int key = keys8->__get(_g);
HXDLIN( 595)						_g = (_g + 1);
HXDLIN( 595)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 595)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 595)					int state = 2;
HXDLIN( 595)					int _g = 0;
HXDLIN( 595)					while((_g < keys8->length)){
HXLINE( 595)						int key = keys8->__get(_g);
HXDLIN( 595)						_g = (_g + 1);
HXDLIN( 595)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 595)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 595)					int state = 2;
HXDLIN( 595)					int _g = 0;
HXDLIN( 595)					while((_g < keys8->length)){
HXLINE( 595)						int key = keys8->__get(_g);
HXDLIN( 595)						_g = (_g + 1);
HXDLIN( 595)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 595)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 595)					int state = 2;
HXDLIN( 595)					int _g = 0;
HXDLIN( 595)					while((_g < keys8->length)){
HXLINE( 595)						int key = keys8->__get(_g);
HXDLIN( 595)						_g = (_g + 1);
HXDLIN( 595)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 596)		{
HXLINE( 596)			::Array< int > keys9 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_193,2);
HXDLIN( 596)			switch((int)(::Control_obj::BACK_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 596)						int state = 1;
HXDLIN( 596)						int _g = 0;
HXDLIN( 596)						while((_g < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g);
HXDLIN( 596)							_g = (_g + 1);
HXDLIN( 596)							action->addKey(key,state);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 596)						int state1 = 2;
HXDLIN( 596)						int _g1 = 0;
HXDLIN( 596)						while((_g1 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g1);
HXDLIN( 596)							_g1 = (_g1 + 1);
HXDLIN( 596)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 596)						int state2 = -1;
HXDLIN( 596)						int _g2 = 0;
HXDLIN( 596)						while((_g2 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g2);
HXDLIN( 596)							_g2 = (_g2 + 1);
HXDLIN( 596)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 596)						int state = 1;
HXDLIN( 596)						int _g = 0;
HXDLIN( 596)						while((_g < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g);
HXDLIN( 596)							_g = (_g + 1);
HXDLIN( 596)							action->addKey(key,state);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 596)						int state1 = 2;
HXDLIN( 596)						int _g1 = 0;
HXDLIN( 596)						while((_g1 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g1);
HXDLIN( 596)							_g1 = (_g1 + 1);
HXDLIN( 596)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 596)						int state2 = -1;
HXDLIN( 596)						int _g2 = 0;
HXDLIN( 596)						while((_g2 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g2);
HXDLIN( 596)							_g2 = (_g2 + 1);
HXDLIN( 596)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 596)						int state = 1;
HXDLIN( 596)						int _g = 0;
HXDLIN( 596)						while((_g < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g);
HXDLIN( 596)							_g = (_g + 1);
HXDLIN( 596)							action->addKey(key,state);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 596)						int state1 = 2;
HXDLIN( 596)						int _g1 = 0;
HXDLIN( 596)						while((_g1 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g1);
HXDLIN( 596)							_g1 = (_g1 + 1);
HXDLIN( 596)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 596)						int state2 = -1;
HXDLIN( 596)						int _g2 = 0;
HXDLIN( 596)						while((_g2 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g2);
HXDLIN( 596)							_g2 = (_g2 + 1);
HXDLIN( 596)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 596)						int state = 1;
HXDLIN( 596)						int _g = 0;
HXDLIN( 596)						while((_g < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g);
HXDLIN( 596)							_g = (_g + 1);
HXDLIN( 596)							action->addKey(key,state);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 596)						int state1 = 2;
HXDLIN( 596)						int _g1 = 0;
HXDLIN( 596)						while((_g1 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g1);
HXDLIN( 596)							_g1 = (_g1 + 1);
HXDLIN( 596)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 596)					{
HXLINE( 596)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 596)						int state2 = -1;
HXDLIN( 596)						int _g2 = 0;
HXDLIN( 596)						while((_g2 < keys9->length)){
HXLINE( 596)							int key = keys9->__get(_g2);
HXDLIN( 596)							_g2 = (_g2 + 1);
HXDLIN( 596)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 596)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 596)					int state = 2;
HXDLIN( 596)					int _g = 0;
HXDLIN( 596)					while((_g < keys9->length)){
HXLINE( 596)						int key = keys9->__get(_g);
HXDLIN( 596)						_g = (_g + 1);
HXDLIN( 596)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 596)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 596)					int state = 2;
HXDLIN( 596)					int _g = 0;
HXDLIN( 596)					while((_g < keys9->length)){
HXLINE( 596)						int key = keys9->__get(_g);
HXDLIN( 596)						_g = (_g + 1);
HXDLIN( 596)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 596)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 596)					int state = 2;
HXDLIN( 596)					int _g = 0;
HXDLIN( 596)					while((_g < keys9->length)){
HXLINE( 596)						int key = keys9->__get(_g);
HXDLIN( 596)						_g = (_g + 1);
HXDLIN( 596)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 596)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 596)					int state = 2;
HXDLIN( 596)					int _g = 0;
HXDLIN( 596)					while((_g < keys9->length)){
HXLINE( 596)						int key = keys9->__get(_g);
HXDLIN( 596)						_g = (_g + 1);
HXDLIN( 596)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 596)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 596)					int state = 2;
HXDLIN( 596)					int _g = 0;
HXDLIN( 596)					while((_g < keys9->length)){
HXLINE( 596)						int key = keys9->__get(_g);
HXDLIN( 596)						_g = (_g + 1);
HXDLIN( 596)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 597)		{
HXLINE( 597)			::Array< int > keys10 = ::Array_obj< int >::fromData( _hx_array_data_116e4296_194,3);
HXDLIN( 597)			switch((int)(::Control_obj::PAUSE_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 597)						int state = 1;
HXDLIN( 597)						int _g = 0;
HXDLIN( 597)						while((_g < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g);
HXDLIN( 597)							_g = (_g + 1);
HXDLIN( 597)							action->addKey(key,state);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 597)						int state1 = 2;
HXDLIN( 597)						int _g1 = 0;
HXDLIN( 597)						while((_g1 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g1);
HXDLIN( 597)							_g1 = (_g1 + 1);
HXDLIN( 597)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 597)						int state2 = -1;
HXDLIN( 597)						int _g2 = 0;
HXDLIN( 597)						while((_g2 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g2);
HXDLIN( 597)							_g2 = (_g2 + 1);
HXDLIN( 597)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 597)						int state = 1;
HXDLIN( 597)						int _g = 0;
HXDLIN( 597)						while((_g < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g);
HXDLIN( 597)							_g = (_g + 1);
HXDLIN( 597)							action->addKey(key,state);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 597)						int state1 = 2;
HXDLIN( 597)						int _g1 = 0;
HXDLIN( 597)						while((_g1 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g1);
HXDLIN( 597)							_g1 = (_g1 + 1);
HXDLIN( 597)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 597)						int state2 = -1;
HXDLIN( 597)						int _g2 = 0;
HXDLIN( 597)						while((_g2 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g2);
HXDLIN( 597)							_g2 = (_g2 + 1);
HXDLIN( 597)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 597)						int state = 1;
HXDLIN( 597)						int _g = 0;
HXDLIN( 597)						while((_g < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g);
HXDLIN( 597)							_g = (_g + 1);
HXDLIN( 597)							action->addKey(key,state);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 597)						int state1 = 2;
HXDLIN( 597)						int _g1 = 0;
HXDLIN( 597)						while((_g1 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g1);
HXDLIN( 597)							_g1 = (_g1 + 1);
HXDLIN( 597)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 597)						int state2 = -1;
HXDLIN( 597)						int _g2 = 0;
HXDLIN( 597)						while((_g2 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g2);
HXDLIN( 597)							_g2 = (_g2 + 1);
HXDLIN( 597)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 597)						int state = 1;
HXDLIN( 597)						int _g = 0;
HXDLIN( 597)						while((_g < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g);
HXDLIN( 597)							_g = (_g + 1);
HXDLIN( 597)							action->addKey(key,state);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 597)						int state1 = 2;
HXDLIN( 597)						int _g1 = 0;
HXDLIN( 597)						while((_g1 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g1);
HXDLIN( 597)							_g1 = (_g1 + 1);
HXDLIN( 597)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 597)					{
HXLINE( 597)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 597)						int state2 = -1;
HXDLIN( 597)						int _g2 = 0;
HXDLIN( 597)						while((_g2 < keys10->length)){
HXLINE( 597)							int key = keys10->__get(_g2);
HXDLIN( 597)							_g2 = (_g2 + 1);
HXDLIN( 597)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 597)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 597)					int state = 2;
HXDLIN( 597)					int _g = 0;
HXDLIN( 597)					while((_g < keys10->length)){
HXLINE( 597)						int key = keys10->__get(_g);
HXDLIN( 597)						_g = (_g + 1);
HXDLIN( 597)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 597)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 597)					int state = 2;
HXDLIN( 597)					int _g = 0;
HXDLIN( 597)					while((_g < keys10->length)){
HXLINE( 597)						int key = keys10->__get(_g);
HXDLIN( 597)						_g = (_g + 1);
HXDLIN( 597)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 597)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 597)					int state = 2;
HXDLIN( 597)					int _g = 0;
HXDLIN( 597)					while((_g < keys10->length)){
HXLINE( 597)						int key = keys10->__get(_g);
HXDLIN( 597)						_g = (_g + 1);
HXDLIN( 597)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 597)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 597)					int state = 2;
HXDLIN( 597)					int _g = 0;
HXDLIN( 597)					while((_g < keys10->length)){
HXLINE( 597)						int key = keys10->__get(_g);
HXDLIN( 597)						_g = (_g + 1);
HXDLIN( 597)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 597)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 597)					int state = 2;
HXDLIN( 597)					int _g = 0;
HXDLIN( 597)					while((_g < keys10->length)){
HXLINE( 597)						int key = keys10->__get(_g);
HXDLIN( 597)						_g = (_g + 1);
HXDLIN( 597)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
HXLINE( 598)		{
HXLINE( 598)			::String s8 = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("killBind",7b,28,25,80),::hx::paccDynamic)) );
HXDLIN( 598)			s8 = s8.toUpperCase();
HXDLIN( 598)			int keys11;
HXDLIN( 598)			if (::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->exists(s8)) {
HXLINE( 598)				keys11 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->get_int(s8);
            			}
            			else {
HXLINE( 598)				keys11 = -1;
            			}
HXDLIN( 598)			::Array< int > keys12 = ::Array_obj< int >::__new(1)->init(0,keys11);
HXDLIN( 598)			switch((int)(::Control_obj::RESET_dyn()->_hx_getIndex())){
            				case (int)0: {
HXLINE( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 598)						int state = 1;
HXDLIN( 598)						int _g = 0;
HXDLIN( 598)						while((_g < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g);
HXDLIN( 598)							_g = (_g + 1);
HXDLIN( 598)							action->addKey(key,state);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 598)						int state1 = 2;
HXDLIN( 598)						int _g1 = 0;
HXDLIN( 598)						while((_g1 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g1);
HXDLIN( 598)							_g1 = (_g1 + 1);
HXDLIN( 598)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 598)						int state2 = -1;
HXDLIN( 598)						int _g2 = 0;
HXDLIN( 598)						while((_g2 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g2);
HXDLIN( 598)							_g2 = (_g2 + 1);
HXDLIN( 598)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 598)						int state = 1;
HXDLIN( 598)						int _g = 0;
HXDLIN( 598)						while((_g < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g);
HXDLIN( 598)							_g = (_g + 1);
HXDLIN( 598)							action->addKey(key,state);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 598)						int state1 = 2;
HXDLIN( 598)						int _g1 = 0;
HXDLIN( 598)						while((_g1 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g1);
HXDLIN( 598)							_g1 = (_g1 + 1);
HXDLIN( 598)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 598)						int state2 = -1;
HXDLIN( 598)						int _g2 = 0;
HXDLIN( 598)						while((_g2 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g2);
HXDLIN( 598)							_g2 = (_g2 + 1);
HXDLIN( 598)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 598)						int state = 1;
HXDLIN( 598)						int _g = 0;
HXDLIN( 598)						while((_g < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g);
HXDLIN( 598)							_g = (_g + 1);
HXDLIN( 598)							action->addKey(key,state);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 598)						int state1 = 2;
HXDLIN( 598)						int _g1 = 0;
HXDLIN( 598)						while((_g1 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g1);
HXDLIN( 598)							_g1 = (_g1 + 1);
HXDLIN( 598)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 598)						int state2 = -1;
HXDLIN( 598)						int _g2 = 0;
HXDLIN( 598)						while((_g2 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g2);
HXDLIN( 598)							_g2 = (_g2 + 1);
HXDLIN( 598)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 598)						int state = 1;
HXDLIN( 598)						int _g = 0;
HXDLIN( 598)						while((_g < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g);
HXDLIN( 598)							_g = (_g + 1);
HXDLIN( 598)							action->addKey(key,state);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 598)						int state1 = 2;
HXDLIN( 598)						int _g1 = 0;
HXDLIN( 598)						while((_g1 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g1);
HXDLIN( 598)							_g1 = (_g1 + 1);
HXDLIN( 598)							action1->addKey(key,state1);
            						}
            					}
HXDLIN( 598)					{
HXLINE( 598)						 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 598)						int state2 = -1;
HXDLIN( 598)						int _g2 = 0;
HXDLIN( 598)						while((_g2 < keys12->length)){
HXLINE( 598)							int key = keys12->__get(_g2);
HXDLIN( 598)							_g2 = (_g2 + 1);
HXDLIN( 598)							action2->addKey(key,state2);
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 598)					 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 598)					int state = 2;
HXDLIN( 598)					int _g = 0;
HXDLIN( 598)					while((_g < keys12->length)){
HXLINE( 598)						int key = keys12->__get(_g);
HXDLIN( 598)						_g = (_g + 1);
HXDLIN( 598)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 598)					 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 598)					int state = 2;
HXDLIN( 598)					int _g = 0;
HXDLIN( 598)					while((_g < keys12->length)){
HXLINE( 598)						int key = keys12->__get(_g);
HXDLIN( 598)						_g = (_g + 1);
HXDLIN( 598)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 598)					 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 598)					int state = 2;
HXDLIN( 598)					int _g = 0;
HXDLIN( 598)					while((_g < keys12->length)){
HXLINE( 598)						int key = keys12->__get(_g);
HXDLIN( 598)						_g = (_g + 1);
HXDLIN( 598)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 598)					 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 598)					int state = 2;
HXDLIN( 598)					int _g = 0;
HXDLIN( 598)					while((_g < keys12->length)){
HXLINE( 598)						int key = keys12->__get(_g);
HXDLIN( 598)						_g = (_g + 1);
HXDLIN( 598)						action->addKey(key,state);
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 598)					 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 598)					int state = 2;
HXDLIN( 598)					int _g = 0;
HXDLIN( 598)					while((_g < keys12->length)){
HXLINE( 598)						int key = keys12->__get(_g);
HXDLIN( 598)						_g = (_g + 1);
HXDLIN( 598)						action->addKey(key,state);
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,loadKeyBinds,(void))

void Controls_obj::removeKeyboard(){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_603_removeKeyboard)
HXDLIN( 603)		int _g = 0;
HXDLIN( 603)		::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 603)		while((_g < _g1->length)){
HXDLIN( 603)			 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 603)			_g = (_g + 1);
HXLINE( 605)			int i = action->inputs->length;
HXLINE( 606)			while(true){
HXLINE( 606)				i = (i - 1);
HXDLIN( 606)				if (!(((i + 1) > 0))) {
HXLINE( 606)					goto _hx_goto_196;
            				}
HXLINE( 608)				 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 609)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 610)					action->remove(input,null());
            				}
            			}
            			_hx_goto_196:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,removeKeyboard,(void))

void Controls_obj::addGamepad(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_616_addGamepad)
HXLINE( 617)		if (this->gamepadsAdded->contains(id)) {
HXLINE( 618)			this->gamepadsAdded->remove(id);
            		}
HXLINE( 620)		this->gamepadsAdded->push(id);
HXLINE( 623)		{
HXLINE( 623)			::Dynamic map = buttonMap;
HXDLIN( 623)			::Dynamic _g_map = map;
HXDLIN( 623)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 623)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 623)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 623)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 623)				 ::Control _g1_key = key;
HXDLIN( 623)				 ::Control control = _g1_key;
HXDLIN( 623)				::Array< int > buttons = _g1_value;
HXLINE( 624)				{
HXLINE( 624)					int id1 = id;
HXDLIN( 624)					::Array< int > buttons1 = buttons;
HXDLIN( 624)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 624)								int state = 1;
HXDLIN( 624)								int _g = 0;
HXDLIN( 624)								while((_g < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g);
HXDLIN( 624)									_g = (_g + 1);
HXDLIN( 624)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 624)								int state1 = 2;
HXDLIN( 624)								int _g1 = 0;
HXDLIN( 624)								while((_g1 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g1);
HXDLIN( 624)									_g1 = (_g1 + 1);
HXDLIN( 624)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 624)								int state2 = -1;
HXDLIN( 624)								int _g2 = 0;
HXDLIN( 624)								while((_g2 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g2);
HXDLIN( 624)									_g2 = (_g2 + 1);
HXDLIN( 624)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 624)								int state = 1;
HXDLIN( 624)								int _g = 0;
HXDLIN( 624)								while((_g < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g);
HXDLIN( 624)									_g = (_g + 1);
HXDLIN( 624)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 624)								int state1 = 2;
HXDLIN( 624)								int _g1 = 0;
HXDLIN( 624)								while((_g1 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g1);
HXDLIN( 624)									_g1 = (_g1 + 1);
HXDLIN( 624)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 624)								int state2 = -1;
HXDLIN( 624)								int _g2 = 0;
HXDLIN( 624)								while((_g2 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g2);
HXDLIN( 624)									_g2 = (_g2 + 1);
HXDLIN( 624)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 624)								int state = 1;
HXDLIN( 624)								int _g = 0;
HXDLIN( 624)								while((_g < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g);
HXDLIN( 624)									_g = (_g + 1);
HXDLIN( 624)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 624)								int state1 = 2;
HXDLIN( 624)								int _g1 = 0;
HXDLIN( 624)								while((_g1 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g1);
HXDLIN( 624)									_g1 = (_g1 + 1);
HXDLIN( 624)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 624)								int state2 = -1;
HXDLIN( 624)								int _g2 = 0;
HXDLIN( 624)								while((_g2 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g2);
HXDLIN( 624)									_g2 = (_g2 + 1);
HXDLIN( 624)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 624)								int state = 1;
HXDLIN( 624)								int _g = 0;
HXDLIN( 624)								while((_g < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g);
HXDLIN( 624)									_g = (_g + 1);
HXDLIN( 624)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 624)								int state1 = 2;
HXDLIN( 624)								int _g1 = 0;
HXDLIN( 624)								while((_g1 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g1);
HXDLIN( 624)									_g1 = (_g1 + 1);
HXDLIN( 624)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 624)							{
HXLINE( 624)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 624)								int state2 = -1;
HXDLIN( 624)								int _g2 = 0;
HXDLIN( 624)								while((_g2 < buttons1->length)){
HXLINE( 624)									int button = buttons1->__get(_g2);
HXDLIN( 624)									_g2 = (_g2 + 1);
HXDLIN( 624)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 624)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 624)							int state = 2;
HXDLIN( 624)							int _g = 0;
HXDLIN( 624)							while((_g < buttons1->length)){
HXLINE( 624)								int button = buttons1->__get(_g);
HXDLIN( 624)								_g = (_g + 1);
HXDLIN( 624)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 624)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 624)							int state = 2;
HXDLIN( 624)							int _g = 0;
HXDLIN( 624)							while((_g < buttons1->length)){
HXLINE( 624)								int button = buttons1->__get(_g);
HXDLIN( 624)								_g = (_g + 1);
HXDLIN( 624)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 624)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 624)							int state = 2;
HXDLIN( 624)							int _g = 0;
HXDLIN( 624)							while((_g < buttons1->length)){
HXLINE( 624)								int button = buttons1->__get(_g);
HXDLIN( 624)								_g = (_g + 1);
HXDLIN( 624)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 624)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 624)							int state = 2;
HXDLIN( 624)							int _g = 0;
HXDLIN( 624)							while((_g < buttons1->length)){
HXLINE( 624)								int button = buttons1->__get(_g);
HXDLIN( 624)								_g = (_g + 1);
HXDLIN( 624)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 624)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 624)							int state = 2;
HXDLIN( 624)							int _g = 0;
HXDLIN( 624)							while((_g < buttons1->length)){
HXLINE( 624)								int button = buttons1->__get(_g);
HXDLIN( 624)								_g = (_g + 1);
HXDLIN( 624)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepad,(void))

void Controls_obj::addGamepadLiteral(int id, ::haxe::ds::EnumValueMap buttonMap){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_632_addGamepadLiteral)
HXLINE( 633)		this->gamepadsAdded->push(id);
HXLINE( 636)		{
HXLINE( 636)			::Dynamic map = buttonMap;
HXDLIN( 636)			::Dynamic _g_map = map;
HXDLIN( 636)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 636)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 636)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 636)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 636)				 ::Control _g1_key = key;
HXDLIN( 636)				 ::Control control = _g1_key;
HXDLIN( 636)				::Array< int > buttons = _g1_value;
HXLINE( 637)				{
HXLINE( 637)					int id1 = id;
HXDLIN( 637)					::Array< int > buttons1 = buttons;
HXDLIN( 637)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXLINE( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 637)								int state = 1;
HXDLIN( 637)								int _g = 0;
HXDLIN( 637)								while((_g < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g);
HXDLIN( 637)									_g = (_g + 1);
HXDLIN( 637)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 637)								int state1 = 2;
HXDLIN( 637)								int _g1 = 0;
HXDLIN( 637)								while((_g1 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g1);
HXDLIN( 637)									_g1 = (_g1 + 1);
HXDLIN( 637)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 637)								int state2 = -1;
HXDLIN( 637)								int _g2 = 0;
HXDLIN( 637)								while((_g2 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g2);
HXDLIN( 637)									_g2 = (_g2 + 1);
HXDLIN( 637)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 637)								int state = 1;
HXDLIN( 637)								int _g = 0;
HXDLIN( 637)								while((_g < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g);
HXDLIN( 637)									_g = (_g + 1);
HXDLIN( 637)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 637)								int state1 = 2;
HXDLIN( 637)								int _g1 = 0;
HXDLIN( 637)								while((_g1 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g1);
HXDLIN( 637)									_g1 = (_g1 + 1);
HXDLIN( 637)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 637)								int state2 = -1;
HXDLIN( 637)								int _g2 = 0;
HXDLIN( 637)								while((_g2 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g2);
HXDLIN( 637)									_g2 = (_g2 + 1);
HXDLIN( 637)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXLINE( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 637)								int state = 1;
HXDLIN( 637)								int _g = 0;
HXDLIN( 637)								while((_g < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g);
HXDLIN( 637)									_g = (_g + 1);
HXDLIN( 637)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 637)								int state1 = 2;
HXDLIN( 637)								int _g1 = 0;
HXDLIN( 637)								while((_g1 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g1);
HXDLIN( 637)									_g1 = (_g1 + 1);
HXDLIN( 637)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 637)								int state2 = -1;
HXDLIN( 637)								int _g2 = 0;
HXDLIN( 637)								while((_g2 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g2);
HXDLIN( 637)									_g2 = (_g2 + 1);
HXDLIN( 637)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXLINE( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 637)								int state = 1;
HXDLIN( 637)								int _g = 0;
HXDLIN( 637)								while((_g < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g);
HXDLIN( 637)									_g = (_g + 1);
HXDLIN( 637)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 637)								int state1 = 2;
HXDLIN( 637)								int _g1 = 0;
HXDLIN( 637)								while((_g1 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g1);
HXDLIN( 637)									_g1 = (_g1 + 1);
HXDLIN( 637)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 637)							{
HXLINE( 637)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 637)								int state2 = -1;
HXDLIN( 637)								int _g2 = 0;
HXDLIN( 637)								while((_g2 < buttons1->length)){
HXLINE( 637)									int button = buttons1->__get(_g2);
HXDLIN( 637)									_g2 = (_g2 + 1);
HXDLIN( 637)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXLINE( 637)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 637)							int state = 2;
HXDLIN( 637)							int _g = 0;
HXDLIN( 637)							while((_g < buttons1->length)){
HXLINE( 637)								int button = buttons1->__get(_g);
HXDLIN( 637)								_g = (_g + 1);
HXDLIN( 637)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXLINE( 637)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 637)							int state = 2;
HXDLIN( 637)							int _g = 0;
HXDLIN( 637)							while((_g < buttons1->length)){
HXLINE( 637)								int button = buttons1->__get(_g);
HXDLIN( 637)								_g = (_g + 1);
HXDLIN( 637)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXLINE( 637)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 637)							int state = 2;
HXDLIN( 637)							int _g = 0;
HXDLIN( 637)							while((_g < buttons1->length)){
HXLINE( 637)								int button = buttons1->__get(_g);
HXDLIN( 637)								_g = (_g + 1);
HXDLIN( 637)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 637)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 637)							int state = 2;
HXDLIN( 637)							int _g = 0;
HXDLIN( 637)							while((_g < buttons1->length)){
HXLINE( 637)								int button = buttons1->__get(_g);
HXDLIN( 637)								_g = (_g + 1);
HXDLIN( 637)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXLINE( 637)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 637)							int state = 2;
HXDLIN( 637)							int _g = 0;
HXDLIN( 637)							while((_g < buttons1->length)){
HXLINE( 637)								int button = buttons1->__get(_g);
HXDLIN( 637)								_g = (_g + 1);
HXDLIN( 637)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,addGamepadLiteral,(void))

void Controls_obj::removeGamepad(::hx::Null< int >  __o_deviceID){
            		int deviceID = __o_deviceID.Default(-1);
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_645_removeGamepad)
HXLINE( 646)		{
HXLINE( 646)			int _g = 0;
HXDLIN( 646)			::Array< ::Dynamic> _g1 = this->digitalActions;
HXDLIN( 646)			while((_g < _g1->length)){
HXLINE( 646)				 ::flixel::input::actions::FlxActionDigital action = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionDigital >();
HXDLIN( 646)				_g = (_g + 1);
HXLINE( 648)				int i = action->inputs->length;
HXLINE( 649)				while(true){
HXLINE( 649)					i = (i - 1);
HXDLIN( 649)					if (!(((i + 1) > 0))) {
HXLINE( 649)						goto _hx_goto_237;
            					}
HXLINE( 651)					 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 652)					bool _hx_tmp;
HXDLIN( 652)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 652)						if ((deviceID != -1)) {
HXLINE( 652)							_hx_tmp = (input->deviceID == deviceID);
            						}
            						else {
HXLINE( 652)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 652)						_hx_tmp = false;
            					}
HXDLIN( 652)					if (_hx_tmp) {
HXLINE( 653)						action->remove(input,null());
            					}
            				}
            				_hx_goto_237:;
            			}
            		}
HXLINE( 657)		this->gamepadsAdded->remove(deviceID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeGamepad,(void))

void Controls_obj::addDefaultGamepad(int id){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_663_addDefaultGamepad)
HXDLIN( 663)		 ::haxe::ds::EnumValueMap _g =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXDLIN( 663)		_g->set(::Control_obj::ACCEPT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_258,1));
HXDLIN( 663)		_g->set(::Control_obj::BACK_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_259,1));
HXDLIN( 663)		_g->set(::Control_obj::UP_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_260,2));
HXDLIN( 663)		_g->set(::Control_obj::DOWN_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_261,2));
HXDLIN( 663)		_g->set(::Control_obj::LEFT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_262,2));
HXDLIN( 663)		_g->set(::Control_obj::RIGHT_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_263,2));
HXDLIN( 663)		_g->set(::Control_obj::PAUSE_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_264,1));
HXDLIN( 663)		_g->set(::Control_obj::RESET_dyn(),::Array_obj< int >::fromData( _hx_array_data_116e4296_265,1));
HXDLIN( 663)		this->gamepadsAdded->push(id);
HXDLIN( 663)		{
HXDLIN( 663)			::Dynamic map = _g;
HXDLIN( 663)			::Dynamic _g_map = map;
HXDLIN( 663)			 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 663)			while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 663)				 ::Control key = _g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN( 663)				::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 663)				 ::Control _g1_key = key;
HXDLIN( 663)				 ::Control control = _g1_key;
HXDLIN( 663)				::Array< int > buttons = _g1_value;
HXDLIN( 663)				{
HXDLIN( 663)					int id1 = id;
HXDLIN( 663)					::Array< int > buttons1 = buttons;
HXDLIN( 663)					switch((int)(control->_hx_getIndex())){
            						case (int)0: {
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 663)								int state = 1;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 663)								int state1 = 2;
HXDLIN( 663)								int _g1 = 0;
HXDLIN( 663)								while((_g1 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g1);
HXDLIN( 663)									_g1 = (_g1 + 1);
HXDLIN( 663)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 663)								int state2 = -1;
HXDLIN( 663)								int _g2 = 0;
HXDLIN( 663)								while((_g2 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g2);
HXDLIN( 663)									_g2 = (_g2 + 1);
HXDLIN( 663)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 663)								int state = 1;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 663)								int state1 = 2;
HXDLIN( 663)								int _g1 = 0;
HXDLIN( 663)								while((_g1 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g1);
HXDLIN( 663)									_g1 = (_g1 + 1);
HXDLIN( 663)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 663)								int state2 = -1;
HXDLIN( 663)								int _g2 = 0;
HXDLIN( 663)								while((_g2 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g2);
HXDLIN( 663)									_g2 = (_g2 + 1);
HXDLIN( 663)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)2: {
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 663)								int state = 1;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 663)								int state1 = 2;
HXDLIN( 663)								int _g1 = 0;
HXDLIN( 663)								while((_g1 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g1);
HXDLIN( 663)									_g1 = (_g1 + 1);
HXDLIN( 663)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 663)								int state2 = -1;
HXDLIN( 663)								int _g2 = 0;
HXDLIN( 663)								while((_g2 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g2);
HXDLIN( 663)									_g2 = (_g2 + 1);
HXDLIN( 663)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)3: {
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 663)								int state = 1;
HXDLIN( 663)								int _g = 0;
HXDLIN( 663)								while((_g < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g);
HXDLIN( 663)									_g = (_g + 1);
HXDLIN( 663)									action->addGamepad(button,state,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 663)								int state1 = 2;
HXDLIN( 663)								int _g1 = 0;
HXDLIN( 663)								while((_g1 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g1);
HXDLIN( 663)									_g1 = (_g1 + 1);
HXDLIN( 663)									action1->addGamepad(button,state1,id1);
            								}
            							}
HXDLIN( 663)							{
HXDLIN( 663)								 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 663)								int state2 = -1;
HXDLIN( 663)								int _g2 = 0;
HXDLIN( 663)								while((_g2 < buttons1->length)){
HXDLIN( 663)									int button = buttons1->__get(_g2);
HXDLIN( 663)									_g2 = (_g2 + 1);
HXDLIN( 663)									action2->addGamepad(button,state2,id1);
            								}
            							}
            						}
            						break;
            						case (int)4: {
HXDLIN( 663)							 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 663)							int state = 2;
HXDLIN( 663)							int _g = 0;
HXDLIN( 663)							while((_g < buttons1->length)){
HXDLIN( 663)								int button = buttons1->__get(_g);
HXDLIN( 663)								_g = (_g + 1);
HXDLIN( 663)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)5: {
HXDLIN( 663)							 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 663)							int state = 2;
HXDLIN( 663)							int _g = 0;
HXDLIN( 663)							while((_g < buttons1->length)){
HXDLIN( 663)								int button = buttons1->__get(_g);
HXDLIN( 663)								_g = (_g + 1);
HXDLIN( 663)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)6: {
HXDLIN( 663)							 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 663)							int state = 2;
HXDLIN( 663)							int _g = 0;
HXDLIN( 663)							while((_g < buttons1->length)){
HXDLIN( 663)								int button = buttons1->__get(_g);
HXDLIN( 663)								_g = (_g + 1);
HXDLIN( 663)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)7: {
HXDLIN( 663)							 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 663)							int state = 2;
HXDLIN( 663)							int _g = 0;
HXDLIN( 663)							while((_g < buttons1->length)){
HXDLIN( 663)								int button = buttons1->__get(_g);
HXDLIN( 663)								_g = (_g + 1);
HXDLIN( 663)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            						case (int)8: {
HXDLIN( 663)							 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 663)							int state = 2;
HXDLIN( 663)							int _g = 0;
HXDLIN( 663)							while((_g < buttons1->length)){
HXDLIN( 663)								int button = buttons1->__get(_g);
HXDLIN( 663)								_g = (_g + 1);
HXDLIN( 663)								action->addGamepad(button,state,id1);
            							}
            						}
            						break;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,addDefaultGamepad,(void))

void Controls_obj::bindButtons( ::Control control,int id,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_697_bindButtons)
HXDLIN( 697)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action = this->_up;
HXDLIN( 697)					int state = 1;
HXDLIN( 697)					int _g = 0;
HXDLIN( 697)					while((_g < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g);
HXDLIN( 697)						_g = (_g + 1);
HXDLIN( 697)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action1 = this->_upP;
HXDLIN( 697)					int state1 = 2;
HXDLIN( 697)					int _g1 = 0;
HXDLIN( 697)					while((_g1 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g1);
HXDLIN( 697)						_g1 = (_g1 + 1);
HXDLIN( 697)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action2 = this->_upR;
HXDLIN( 697)					int state2 = -1;
HXDLIN( 697)					int _g2 = 0;
HXDLIN( 697)					while((_g2 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g2);
HXDLIN( 697)						_g2 = (_g2 + 1);
HXDLIN( 697)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action = this->_left;
HXDLIN( 697)					int state = 1;
HXDLIN( 697)					int _g = 0;
HXDLIN( 697)					while((_g < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g);
HXDLIN( 697)						_g = (_g + 1);
HXDLIN( 697)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action1 = this->_leftP;
HXDLIN( 697)					int state1 = 2;
HXDLIN( 697)					int _g1 = 0;
HXDLIN( 697)					while((_g1 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g1);
HXDLIN( 697)						_g1 = (_g1 + 1);
HXDLIN( 697)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action2 = this->_leftR;
HXDLIN( 697)					int state2 = -1;
HXDLIN( 697)					int _g2 = 0;
HXDLIN( 697)					while((_g2 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g2);
HXDLIN( 697)						_g2 = (_g2 + 1);
HXDLIN( 697)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action = this->_right;
HXDLIN( 697)					int state = 1;
HXDLIN( 697)					int _g = 0;
HXDLIN( 697)					while((_g < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g);
HXDLIN( 697)						_g = (_g + 1);
HXDLIN( 697)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action1 = this->_rightP;
HXDLIN( 697)					int state1 = 2;
HXDLIN( 697)					int _g1 = 0;
HXDLIN( 697)					while((_g1 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g1);
HXDLIN( 697)						_g1 = (_g1 + 1);
HXDLIN( 697)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action2 = this->_rightR;
HXDLIN( 697)					int state2 = -1;
HXDLIN( 697)					int _g2 = 0;
HXDLIN( 697)					while((_g2 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g2);
HXDLIN( 697)						_g2 = (_g2 + 1);
HXDLIN( 697)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action = this->_down;
HXDLIN( 697)					int state = 1;
HXDLIN( 697)					int _g = 0;
HXDLIN( 697)					while((_g < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g);
HXDLIN( 697)						_g = (_g + 1);
HXDLIN( 697)						action->addGamepad(button,state,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action1 = this->_downP;
HXDLIN( 697)					int state1 = 2;
HXDLIN( 697)					int _g1 = 0;
HXDLIN( 697)					while((_g1 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g1);
HXDLIN( 697)						_g1 = (_g1 + 1);
HXDLIN( 697)						action1->addGamepad(button,state1,id);
            					}
            				}
HXDLIN( 697)				{
HXDLIN( 697)					 ::flixel::input::actions::FlxActionDigital action2 = this->_downR;
HXDLIN( 697)					int state2 = -1;
HXDLIN( 697)					int _g2 = 0;
HXDLIN( 697)					while((_g2 < buttons->length)){
HXDLIN( 697)						int button = buttons->__get(_g2);
HXDLIN( 697)						_g2 = (_g2 + 1);
HXDLIN( 697)						action2->addGamepad(button,state2,id);
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXDLIN( 697)				 ::flixel::input::actions::FlxActionDigital action = this->_reset;
HXDLIN( 697)				int state = 2;
HXDLIN( 697)				int _g = 0;
HXDLIN( 697)				while((_g < buttons->length)){
HXDLIN( 697)					int button = buttons->__get(_g);
HXDLIN( 697)					_g = (_g + 1);
HXDLIN( 697)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)5: {
HXDLIN( 697)				 ::flixel::input::actions::FlxActionDigital action = this->_accept;
HXDLIN( 697)				int state = 2;
HXDLIN( 697)				int _g = 0;
HXDLIN( 697)				while((_g < buttons->length)){
HXDLIN( 697)					int button = buttons->__get(_g);
HXDLIN( 697)					_g = (_g + 1);
HXDLIN( 697)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)6: {
HXDLIN( 697)				 ::flixel::input::actions::FlxActionDigital action = this->_back;
HXDLIN( 697)				int state = 2;
HXDLIN( 697)				int _g = 0;
HXDLIN( 697)				while((_g < buttons->length)){
HXDLIN( 697)					int button = buttons->__get(_g);
HXDLIN( 697)					_g = (_g + 1);
HXDLIN( 697)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)7: {
HXDLIN( 697)				 ::flixel::input::actions::FlxActionDigital action = this->_pause;
HXDLIN( 697)				int state = 2;
HXDLIN( 697)				int _g = 0;
HXDLIN( 697)				while((_g < buttons->length)){
HXDLIN( 697)					int button = buttons->__get(_g);
HXDLIN( 697)					_g = (_g + 1);
HXDLIN( 697)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            			case (int)8: {
HXDLIN( 697)				 ::flixel::input::actions::FlxActionDigital action = this->_cheat;
HXDLIN( 697)				int state = 2;
HXDLIN( 697)				int _g = 0;
HXDLIN( 697)				while((_g < buttons->length)){
HXDLIN( 697)					int button = buttons->__get(_g);
HXDLIN( 697)					_g = (_g + 1);
HXDLIN( 697)					action->addGamepad(button,state,id);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,bindButtons,(void))

void Controls_obj::unbindButtons( ::Control control,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_710_unbindButtons)
HXDLIN( 710)		switch((int)(control->_hx_getIndex())){
            			case (int)0: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_up,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_upP,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_upR,gamepadID,buttons);
            			}
            			break;
            			case (int)1: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_left,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_leftP,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_leftR,gamepadID,buttons);
            			}
            			break;
            			case (int)2: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_right,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_rightP,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_rightR,gamepadID,buttons);
            			}
            			break;
            			case (int)3: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_down,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_downP,gamepadID,buttons);
HXDLIN( 710)				::Controls_obj::removeButtons(this->_downR,gamepadID,buttons);
            			}
            			break;
            			case (int)4: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_reset,gamepadID,buttons);
            			}
            			break;
            			case (int)5: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_accept,gamepadID,buttons);
            			}
            			break;
            			case (int)6: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_back,gamepadID,buttons);
            			}
            			break;
            			case (int)7: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_pause,gamepadID,buttons);
            			}
            			break;
            			case (int)8: {
HXDLIN( 710)				::Controls_obj::removeButtons(this->_cheat,gamepadID,buttons);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,unbindButtons,(void))

::Array< int > Controls_obj::getInputsFor( ::Control control, ::Device device,::Array< int > list){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_734_getInputsFor)
HXLINE( 735)		if (::hx::IsNull( list )) {
HXLINE( 736)			list = ::Array_obj< int >::__new(0);
            		}
HXLINE( 738)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 741)				int _g = 0;
HXDLIN( 741)				::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 741)				while((_g < _g1->length)){
HXLINE( 741)					 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 741)					_g = (_g + 1);
HXLINE( 743)					if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 744)						list->push(input->inputID);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 746)				int id = device->_hx_getInt(0);
HXLINE( 747)				{
HXLINE( 747)					int _g = 0;
HXDLIN( 747)					::Array< ::Dynamic> _g1 = this->getActionFromControl(control)->inputs;
HXDLIN( 747)					while((_g < _g1->length)){
HXLINE( 747)						 ::flixel::input::actions::FlxActionInput input = _g1->__get(_g).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXDLIN( 747)						_g = (_g + 1);
HXLINE( 749)						if ((input->deviceID == id)) {
HXLINE( 750)							list->push(input->inputID);
            						}
            					}
            				}
            			}
            			break;
            		}
HXLINE( 753)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,getInputsFor,return )

void Controls_obj::removeDevice( ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_758_removeDevice)
HXDLIN( 758)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 761)				this->setKeyboardScheme(::KeyboardScheme_obj::None_dyn(),null());
            			}
            			break;
            			case (int)1: {
HXLINE( 762)				int id = device->_hx_getInt(0);
HXLINE( 763)				this->removeGamepad(id);
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Controls_obj,removeDevice,(void))

void Controls_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_948b5caa279cd923_318_init)
HXLINE( 319)		 ::flixel::input::actions::FlxActionManager actions =  ::flixel::input::actions::FlxActionManager_obj::__alloc( HX_CTX );
HXLINE( 320)		::flixel::FlxG_obj::inputs->add_flixel_input_actions_FlxActionManager(actions);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,init,(void))

void Controls_obj::addKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys,int state){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_476_addKeys)
HXDLIN( 476)		int _g = 0;
HXDLIN( 476)		while((_g < keys->length)){
HXDLIN( 476)			int key = keys->__get(_g);
HXDLIN( 476)			_g = (_g + 1);
HXLINE( 477)			action->addKey(key,state);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,addKeys,(void))

void Controls_obj::removeKeys( ::flixel::input::actions::FlxActionDigital action,::Array< int > keys){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_481_removeKeys)
HXLINE( 482)		int i = action->inputs->length;
HXLINE( 483)		while(true){
HXLINE( 483)			i = (i - 1);
HXDLIN( 483)			if (!(((i + 1) > 0))) {
HXLINE( 483)				goto _hx_goto_292;
            			}
HXLINE( 485)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 486)			bool _hx_tmp;
HXDLIN( 486)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() )) {
HXLINE( 486)				_hx_tmp = (keys->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 486)				_hx_tmp = false;
            			}
HXDLIN( 486)			if (_hx_tmp) {
HXLINE( 487)				action->remove(input,null());
            			}
            		}
            		_hx_goto_292:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,removeKeys,(void))

void Controls_obj::addButtons( ::flixel::input::actions::FlxActionDigital action,::Array< int > buttons,int state,int id){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_718_addButtons)
HXDLIN( 718)		int _g = 0;
HXDLIN( 718)		while((_g < buttons->length)){
HXDLIN( 718)			int button = buttons->__get(_g);
HXDLIN( 718)			_g = (_g + 1);
HXLINE( 719)			action->addGamepad(button,state,id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Controls_obj,addButtons,(void))

void Controls_obj::removeButtons( ::flixel::input::actions::FlxActionDigital action,int gamepadID,::Array< int > buttons){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_723_removeButtons)
HXLINE( 724)		int i = action->inputs->length;
HXLINE( 725)		while(true){
HXLINE( 725)			i = (i - 1);
HXDLIN( 725)			if (!(((i + 1) > 0))) {
HXLINE( 725)				goto _hx_goto_296;
            			}
HXLINE( 727)			 ::flixel::input::actions::FlxActionInput input = action->inputs->__get(i).StaticCast<  ::flixel::input::actions::FlxActionInput >();
HXLINE( 728)			bool _hx_tmp;
HXDLIN( 728)			bool _hx_tmp1;
HXDLIN( 728)			if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 728)				if ((gamepadID != -1)) {
HXLINE( 728)					_hx_tmp1 = (input->deviceID == gamepadID);
            				}
            				else {
HXLINE( 728)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 728)				_hx_tmp1 = false;
            			}
HXDLIN( 728)			if (_hx_tmp1) {
HXLINE( 728)				_hx_tmp = (buttons->indexOf(input->inputID,null()) != -1);
            			}
            			else {
HXLINE( 728)				_hx_tmp = false;
            			}
HXDLIN( 728)			if (_hx_tmp) {
HXLINE( 729)				action->remove(input,null());
            			}
            		}
            		_hx_goto_296:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Controls_obj,removeButtons,(void))

bool Controls_obj::isDevice( ::flixel::input::actions::FlxActionInput input, ::Device device){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_769_isDevice)
HXDLIN( 769)		switch((int)(device->_hx_getIndex())){
            			case (int)0: {
HXLINE( 771)				return ::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::KEYBOARD_dyn() );
            			}
            			break;
            			case (int)1: {
HXLINE( 772)				int id = device->_hx_getInt(0);
HXDLIN( 772)				if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXLINE( 772)					if ((id != -1)) {
HXLINE( 772)						return (input->deviceID == id);
            					}
            					else {
HXLINE( 772)						return true;
            					}
            				}
            				else {
HXLINE( 772)					return false;
            				}
            			}
            			break;
            		}
HXLINE( 769)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isDevice,return )

bool Controls_obj::isGamepad( ::flixel::input::actions::FlxActionInput input,int deviceID){
            	HX_STACKFRAME(&_hx_pos_948b5caa279cd923_778_isGamepad)
HXDLIN( 778)		if (::hx::IsPointerEq( input->device,::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn() )) {
HXDLIN( 778)			if ((deviceID != -1)) {
HXDLIN( 778)				return (input->deviceID == deviceID);
            			}
            			else {
HXDLIN( 778)				return true;
            			}
            		}
            		else {
HXDLIN( 778)			return false;
            		}
HXDLIN( 778)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Controls_obj,isGamepad,return )


::hx::ObjectPtr< Controls_obj > Controls_obj::__new(::String name, ::KeyboardScheme __o_scheme) {
	::hx::ObjectPtr< Controls_obj > __this = new Controls_obj();
	__this->__construct(name,__o_scheme);
	return __this;
}

::hx::ObjectPtr< Controls_obj > Controls_obj::__alloc(::hx::Ctx *_hx_ctx,::String name, ::KeyboardScheme __o_scheme) {
	Controls_obj *__this = (Controls_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Controls_obj), true, "Controls"));
	*(void **)__this = Controls_obj::_hx_vtable;
	__this->__construct(name,__o_scheme);
	return __this;
}

Controls_obj::Controls_obj()
{
}

void Controls_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controls);
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_upP,"_upP");
	HX_MARK_MEMBER_NAME(_leftP,"_leftP");
	HX_MARK_MEMBER_NAME(_rightP,"_rightP");
	HX_MARK_MEMBER_NAME(_downP,"_downP");
	HX_MARK_MEMBER_NAME(_upR,"_upR");
	HX_MARK_MEMBER_NAME(_leftR,"_leftR");
	HX_MARK_MEMBER_NAME(_rightR,"_rightR");
	HX_MARK_MEMBER_NAME(_downR,"_downR");
	HX_MARK_MEMBER_NAME(_accept,"_accept");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_reset,"_reset");
	HX_MARK_MEMBER_NAME(_cheat,"_cheat");
	HX_MARK_MEMBER_NAME(byName,"byName");
	HX_MARK_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_MARK_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Controls_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_upP,"_upP");
	HX_VISIT_MEMBER_NAME(_leftP,"_leftP");
	HX_VISIT_MEMBER_NAME(_rightP,"_rightP");
	HX_VISIT_MEMBER_NAME(_downP,"_downP");
	HX_VISIT_MEMBER_NAME(_upR,"_upR");
	HX_VISIT_MEMBER_NAME(_leftR,"_leftR");
	HX_VISIT_MEMBER_NAME(_rightR,"_rightR");
	HX_VISIT_MEMBER_NAME(_downR,"_downR");
	HX_VISIT_MEMBER_NAME(_accept,"_accept");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_reset,"_reset");
	HX_VISIT_MEMBER_NAME(_cheat,"_cheat");
	HX_VISIT_MEMBER_NAME(byName,"byName");
	HX_VISIT_MEMBER_NAME(gamepadsAdded,"gamepadsAdded");
	HX_VISIT_MEMBER_NAME(keyboardScheme,"keyboardScheme");
	 ::flixel::input::actions::FlxActionSet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Controls_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return ::hx::Val( _up ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { return ::hx::Val( _upP ); }
		if (HX_FIELD_EQ(inName,"_upR") ) { return ::hx::Val( _upR ); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT() ); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN() ); }
		if (HX_FIELD_EQ(inName,"UP_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_P() ); }
		if (HX_FIELD_EQ(inName,"UP_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP_R() ); }
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACK() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		if (HX_FIELD_EQ(inName,"_down") ) { return ::hx::Val( _down ); }
		if (HX_FIELD_EQ(inName,"_back") ) { return ::hx::Val( _back ); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"PAUSE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAUSE() ); }
		if (HX_FIELD_EQ(inName,"RESET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RESET() ); }
		if (HX_FIELD_EQ(inName,"CHEAT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_CHEAT() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return ::hx::Val( _right ); }
		if (HX_FIELD_EQ(inName,"_leftP") ) { return ::hx::Val( _leftP ); }
		if (HX_FIELD_EQ(inName,"_downP") ) { return ::hx::Val( _downP ); }
		if (HX_FIELD_EQ(inName,"_leftR") ) { return ::hx::Val( _leftR ); }
		if (HX_FIELD_EQ(inName,"_downR") ) { return ::hx::Val( _downR ); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return ::hx::Val( _pause ); }
		if (HX_FIELD_EQ(inName,"_reset") ) { return ::hx::Val( _reset ); }
		if (HX_FIELD_EQ(inName,"_cheat") ) { return ::hx::Val( _cheat ); }
		if (HX_FIELD_EQ(inName,"byName") ) { return ::hx::Val( byName ); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return ::hx::Val( get_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"LEFT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_P() ); }
		if (HX_FIELD_EQ(inName,"DOWN_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_P() ); }
		if (HX_FIELD_EQ(inName,"LEFT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT_R() ); }
		if (HX_FIELD_EQ(inName,"DOWN_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN_R() ); }
		if (HX_FIELD_EQ(inName,"ACCEPT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ACCEPT() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { return ::hx::Val( _rightP ); }
		if (HX_FIELD_EQ(inName,"_rightR") ) { return ::hx::Val( _rightR ); }
		if (HX_FIELD_EQ(inName,"_accept") ) { return ::hx::Val( _accept ); }
		if (HX_FIELD_EQ(inName,"RIGHT_P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_P() ); }
		if (HX_FIELD_EQ(inName,"RIGHT_R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT_R() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return ::hx::Val( get_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return ::hx::Val( get_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_P") ) { return ::hx::Val( get_UP_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_UP_R") ) { return ::hx::Val( get_UP_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return ::hx::Val( get_BACK_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindKeys") ) { return ::hx::Val( bindKeys_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return ::hx::Val( get_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_PAUSE") ) { return ::hx::Val( get_PAUSE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RESET") ) { return ::hx::Val( get_RESET_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_CHEAT") ) { return ::hx::Val( get_CHEAT_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_LEFT_P") ) { return ::hx::Val( get_LEFT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_P") ) { return ::hx::Val( get_DOWN_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT_R") ) { return ::hx::Val( get_LEFT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN_R") ) { return ::hx::Val( get_DOWN_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ACCEPT") ) { return ::hx::Val( get_ACCEPT_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindKeys") ) { return ::hx::Val( unbindKeys_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_RIGHT_P") ) { return ::hx::Val( get_RIGHT_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_R") ) { return ::hx::Val( get_RIGHT_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkByName") ) { return ::hx::Val( checkByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"bindButtons") ) { return ::hx::Val( bindButtons_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"forEachBound") ) { return ::hx::Val( forEachBound_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadKeyBinds") ) { return ::hx::Val( loadKeyBinds_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInputsFor") ) { return ::hx::Val( getInputsFor_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeDevice") ) { return ::hx::Val( removeDevice_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { return ::hx::Val( gamepadsAdded ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"unbindButtons") ) { return ::hx::Val( unbindButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { return ::hx::Val( keyboardScheme ); }
		if (HX_FIELD_EQ(inName,"replaceBinding") ) { return ::hx::Val( replaceBinding_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeKeyboard") ) { return ::hx::Val( removeKeyboard_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getDialogueName") ) { return ::hx::Val( getDialogueName_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setKeyboardScheme") ) { return ::hx::Val( setKeyboardScheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepadLiteral") ) { return ::hx::Val( addGamepadLiteral_dyn() ); }
		if (HX_FIELD_EQ(inName,"addDefaultGamepad") ) { return ::hx::Val( addDefaultGamepad_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeKeyboardScheme") ) { return ::hx::Val( mergeKeyboardScheme_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getActionFromControl") ) { return ::hx::Val( getActionFromControl_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getDialogueNameFromToken") ) { return ::hx::Val( getDialogueNameFromToken_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addKeys") ) { outValue = addKeys_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDevice") ) { outValue = isDevice_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isGamepad") ) { outValue = isGamepad_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeKeys") ) { outValue = removeKeys_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addButtons") ) { outValue = addButtons_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeButtons") ) { outValue = removeButtons_dyn(); return true; }
	}
	return false;
}

::hx::Val Controls_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_upP") ) { _upP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_upR") ) { _upR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftP") ) { _leftP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downP") ) { _downP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftR") ) { _leftR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downR") ) { _downR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reset") ) { _reset=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cheat") ) { _cheat=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byName") ) { byName=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rightP") ) { _rightP=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightR") ) { _rightR=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accept") ) { _accept=inValue.Cast<  ::flixel::input::actions::FlxActionDigital >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gamepadsAdded") ) { gamepadsAdded=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keyboardScheme") ) { keyboardScheme=inValue.Cast<  ::KeyboardScheme >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_up",7a,7c,48,00));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("_right",1d,53,4b,e5));
	outFields->push(HX_("_down",41,14,7f,f5));
	outFields->push(HX_("_upP",96,6e,24,3f));
	outFields->push(HX_("_leftP",aa,45,3e,6e));
	outFields->push(HX_("_rightP",93,66,9d,bc));
	outFields->push(HX_("_downP",ef,a4,b2,d9));
	outFields->push(HX_("_upR",98,6e,24,3f));
	outFields->push(HX_("_leftR",ac,45,3e,6e));
	outFields->push(HX_("_rightR",95,66,9d,bc));
	outFields->push(HX_("_downR",f1,a4,b2,d9));
	outFields->push(HX_("_accept",a7,a4,7d,79));
	outFields->push(HX_("_back",06,f6,21,f4));
	outFields->push(HX_("_pause",37,1e,3f,b9));
	outFields->push(HX_("_reset",10,91,af,e2));
	outFields->push(HX_("_cheat",54,de,9d,41));
	outFields->push(HX_("byName",c2,2b,4e,0e));
	outFields->push(HX_("gamepadsAdded",ae,52,a9,94));
	outFields->push(HX_("keyboardScheme",2c,c8,f4,c5));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("UP_P",2c,2a,6c,38));
	outFields->push(HX_("LEFT_P",d8,72,4a,4c));
	outFields->push(HX_("RIGHT_P",cd,fd,37,93));
	outFields->push(HX_("DOWN_P",f3,6f,a9,e6));
	outFields->push(HX_("UP_R",2e,2a,6c,38));
	outFields->push(HX_("LEFT_R",da,72,4a,4c));
	outFields->push(HX_("RIGHT_R",cf,fd,37,93));
	outFields->push(HX_("DOWN_R",f5,6f,a9,e6));
	outFields->push(HX_("ACCEPT",08,3f,89,bd));
	outFields->push(HX_("BACK",27,a2,d1,2b));
	outFields->push(HX_("PAUSE",d6,0e,46,3b));
	outFields->push(HX_("RESET",af,81,b6,64));
	outFields->push(HX_("CHEAT",f3,ce,a4,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Controls_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_up),HX_("_up",7a,7c,48,00)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_right),HX_("_right",1d,53,4b,e5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_down),HX_("_down",41,14,7f,f5)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upP),HX_("_upP",96,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftP),HX_("_leftP",aa,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightP),HX_("_rightP",93,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downP),HX_("_downP",ef,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_upR),HX_("_upR",98,6e,24,3f)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_leftR),HX_("_leftR",ac,45,3e,6e)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_rightR),HX_("_rightR",95,66,9d,bc)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_downR),HX_("_downR",f1,a4,b2,d9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_accept),HX_("_accept",a7,a4,7d,79)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_back),HX_("_back",06,f6,21,f4)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_pause),HX_("_pause",37,1e,3f,b9)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_reset),HX_("_reset",10,91,af,e2)},
	{::hx::fsObject /*  ::flixel::input::actions::FlxActionDigital */ ,(int)offsetof(Controls_obj,_cheat),HX_("_cheat",54,de,9d,41)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Controls_obj,byName),HX_("byName",c2,2b,4e,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Controls_obj,gamepadsAdded),HX_("gamepadsAdded",ae,52,a9,94)},
	{::hx::fsObject /*  ::KeyboardScheme */ ,(int)offsetof(Controls_obj,keyboardScheme),HX_("keyboardScheme",2c,c8,f4,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Controls_obj_sStaticStorageInfo = 0;
#endif

static ::String Controls_obj_sMemberFields[] = {
	HX_("_up",7a,7c,48,00),
	HX_("_left",e6,23,c1,fa),
	HX_("_right",1d,53,4b,e5),
	HX_("_down",41,14,7f,f5),
	HX_("_upP",96,6e,24,3f),
	HX_("_leftP",aa,45,3e,6e),
	HX_("_rightP",93,66,9d,bc),
	HX_("_downP",ef,a4,b2,d9),
	HX_("_upR",98,6e,24,3f),
	HX_("_leftR",ac,45,3e,6e),
	HX_("_rightR",95,66,9d,bc),
	HX_("_downR",f1,a4,b2,d9),
	HX_("_accept",a7,a4,7d,79),
	HX_("_back",06,f6,21,f4),
	HX_("_pause",37,1e,3f,b9),
	HX_("_reset",10,91,af,e2),
	HX_("_cheat",54,de,9d,41),
	HX_("byName",c2,2b,4e,0e),
	HX_("gamepadsAdded",ae,52,a9,94),
	HX_("keyboardScheme",2c,c8,f4,c5),
	HX_("get_UP",a4,e1,2f,a3),
	HX_("get_LEFT",90,8b,2b,b2),
	HX_("get_RIGHT",13,a0,fb,aa),
	HX_("get_DOWN",eb,7b,e9,ac),
	HX_("get_UP_P",b5,e5,26,b8),
	HX_("get_LEFT_P",a1,e2,d1,3c),
	HX_("get_RIGHT_P",e4,5d,32,19),
	HX_("get_DOWN_P",bc,df,30,d7),
	HX_("get_UP_R",b7,e5,26,b8),
	HX_("get_LEFT_R",a3,e2,d1,3c),
	HX_("get_RIGHT_R",e6,5d,32,19),
	HX_("get_DOWN_R",be,df,30,d7),
	HX_("get_ACCEPT",d1,ae,10,ae),
	HX_("get_BACK",b0,5d,8c,ab),
	HX_("get_PAUSE",2d,6b,ef,7e),
	HX_("get_RESET",06,de,5f,a8),
	HX_("get_CHEAT",4a,2b,4e,07),
	HX_("update",09,86,05,87),
	HX_("checkByName",aa,fe,5f,f0),
	HX_("getDialogueName",39,8d,0f,32),
	HX_("getDialogueNameFromToken",b6,d0,32,d3),
	HX_("getActionFromControl",87,31,3f,3d),
	HX_("forEachBound",34,ae,22,2f),
	HX_("replaceBinding",71,99,ae,a4),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("copyTo",90,1c,33,c9),
	HX_("mergeKeyboardScheme",04,51,83,14),
	HX_("bindKeys",51,26,d1,b4),
	HX_("unbindKeys",aa,0d,95,3a),
	HX_("setKeyboardScheme",6e,4f,d6,5b),
	HX_("loadKeyBinds",3d,a2,d2,b0),
	HX_("removeKeyboard",0b,f9,7f,32),
	HX_("addGamepad",80,0c,10,f1),
	HX_("addGamepadLiteral",cf,54,ef,a8),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("addDefaultGamepad",e1,d7,98,02),
	HX_("bindButtons",04,66,e6,c6),
	HX_("unbindButtons",4b,dc,20,e8),
	HX_("getInputsFor",ea,35,e1,37),
	HX_("removeDevice",fa,77,a5,e0),
	::String(null()) };

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("init",10,3b,bb,45),
	HX_("addKeys",b5,24,44,83),
	HX_("removeKeys",58,1c,26,c4),
	HX_("addButtons",20,7e,ff,31),
	HX_("removeButtons",5d,ae,2f,a3),
	HX_("isDevice",20,78,e1,c9),
	HX_("isGamepad",d7,5d,84,8d),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Controls",96,42,6e,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Controls_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

