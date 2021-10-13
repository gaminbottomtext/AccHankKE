#include <hxcpp.h>

#ifndef INCLUDED_CamZoomOption
#include <CamZoomOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7858b555654f959a_685_new,"CamZoomOption","new",0xae7b5429,"CamZoomOption.new","Options.hx",685,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7858b555654f959a_690_press,"CamZoomOption","press",0xf26f1b8c,"CamZoomOption.press","Options.hx",690,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_7858b555654f959a_698_updateDisplay,"CamZoomOption","updateDisplay",0x0b240842,"CamZoomOption.updateDisplay","Options.hx",698,0x9d9a0240)

void CamZoomOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_7858b555654f959a_685_new)
HXLINE( 686)		super::__construct();
HXLINE( 687)		this->description = desc;
            	}

Dynamic CamZoomOption_obj::__CreateEmpty() { return new CamZoomOption_obj; }

void *CamZoomOption_obj::_hx_vtable = 0;

Dynamic CamZoomOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CamZoomOption_obj > _hx_result = new CamZoomOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CamZoomOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x75f1412f;
	}
}

bool CamZoomOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_7858b555654f959a_690_press)
HXLINE( 691)		::flixel::FlxG_obj::save->data->__SetField(HX_("camzoom",a2,ca,10,f1),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("camzoom",a2,ca,10,f1),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 692)		this->display = this->updateDisplay();
HXLINE( 693)		return true;
            	}


::String CamZoomOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_7858b555654f959a_698_updateDisplay)
HXDLIN( 698)		::String _hx_tmp;
HXDLIN( 698)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("camzoom",a2,ca,10,f1),::hx::paccDynamic)) ))) {
HXDLIN( 698)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 698)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 698)		return (HX_("Camera Zoom ",f2,a5,9b,43) + _hx_tmp);
            	}



::hx::ObjectPtr< CamZoomOption_obj > CamZoomOption_obj::__new(::String desc) {
	::hx::ObjectPtr< CamZoomOption_obj > __this = new CamZoomOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< CamZoomOption_obj > CamZoomOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	CamZoomOption_obj *__this = (CamZoomOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CamZoomOption_obj), true, "CamZoomOption"));
	*(void **)__this = CamZoomOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

CamZoomOption_obj::CamZoomOption_obj()
{
}

::hx::Val CamZoomOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *CamZoomOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CamZoomOption_obj_sStaticStorageInfo = 0;
#endif

static ::String CamZoomOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class CamZoomOption_obj::__mClass;

void CamZoomOption_obj::__register()
{
	CamZoomOption_obj _hx_dummy;
	CamZoomOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CamZoomOption",b7,0b,0a,fc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CamZoomOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CamZoomOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CamZoomOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CamZoomOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

