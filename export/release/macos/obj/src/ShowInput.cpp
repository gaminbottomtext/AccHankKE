#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ShowInput
#include <ShowInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_635a2d013c5acddb_267_new,"ShowInput","new",0x331b851f,"ShowInput.new","Options.hx",267,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_635a2d013c5acddb_272_press,"ShowInput","press",0x0435f602,"ShowInput.press","Options.hx",272,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_635a2d013c5acddb_280_updateDisplay,"ShowInput","updateDisplay",0x219b48b8,"ShowInput.updateDisplay","Options.hx",280,0x9d9a0240)

void ShowInput_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_635a2d013c5acddb_267_new)
HXLINE( 268)		super::__construct();
HXLINE( 269)		this->description = desc;
            	}

Dynamic ShowInput_obj::__CreateEmpty() { return new ShowInput_obj; }

void *ShowInput_obj::_hx_vtable = 0;

Dynamic ShowInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ShowInput_obj > _hx_result = new ShowInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShowInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x51987eed;
	}
}

bool ShowInput_obj::press(){
            	HX_STACKFRAME(&_hx_pos_635a2d013c5acddb_272_press)
HXLINE( 273)		::flixel::FlxG_obj::save->data->__SetField(HX_("inputShow",27,92,7d,13),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("inputShow",27,92,7d,13),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 274)		this->display = this->updateDisplay();
HXLINE( 275)		return true;
            	}


::String ShowInput_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_635a2d013c5acddb_280_updateDisplay)
HXDLIN( 280)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("inputShow",27,92,7d,13),::hx::paccDynamic)) )) {
HXDLIN( 280)			return HX_("Extended Score Info",23,00,94,83);
            		}
            		else {
HXDLIN( 280)			return HX_("Minimalized Info",bd,6b,6e,01);
            		}
HXDLIN( 280)		return null();
            	}



::hx::ObjectPtr< ShowInput_obj > ShowInput_obj::__new(::String desc) {
	::hx::ObjectPtr< ShowInput_obj > __this = new ShowInput_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ShowInput_obj > ShowInput_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ShowInput_obj *__this = (ShowInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShowInput_obj), true, "ShowInput"));
	*(void **)__this = ShowInput_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ShowInput_obj::ShowInput_obj()
{
}

::hx::Val ShowInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ShowInput_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ShowInput_obj_sStaticStorageInfo = 0;
#endif

static ::String ShowInput_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ShowInput_obj::__mClass;

void ShowInput_obj::__register()
{
	ShowInput_obj _hx_dummy;
	ShowInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ShowInput",ad,09,55,8e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ShowInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ShowInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShowInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShowInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

