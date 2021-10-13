#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_smTools_SMHeader
#include <smTools/SMHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41987ab568a002b9_4_new,"smTools.SMHeader","new",0x9be203a6,"smTools.SMHeader.new","smTools/SMHeader.hx",4,0x44be2029)
HX_LOCAL_STACK_FRAME(_hx_pos_41987ab568a002b9_28_readHeaderLine,"smTools.SMHeader","readHeaderLine",0x17e15591,"smTools.SMHeader.readHeaderLine","smTools/SMHeader.hx",28,0x44be2029)
namespace smTools{

void SMHeader_obj::__construct(::Array< ::String > headerData){
            	HX_STACKFRAME(&_hx_pos_41987ab568a002b9_4_new)
HXLINE(  18)		this->BPMS = HX_("",00,00,00,00);
HXLINE(  17)		this->OFFSET = HX_("",00,00,00,00);
HXLINE(  16)		this->CDTITLE = HX_("",00,00,00,00);
HXLINE(  15)		this->BACKGROUND = HX_("",00,00,00,00);
HXLINE(  14)		this->BANNER = HX_("",00,00,00,00);
HXLINE(  13)		this->MUSIC = HX_("",00,00,00,00);
HXLINE(  12)		this->CREDIT = HX_("",00,00,00,00);
HXLINE(  11)		this->GENRE = HX_("",00,00,00,00);
HXLINE(  10)		this->ARTIST = HX_("",00,00,00,00);
HXLINE(   9)		this->SUBTITLE = HX_("",00,00,00,00);
HXLINE(   8)		this->TITLE = HX_("",00,00,00,00);
HXLINE(  22)		this->_header = headerData;
HXLINE(  23)		{
HXLINE(  23)			int _g = 0;
HXDLIN(  23)			while((_g < headerData->length)){
HXLINE(  23)				::String i = headerData->__get(_g);
HXDLIN(  23)				_g = (_g + 1);
HXLINE(  24)				this->readHeaderLine(i);
            			}
            		}
            	}

Dynamic SMHeader_obj::__CreateEmpty() { return new SMHeader_obj; }

void *SMHeader_obj::_hx_vtable = 0;

Dynamic SMHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SMHeader_obj > _hx_result = new SMHeader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SMHeader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fac2520;
}

void SMHeader_obj::readHeaderLine(::String line){
            	HX_STACKFRAME(&_hx_pos_41987ab568a002b9_28_readHeaderLine)
HXLINE(  29)		::String propName = line.split(HX_("#",23,00,00,00))->__get(1).split(HX_(":",3a,00,00,00))->__get(0);
HXLINE(  30)		::String value = line.split(HX_(":",3a,00,00,00))->__get(1).split(HX_(";",3b,00,00,00))->__get(0);
HXLINE(  31)		 ::Dynamic prop = ::Reflect_obj::getProperty(::hx::ObjectPtr<OBJ_>(this),propName);
HXLINE(  33)		if (::hx::IsNotNull( prop )) {
HXLINE(  35)			::Reflect_obj::setProperty(::hx::ObjectPtr<OBJ_>(this),propName,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SMHeader_obj,readHeaderLine,(void))


::hx::ObjectPtr< SMHeader_obj > SMHeader_obj::__new(::Array< ::String > headerData) {
	::hx::ObjectPtr< SMHeader_obj > __this = new SMHeader_obj();
	__this->__construct(headerData);
	return __this;
}

::hx::ObjectPtr< SMHeader_obj > SMHeader_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::String > headerData) {
	SMHeader_obj *__this = (SMHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SMHeader_obj), true, "smTools.SMHeader"));
	*(void **)__this = SMHeader_obj::_hx_vtable;
	__this->__construct(headerData);
	return __this;
}

SMHeader_obj::SMHeader_obj()
{
}

void SMHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SMHeader);
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(TITLE,"TITLE");
	HX_MARK_MEMBER_NAME(SUBTITLE,"SUBTITLE");
	HX_MARK_MEMBER_NAME(ARTIST,"ARTIST");
	HX_MARK_MEMBER_NAME(GENRE,"GENRE");
	HX_MARK_MEMBER_NAME(CREDIT,"CREDIT");
	HX_MARK_MEMBER_NAME(MUSIC,"MUSIC");
	HX_MARK_MEMBER_NAME(BANNER,"BANNER");
	HX_MARK_MEMBER_NAME(BACKGROUND,"BACKGROUND");
	HX_MARK_MEMBER_NAME(CDTITLE,"CDTITLE");
	HX_MARK_MEMBER_NAME(OFFSET,"OFFSET");
	HX_MARK_MEMBER_NAME(BPMS,"BPMS");
	HX_MARK_END_CLASS();
}

void SMHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(TITLE,"TITLE");
	HX_VISIT_MEMBER_NAME(SUBTITLE,"SUBTITLE");
	HX_VISIT_MEMBER_NAME(ARTIST,"ARTIST");
	HX_VISIT_MEMBER_NAME(GENRE,"GENRE");
	HX_VISIT_MEMBER_NAME(CREDIT,"CREDIT");
	HX_VISIT_MEMBER_NAME(MUSIC,"MUSIC");
	HX_VISIT_MEMBER_NAME(BANNER,"BANNER");
	HX_VISIT_MEMBER_NAME(BACKGROUND,"BACKGROUND");
	HX_VISIT_MEMBER_NAME(CDTITLE,"CDTITLE");
	HX_VISIT_MEMBER_NAME(OFFSET,"OFFSET");
	HX_VISIT_MEMBER_NAME(BPMS,"BPMS");
}

::hx::Val SMHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BPMS") ) { return ::hx::Val( BPMS ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"TITLE") ) { return ::hx::Val( TITLE ); }
		if (HX_FIELD_EQ(inName,"GENRE") ) { return ::hx::Val( GENRE ); }
		if (HX_FIELD_EQ(inName,"MUSIC") ) { return ::hx::Val( MUSIC ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ARTIST") ) { return ::hx::Val( ARTIST ); }
		if (HX_FIELD_EQ(inName,"CREDIT") ) { return ::hx::Val( CREDIT ); }
		if (HX_FIELD_EQ(inName,"BANNER") ) { return ::hx::Val( BANNER ); }
		if (HX_FIELD_EQ(inName,"OFFSET") ) { return ::hx::Val( OFFSET ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { return ::hx::Val( _header ); }
		if (HX_FIELD_EQ(inName,"CDTITLE") ) { return ::hx::Val( CDTITLE ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SUBTITLE") ) { return ::hx::Val( SUBTITLE ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BACKGROUND") ) { return ::hx::Val( BACKGROUND ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readHeaderLine") ) { return ::hx::Val( readHeaderLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SMHeader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BPMS") ) { BPMS=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"TITLE") ) { TITLE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GENRE") ) { GENRE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MUSIC") ) { MUSIC=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ARTIST") ) { ARTIST=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CREDIT") ) { CREDIT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BANNER") ) { BANNER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OFFSET") ) { OFFSET=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CDTITLE") ) { CDTITLE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SUBTITLE") ) { SUBTITLE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BACKGROUND") ) { BACKGROUND=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SMHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_header",2c,1b,77,6b));
	outFields->push(HX_("TITLE",78,4d,29,8e));
	outFields->push(HX_("SUBTITLE",18,8c,b2,4b));
	outFields->push(HX_("ARTIST",c7,9e,cb,6b));
	outFields->push(HX_("GENRE",23,60,4a,0f));
	outFields->push(HX_("CREDIT",39,50,94,2e));
	outFields->push(HX_("MUSIC",85,08,49,8e));
	outFields->push(HX_("BANNER",ec,95,63,04));
	outFields->push(HX_("BACKGROUND",ee,07,27,18));
	outFields->push(HX_("CDTITLE",37,eb,8b,a0));
	outFields->push(HX_("OFFSET",93,43,c2,12));
	outFields->push(HX_("BPMS",b4,0c,dd,2b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SMHeader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(SMHeader_obj,_header),HX_("_header",2c,1b,77,6b)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,TITLE),HX_("TITLE",78,4d,29,8e)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,SUBTITLE),HX_("SUBTITLE",18,8c,b2,4b)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,ARTIST),HX_("ARTIST",c7,9e,cb,6b)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,GENRE),HX_("GENRE",23,60,4a,0f)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,CREDIT),HX_("CREDIT",39,50,94,2e)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,MUSIC),HX_("MUSIC",85,08,49,8e)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,BANNER),HX_("BANNER",ec,95,63,04)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,BACKGROUND),HX_("BACKGROUND",ee,07,27,18)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,CDTITLE),HX_("CDTITLE",37,eb,8b,a0)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,OFFSET),HX_("OFFSET",93,43,c2,12)},
	{::hx::fsString,(int)offsetof(SMHeader_obj,BPMS),HX_("BPMS",b4,0c,dd,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SMHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String SMHeader_obj_sMemberFields[] = {
	HX_("_header",2c,1b,77,6b),
	HX_("TITLE",78,4d,29,8e),
	HX_("SUBTITLE",18,8c,b2,4b),
	HX_("ARTIST",c7,9e,cb,6b),
	HX_("GENRE",23,60,4a,0f),
	HX_("CREDIT",39,50,94,2e),
	HX_("MUSIC",85,08,49,8e),
	HX_("BANNER",ec,95,63,04),
	HX_("BACKGROUND",ee,07,27,18),
	HX_("CDTITLE",37,eb,8b,a0),
	HX_("OFFSET",93,43,c2,12),
	HX_("BPMS",b4,0c,dd,2b),
	HX_("readHeaderLine",17,af,80,e7),
	::String(null()) };

::hx::Class SMHeader_obj::__mClass;

void SMHeader_obj::__register()
{
	SMHeader_obj _hx_dummy;
	SMHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("smTools.SMHeader",b4,f8,a9,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SMHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SMHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SMHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SMHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace smTools
