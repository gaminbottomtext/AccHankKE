#include <hxcpp.h>

#ifndef INCLUDED_smTools_SMNote
#include <smTools/SMNote.h>
#endif

namespace smTools{

void SMNote_obj::__construct() { }

Dynamic SMNote_obj::__CreateEmpty() { return new SMNote_obj; }

void *SMNote_obj::_hx_vtable = 0;

Dynamic SMNote_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SMNote_obj > _hx_result = new SMNote_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SMNote_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e2410e9;
}


SMNote_obj::SMNote_obj()
{
}

::hx::Val SMNote_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SMNote_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SMNote_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SMNote_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SMNote_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsInt,(int)offsetof(SMNote_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsFloat,(int)offsetof(SMNote_obj,length),HX_("length",e6,94,07,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SMNote_obj_sStaticStorageInfo = 0;
#endif

static ::String SMNote_obj_sMemberFields[] = {
	HX_("time",0d,cc,fc,4c),
	HX_("data",2a,56,63,42),
	HX_("length",e6,94,07,9f),
	::String(null()) };

::hx::Class SMNote_obj::__mClass;

void SMNote_obj::__register()
{
	SMNote_obj _hx_dummy;
	SMNote_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("smTools.SMNote",59,1f,16,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SMNote_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SMNote_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SMNote_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SMNote_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace smTools
