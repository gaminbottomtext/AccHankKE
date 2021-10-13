#include <hxcpp.h>

#ifndef INCLUDED_Optimization
#include <Optimization.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9a7031a5efd77cc_510_new,"Optimization","new",0xb2b752bf,"Optimization.new","Options.hx",510,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a7031a5efd77cc_516_press,"Optimization","press",0x7c986ba2,"Optimization.press","Options.hx",516,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_c9a7031a5efd77cc_524_updateDisplay,"Optimization","updateDisplay",0xf7dc5e58,"Optimization.updateDisplay","Options.hx",524,0x9d9a0240)

void Optimization_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_c9a7031a5efd77cc_510_new)
HXLINE( 511)		super::__construct();
HXLINE( 512)		this->description = desc;
            	}

Dynamic Optimization_obj::__CreateEmpty() { return new Optimization_obj; }

void *Optimization_obj::_hx_vtable = 0;

Dynamic Optimization_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Optimization_obj > _hx_result = new Optimization_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Optimization_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x29121039;
	}
}

bool Optimization_obj::press(){
            	HX_STACKFRAME(&_hx_pos_c9a7031a5efd77cc_516_press)
HXLINE( 517)		::flixel::FlxG_obj::save->data->__SetField(HX_("optimize",dd,8c,18,1d),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("optimize",dd,8c,18,1d),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 518)		this->display = this->updateDisplay();
HXLINE( 519)		return true;
            	}


::String Optimization_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_c9a7031a5efd77cc_524_updateDisplay)
HXDLIN( 524)		::String _hx_tmp;
HXDLIN( 524)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("optimize",dd,8c,18,1d),::hx::paccDynamic)) )) {
HXDLIN( 524)			_hx_tmp = HX_("ON",1f,45,00,00);
            		}
            		else {
HXDLIN( 524)			_hx_tmp = HX_("OFF",4f,2f,3c,00);
            		}
HXDLIN( 524)		return (HX_("Optimization ",33,dc,04,7e) + _hx_tmp);
            	}



::hx::ObjectPtr< Optimization_obj > Optimization_obj::__new(::String desc) {
	::hx::ObjectPtr< Optimization_obj > __this = new Optimization_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< Optimization_obj > Optimization_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	Optimization_obj *__this = (Optimization_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Optimization_obj), true, "Optimization"));
	*(void **)__this = Optimization_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

Optimization_obj::Optimization_obj()
{
}

::hx::Val Optimization_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Optimization_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Optimization_obj_sStaticStorageInfo = 0;
#endif

static ::String Optimization_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class Optimization_obj::__mClass;

void Optimization_obj::__register()
{
	Optimization_obj _hx_dummy;
	Optimization_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Optimization",4d,87,51,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Optimization_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Optimization_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Optimization_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Optimization_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

