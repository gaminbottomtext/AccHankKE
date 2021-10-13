#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_smTools_SMFile
#include <smTools/SMFile.h>
#endif
#ifndef INCLUDED_smTools_SMHeader
#include <smTools/SMHeader.h>
#endif
#ifndef INCLUDED_smTools_SMMeasure
#include <smTools/SMMeasure.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_624174a6cc61787a_6_new,"smTools.SMFile","new",0x7287a455,"smTools.SMFile.new","smTools/SMFile.hx",6,0x8084749a)
HX_LOCAL_STACK_FRAME(_hx_pos_624174a6cc61787a_10_loadFile,"smTools.SMFile","loadFile",0xabda53ad,"smTools.SMFile.loadFile","smTools/SMFile.hx",10,0x8084749a)
namespace smTools{

void SMFile_obj::__construct(::Array< ::String > data){
            	HX_GC_STACKFRAME(&_hx_pos_624174a6cc61787a_6_new)
HXLINE(  15)		this->_readTime = ((Float)0);
HXLINE(  22)		this->_fileData = data;
HXLINE(  25)		::String headerData = HX_("",00,00,00,00);
HXLINE(  26)		int inc = 0;
HXLINE(  27)		while((data->__get((inc + 1)).indexOf(HX_("//",20,29,00,00),null()) == -1)){
HXLINE(  29)			headerData = (headerData + (data->__get(inc) + HX_("\n",0a,00,00,00)));
HXLINE(  30)			inc = (inc + 1);
            		}
HXLINE(  34)		this->header =  ::smTools::SMHeader_obj::__alloc( HX_CTX ,headerData.split(HX_("\n",0a,00,00,00)));
HXLINE(  37)		inc = (inc + 3);
HXLINE(  38)		if ((data->__get(inc).indexOf(HX_("dance-double:",af,01,2f,6b),null()) == -1)) {
HXLINE(  39)			return;
            		}
HXLINE(  40)		::haxe::Log_obj::trace(HX_("this is dance double",92,8c,5e,ab),::hx::SourceInfo(HX_("source/smTools/SMFile.hx",26,53,6b,c3),40,HX_("smTools.SMFile",e3,d5,c7,d6),HX_("new",60,d0,53,00)));
HXLINE(  42)		inc = (inc + 4);
HXLINE(  43)		::haxe::Log_obj::trace(data->__get(inc),::hx::SourceInfo(HX_("source/smTools/SMFile.hx",26,53,6b,c3),43,HX_("smTools.SMFile",e3,d5,c7,d6),HX_("new",60,d0,53,00)));
HXLINE(  45)		this->measures = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  47)		while((data->__get((inc + 1)) != HX_(";",3b,00,00,00))){
HXLINE(  49)			::String measure = HX_("",00,00,00,00);
HXLINE(  50)			while((data->__get((inc + 1)) != HX_(",",2c,00,00,00))){
HXLINE(  52)				inc = (inc + 1);
HXLINE(  53)				::String line = data->__get(inc);
HXLINE(  54)				measure = (measure + (line + HX_("\n",0a,00,00,00)));
            			}
HXLINE(  56)			::Array< ::Dynamic> _hx_tmp = this->measures;
HXDLIN(  56)			_hx_tmp->push( ::smTools::SMMeasure_obj::__alloc( HX_CTX ,measure.split(HX_("\n",0a,00,00,00))));
            		}
HXLINE(  58)		::haxe::Log_obj::trace((this->measures->length + HX_(" Measures",95,d3,b0,47)),::hx::SourceInfo(HX_("source/smTools/SMFile.hx",26,53,6b,c3),58,HX_("smTools.SMFile",e3,d5,c7,d6),HX_("new",60,d0,53,00)));
            	}

Dynamic SMFile_obj::__CreateEmpty() { return new SMFile_obj; }

void *SMFile_obj::_hx_vtable = 0;

Dynamic SMFile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SMFile_obj > _hx_result = new SMFile_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SMFile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08d5c773;
}

 ::smTools::SMFile SMFile_obj::loadFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_624174a6cc61787a_10_loadFile)
HXDLIN(  10)		return  ::smTools::SMFile_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent(path).split(HX_("\n",0a,00,00,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SMFile_obj,loadFile,return )


::hx::ObjectPtr< SMFile_obj > SMFile_obj::__new(::Array< ::String > data) {
	::hx::ObjectPtr< SMFile_obj > __this = new SMFile_obj();
	__this->__construct(data);
	return __this;
}

::hx::ObjectPtr< SMFile_obj > SMFile_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::String > data) {
	SMFile_obj *__this = (SMFile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SMFile_obj), true, "smTools.SMFile"));
	*(void **)__this = SMFile_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

SMFile_obj::SMFile_obj()
{
}

void SMFile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SMFile);
	HX_MARK_MEMBER_NAME(_fileData,"_fileData");
	HX_MARK_MEMBER_NAME(_readTime,"_readTime");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(measures,"measures");
	HX_MARK_END_CLASS();
}

void SMFile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fileData,"_fileData");
	HX_VISIT_MEMBER_NAME(_readTime,"_readTime");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(measures,"measures");
}

::hx::Val SMFile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return ::hx::Val( header ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"measures") ) { return ::hx::Val( measures ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fileData") ) { return ::hx::Val( _fileData ); }
		if (HX_FIELD_EQ(inName,"_readTime") ) { return ::hx::Val( _readTime ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SMFile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"loadFile") ) { outValue = loadFile_dyn(); return true; }
	}
	return false;
}

::hx::Val SMFile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast<  ::smTools::SMHeader >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"measures") ) { measures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fileData") ) { _fileData=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_readTime") ) { _readTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SMFile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_fileData",25,36,3d,a3));
	outFields->push(HX_("_readTime",e2,9d,8a,bc));
	outFields->push(HX_("header",8d,09,00,fd));
	outFields->push(HX_("measures",55,f7,d1,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SMFile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(SMFile_obj,_fileData),HX_("_fileData",25,36,3d,a3)},
	{::hx::fsFloat,(int)offsetof(SMFile_obj,_readTime),HX_("_readTime",e2,9d,8a,bc)},
	{::hx::fsObject /*  ::smTools::SMHeader */ ,(int)offsetof(SMFile_obj,header),HX_("header",8d,09,00,fd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(SMFile_obj,measures),HX_("measures",55,f7,d1,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SMFile_obj_sStaticStorageInfo = 0;
#endif

static ::String SMFile_obj_sMemberFields[] = {
	HX_("_fileData",25,36,3d,a3),
	HX_("_readTime",e2,9d,8a,bc),
	HX_("header",8d,09,00,fd),
	HX_("measures",55,f7,d1,0f),
	::String(null()) };

::hx::Class SMFile_obj::__mClass;

static ::String SMFile_obj_sStaticFields[] = {
	HX_("loadFile",c2,9f,5b,b4),
	::String(null())
};

void SMFile_obj::__register()
{
	SMFile_obj _hx_dummy;
	SMFile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("smTools.SMFile",e3,d5,c7,d6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SMFile_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SMFile_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SMFile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SMFile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SMFile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SMFile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace smTools
