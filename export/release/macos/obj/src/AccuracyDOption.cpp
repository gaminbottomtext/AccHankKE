#include <hxcpp.h>

#ifndef INCLUDED_AccuracyDOption
#include <AccuracyDOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3fccbae956d84d25_573_new,"AccuracyDOption","new",0xe62cee92,"AccuracyDOption.new","Options.hx",573,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3fccbae956d84d25_579_press,"AccuracyDOption","press",0xad8ae235,"AccuracyDOption.press","Options.hx",579,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3fccbae956d84d25_587_updateDisplay,"AccuracyDOption","updateDisplay",0xd1d41feb,"AccuracyDOption.updateDisplay","Options.hx",587,0x9d9a0240)

void AccuracyDOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_3fccbae956d84d25_573_new)
HXLINE( 574)		super::__construct();
HXLINE( 575)		this->description = desc;
            	}

Dynamic AccuracyDOption_obj::__CreateEmpty() { return new AccuracyDOption_obj; }

void *AccuracyDOption_obj::_hx_vtable = 0;

Dynamic AccuracyDOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AccuracyDOption_obj > _hx_result = new AccuracyDOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AccuracyDOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x3638e2e0;
	}
}

bool AccuracyDOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_3fccbae956d84d25_579_press)
HXLINE( 580)		 ::Dynamic _hx_tmp;
HXDLIN( 580)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyMod",09,b2,8a,86),::hx::paccDynamic),1 )) {
HXLINE( 580)			_hx_tmp = 0;
            		}
            		else {
HXLINE( 580)			_hx_tmp = 1;
            		}
HXDLIN( 580)		::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyMod",09,b2,8a,86),_hx_tmp,::hx::paccDynamic);
HXLINE( 581)		this->display = this->updateDisplay();
HXLINE( 582)		return true;
            	}


::String AccuracyDOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_3fccbae956d84d25_587_updateDisplay)
HXDLIN( 587)		::String _hx_tmp;
HXDLIN( 587)		if (::hx::IsEq( ::flixel::FlxG_obj::save->data->__Field(HX_("accuracyMod",09,b2,8a,86),::hx::paccDynamic),0 )) {
HXDLIN( 587)			_hx_tmp = HX_("Accurate",14,d1,76,d9);
            		}
            		else {
HXDLIN( 587)			_hx_tmp = HX_("Complex",10,8e,c2,50);
            		}
HXDLIN( 587)		return (HX_("Accuracy Mode: ",d0,5b,59,26) + _hx_tmp);
            	}



::hx::ObjectPtr< AccuracyDOption_obj > AccuracyDOption_obj::__new(::String desc) {
	::hx::ObjectPtr< AccuracyDOption_obj > __this = new AccuracyDOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< AccuracyDOption_obj > AccuracyDOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	AccuracyDOption_obj *__this = (AccuracyDOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AccuracyDOption_obj), true, "AccuracyDOption"));
	*(void **)__this = AccuracyDOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

AccuracyDOption_obj::AccuracyDOption_obj()
{
}

::hx::Val AccuracyDOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *AccuracyDOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AccuracyDOption_obj_sStaticStorageInfo = 0;
#endif

static ::String AccuracyDOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class AccuracyDOption_obj::__mClass;

void AccuracyDOption_obj::__register()
{
	AccuracyDOption_obj _hx_dummy;
	AccuracyDOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AccuracyDOption",a0,fd,11,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AccuracyDOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AccuracyDOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AccuracyDOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AccuracyDOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

