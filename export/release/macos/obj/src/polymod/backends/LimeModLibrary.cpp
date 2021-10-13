#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeModLibrary
#include <polymod/backends/LimeModLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83234c3e57483dca_300_new,"polymod.backends.LimeModLibrary","new",0x1dcd2097,"polymod.backends.LimeModLibrary.new","polymod/backends/LimeBackend.hx",300,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_310_destroy,"polymod.backends.LimeModLibrary","destroy",0xabf164b1,"polymod.backends.LimeModLibrary.destroy","polymod/backends/LimeBackend.hx",310,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_318_getAsset,"polymod.backends.LimeModLibrary","getAsset",0x7c7601e3,"polymod.backends.LimeModLibrary.getAsset","polymod/backends/LimeBackend.hx",318,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_333_exists,"polymod.backends.LimeModLibrary","exists",0x99738a05,"polymod.backends.LimeModLibrary.exists","polymod/backends/LimeBackend.hx",333,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_342_getAudioBuffer,"polymod.backends.LimeModLibrary","getAudioBuffer",0xec6c7ea9,"polymod.backends.LimeModLibrary.getAudioBuffer","polymod/backends/LimeBackend.hx",342,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_352_getBytes,"polymod.backends.LimeModLibrary","getBytes",0x13d4a05e,"polymod.backends.LimeModLibrary.getBytes","polymod/backends/LimeBackend.hx",352,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_363_getFont,"polymod.backends.LimeModLibrary","getFont",0x9dae453c,"polymod.backends.LimeModLibrary.getFont","polymod/backends/LimeBackend.hx",363,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_373_getImage,"polymod.backends.LimeModLibrary","getImage",0x13a5b74e,"polymod.backends.LimeModLibrary.getImage","polymod/backends/LimeBackend.hx",373,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_388_getPath,"polymod.backends.LimeModLibrary","getPath",0xa43fcd12,"polymod.backends.LimeModLibrary.getPath","polymod/backends/LimeBackend.hx",388,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_398_getText,"polymod.backends.LimeModLibrary","getText",0xa6e7b41a,"polymod.backends.LimeModLibrary.getText","polymod/backends/LimeBackend.hx",398,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_420_loadBytes,"polymod.backends.LimeModLibrary","loadBytes",0x7b4127dc,"polymod.backends.LimeModLibrary.loadBytes","polymod/backends/LimeBackend.hx",420,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_435_loadFont,"polymod.backends.LimeModLibrary","loadFont",0xaac5b77e,"polymod.backends.LimeModLibrary.loadFont","polymod/backends/LimeBackend.hx",435,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_458_loadImage,"polymod.backends.LimeModLibrary","loadImage",0x7b123ecc,"polymod.backends.LimeModLibrary.loadImage","polymod/backends/LimeBackend.hx",458,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_473_loadAudioBuffer,"polymod.backends.LimeModLibrary","loadAudioBuffer",0xf608b8a7,"polymod.backends.LimeModLibrary.loadAudioBuffer","polymod/backends/LimeBackend.hx",473,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_496_loadText,"polymod.backends.LimeModLibrary","loadText",0xb3ff265c,"polymod.backends.LimeModLibrary.loadText","polymod/backends/LimeBackend.hx",496,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_513_isLocal,"polymod.backends.LimeModLibrary","isLocal",0x9ce1a4d8,"polymod.backends.LimeModLibrary.isLocal","polymod/backends/LimeBackend.hx",513,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_523_list,"polymod.backends.LimeModLibrary","list",0xf45ffc47,"polymod.backends.LimeModLibrary.list","polymod/backends/LimeBackend.hx",523,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_261_LimeToPoly,"polymod.backends.LimeModLibrary","LimeToPoly",0x9363ab25,"polymod.backends.LimeModLibrary.LimeToPoly","polymod/backends/LimeBackend.hx",261,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_277_PolyToLime,"polymod.backends.LimeModLibrary","PolyToLime",0x8a076e65,"polymod.backends.LimeModLibrary.PolyToLime","polymod/backends/LimeBackend.hx",277,0xcff7dfd6)
namespace polymod{
namespace backends{

void LimeModLibrary_obj::__construct( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix){
            		::String pathPrefix = __o_pathPrefix;
            		if (::hx::IsNull(__o_pathPrefix)) pathPrefix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_300_new)
HXLINE( 301)		this->b = backend;
HXLINE( 302)		this->p = this->b->polymodLibrary;
HXLINE( 303)		this->pathPrefix = pathPrefix;
HXLINE( 304)		this->fallback = fallback;
HXLINE( 305)		this->hasFallback = ::hx::IsNotNull( this->fallback );
HXLINE( 306)		super::__construct();
            	}

Dynamic LimeModLibrary_obj::__CreateEmpty() { return new LimeModLibrary_obj; }

void *LimeModLibrary_obj::_hx_vtable = 0;

Dynamic LimeModLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimeModLibrary_obj > _hx_result = new LimeModLibrary_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LimeModLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25654723) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25654723;
	} else {
		return inClassId==(int)0x333eca03;
	}
}

void LimeModLibrary_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_310_destroy)
HXLINE( 311)		this->b = null();
HXLINE( 312)		this->p = null();
HXLINE( 313)		this->fallback = null();
HXLINE( 314)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeModLibrary_obj,destroy,(void))

 ::Dynamic LimeModLibrary_obj::getAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_318_getAsset)
HXLINE( 319)		::String symbol_modId;
HXDLIN( 319)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 319)		::String id1 = id;
HXDLIN( 319)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 319)		::String symbol_fallbackId = id1;
HXDLIN( 319)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 319)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 319)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 319)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 319)		bool _hx_tmp;
HXDLIN( 319)		bool _hx_tmp1;
HXDLIN( 319)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 319)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 319)			_hx_tmp1 = false;
            		}
HXDLIN( 319)		if (_hx_tmp1) {
HXLINE( 319)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 319)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 319)		symbol_modId = symbol_nakedId;
HXLINE( 320)		 ::polymod::backends::PolymodAssetLibrary e = this->p;
HXDLIN( 320)		bool e1 = e->check(symbol_modId,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type));
HXLINE( 321)		if ((type == HX_("TEXT",ad,94,ba,37))) {
HXLINE( 323)			return this->getText(id);
            		}
HXLINE( 325)		bool _hx_tmp2;
HXDLIN( 325)		if (!(e1)) {
HXLINE( 325)			_hx_tmp2 = this->hasFallback;
            		}
            		else {
HXLINE( 325)			_hx_tmp2 = false;
            		}
HXDLIN( 325)		if (_hx_tmp2) {
HXLINE( 327)			return this->fallback->getAsset(id,type);
            		}
HXLINE( 329)		return this->super::getAsset(id,type);
            	}


bool LimeModLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_333_exists)
HXLINE( 334)		::String symbol_modId;
HXDLIN( 334)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 334)		::String id1 = id;
HXDLIN( 334)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 334)		::String symbol_fallbackId = id1;
HXDLIN( 334)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 334)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 334)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 334)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 334)		bool _hx_tmp;
HXDLIN( 334)		bool _hx_tmp1;
HXDLIN( 334)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 334)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 334)			_hx_tmp1 = false;
            		}
HXDLIN( 334)		if (_hx_tmp1) {
HXLINE( 334)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 334)			_hx_tmp = false;
            		}
HXDLIN( 334)		if (_hx_tmp) {
HXLINE( 334)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 334)		symbol_modId = symbol_nakedId;
HXLINE( 335)		 ::polymod::backends::PolymodAssetLibrary e = this->p;
HXDLIN( 335)		bool e1 = e->check(symbol_modId,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type));
HXLINE( 336)		bool _hx_tmp2;
HXDLIN( 336)		if (!(e1)) {
HXLINE( 336)			_hx_tmp2 = this->hasFallback;
            		}
            		else {
HXLINE( 336)			_hx_tmp2 = false;
            		}
HXDLIN( 336)		if (_hx_tmp2) {
HXLINE( 337)			return this->fallback->exists(id,type);
            		}
HXLINE( 338)		return e1;
            	}


 ::lime::media::AudioBuffer LimeModLibrary_obj::getAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_342_getAudioBuffer)
HXLINE( 343)		::String symbol_modId;
HXDLIN( 343)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 343)		::String id1 = id;
HXDLIN( 343)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 343)		::String symbol_fallbackId = id1;
HXDLIN( 343)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 343)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 343)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 343)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 343)		bool _hx_tmp;
HXDLIN( 343)		bool _hx_tmp1;
HXDLIN( 343)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 343)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 343)			_hx_tmp1 = false;
            		}
HXDLIN( 343)		if (_hx_tmp1) {
HXLINE( 343)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 343)			_hx_tmp = false;
            		}
HXDLIN( 343)		if (_hx_tmp) {
HXLINE( 343)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 343)		symbol_modId = symbol_nakedId;
HXLINE( 344)		if (this->p->check(symbol_modId,null())) {
HXLINE( 345)			::String path = this->p->file(symbol_modId,null());
HXDLIN( 345)			 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 345)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 345)				_hx_tmp = null();
            			}
            			else {
HXLINE( 345)				_hx_tmp = ::sys::io::File_obj::getBytes(path);
            			}
HXDLIN( 345)			return ::lime::media::AudioBuffer_obj::fromBytes(_hx_tmp);
            		}
            		else {
HXLINE( 346)			if (this->hasFallback) {
HXLINE( 347)				return this->fallback->getAudioBuffer(id);
            			}
            		}
HXLINE( 348)		return null();
            	}


 ::haxe::io::Bytes LimeModLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_352_getBytes)
HXLINE( 353)		::String symbol_modId;
HXDLIN( 353)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 353)		::String id1 = id;
HXDLIN( 353)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 353)		::String symbol_fallbackId = id1;
HXDLIN( 353)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 353)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 353)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 353)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 353)		bool _hx_tmp;
HXDLIN( 353)		bool _hx_tmp1;
HXDLIN( 353)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 353)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 353)			_hx_tmp1 = false;
            		}
HXDLIN( 353)		if (_hx_tmp1) {
HXLINE( 353)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 353)			_hx_tmp = false;
            		}
HXDLIN( 353)		if (_hx_tmp) {
HXLINE( 353)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 353)		symbol_modId = symbol_nakedId;
HXLINE( 354)		::String file = this->p->file(symbol_modId,null());
HXLINE( 355)		if (this->p->check(symbol_modId,null())) {
HXLINE( 356)			::String path = this->p->file(symbol_modId,null());
HXDLIN( 356)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 356)				return null();
            			}
            			else {
HXLINE( 356)				return ::sys::io::File_obj::getBytes(path);
            			}
            		}
            		else {
HXLINE( 357)			if (this->hasFallback) {
HXLINE( 358)				return this->fallback->getBytes(id);
            			}
            		}
HXLINE( 359)		return null();
            	}


 ::lime::text::Font LimeModLibrary_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_363_getFont)
HXLINE( 364)		::String symbol_modId;
HXDLIN( 364)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 364)		::String id1 = id;
HXDLIN( 364)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 364)		::String symbol_fallbackId = id1;
HXDLIN( 364)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 364)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 364)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 364)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 364)		bool _hx_tmp;
HXDLIN( 364)		bool _hx_tmp1;
HXDLIN( 364)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 364)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 364)			_hx_tmp1 = false;
            		}
HXDLIN( 364)		if (_hx_tmp1) {
HXLINE( 364)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 364)			_hx_tmp = false;
            		}
HXDLIN( 364)		if (_hx_tmp) {
HXLINE( 364)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 364)		symbol_modId = symbol_nakedId;
HXLINE( 365)		if (this->p->check(symbol_modId,null())) {
HXLINE( 366)			::String path = this->p->file(symbol_modId,null());
HXDLIN( 366)			 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 366)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 366)				_hx_tmp = null();
            			}
            			else {
HXLINE( 366)				_hx_tmp = ::sys::io::File_obj::getBytes(path);
            			}
HXDLIN( 366)			return ::lime::text::Font_obj::fromBytes(_hx_tmp);
            		}
            		else {
HXLINE( 367)			if (this->hasFallback) {
HXLINE( 368)				return this->fallback->getFont(id);
            			}
            		}
HXLINE( 369)		return null();
            	}


 ::lime::graphics::Image LimeModLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_373_getImage)
HXLINE( 374)		::String symbol_modId;
HXDLIN( 374)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 374)		::String id1 = id;
HXDLIN( 374)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 374)		::String symbol_fallbackId = id1;
HXDLIN( 374)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 374)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 374)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 374)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 374)		bool _hx_tmp;
HXDLIN( 374)		bool _hx_tmp1;
HXDLIN( 374)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 374)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 374)			_hx_tmp1 = false;
            		}
HXDLIN( 374)		if (_hx_tmp1) {
HXLINE( 374)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 374)			_hx_tmp = false;
            		}
HXDLIN( 374)		if (_hx_tmp) {
HXLINE( 374)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 374)		symbol_modId = symbol_nakedId;
HXLINE( 375)		if (this->p->check(symbol_modId,null())) {
HXLINE( 376)			if (this->p->check(symbol_modId,null())) {
HXLINE( 377)				if ((id.indexOf(HX_("newgrounds",ac,0f,a7,f6),null()) != -1)) {
HXLINE( 378)					::String path = this->p->file(symbol_modId,null());
HXDLIN( 378)					 ::haxe::io::Bytes bytes;
HXDLIN( 378)					if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 378)						bytes = null();
            					}
            					else {
HXLINE( 378)						bytes = ::sys::io::File_obj::getBytes(path);
            					}
            				}
HXLINE( 380)				::String path = this->p->file(symbol_modId,null());
HXDLIN( 380)				 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 380)				if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 380)					_hx_tmp = null();
            				}
            				else {
HXLINE( 380)					_hx_tmp = ::sys::io::File_obj::getBytes(path);
            				}
HXDLIN( 380)				return ::lime::graphics::Image_obj::fromBytes(_hx_tmp);
            			}
            			else {
HXLINE( 382)				if (this->hasFallback) {
HXLINE( 383)					return this->fallback->getImage(id);
            				}
            			}
            		}
HXLINE( 384)		return null();
            	}


::String LimeModLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_388_getPath)
HXLINE( 389)		::String symbol_modId;
HXDLIN( 389)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 389)		::String id1 = id;
HXDLIN( 389)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 389)		::String symbol_fallbackId = id1;
HXDLIN( 389)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 389)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 389)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 389)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 389)		bool _hx_tmp;
HXDLIN( 389)		bool _hx_tmp1;
HXDLIN( 389)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 389)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 389)			_hx_tmp1 = false;
            		}
HXDLIN( 389)		if (_hx_tmp1) {
HXLINE( 389)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 389)			_hx_tmp = false;
            		}
HXDLIN( 389)		if (_hx_tmp) {
HXLINE( 389)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 389)		symbol_modId = symbol_nakedId;
HXLINE( 390)		if (this->p->check(symbol_modId,null())) {
HXLINE( 391)			return this->p->file(symbol_modId,null());
            		}
            		else {
HXLINE( 392)			if (this->hasFallback) {
HXLINE( 393)				return this->fallback->getPath(id);
            			}
            		}
HXLINE( 394)		return null();
            	}


::String LimeModLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_398_getText)
HXLINE( 399)		::String symbol_modId;
HXDLIN( 399)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 399)		::String id1 = id;
HXDLIN( 399)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 399)		::String symbol_fallbackId = id1;
HXDLIN( 399)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 399)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 399)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 399)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 399)		bool _hx_tmp;
HXDLIN( 399)		bool _hx_tmp1;
HXDLIN( 399)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 399)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 399)			_hx_tmp1 = false;
            		}
HXDLIN( 399)		if (_hx_tmp1) {
HXLINE( 399)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 399)			_hx_tmp = false;
            		}
HXDLIN( 399)		if (_hx_tmp) {
HXLINE( 399)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 399)		symbol_modId = symbol_nakedId;
HXLINE( 400)		::String modText = null();
HXLINE( 401)		if (this->p->check(symbol_modId,null())) {
HXLINE( 403)			modText = this->super::getText(symbol_modId);
            		}
            		else {
HXLINE( 405)			if (this->hasFallback) {
HXLINE( 407)				modText = this->fallback->getText(id);
            			}
            		}
HXLINE( 410)		if (::hx::IsNotNull( modText )) {
HXLINE( 413)			modText = this->p->mergeAndAppendText(id,modText);
            		}
HXLINE( 416)		return modText;
            	}


 ::lime::app::Future LimeModLibrary_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_420_loadBytes)
HXLINE( 421)		::String symbol_modId;
HXDLIN( 421)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 421)		::String id1 = id;
HXDLIN( 421)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 421)		::String symbol_fallbackId = id1;
HXDLIN( 421)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 421)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 421)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 421)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 421)		bool _hx_tmp;
HXDLIN( 421)		bool _hx_tmp1;
HXDLIN( 421)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 421)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 421)			_hx_tmp1 = false;
            		}
HXDLIN( 421)		if (_hx_tmp1) {
HXLINE( 421)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 421)			_hx_tmp = false;
            		}
HXDLIN( 421)		if (_hx_tmp) {
HXLINE( 421)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 421)		symbol_modId = symbol_nakedId;
HXLINE( 423)		if (this->p->check(symbol_modId,null())) {
HXLINE( 425)			return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 427)			if (this->hasFallback) {
HXLINE( 429)				return this->fallback->loadBytes(id);
            			}
            		}
HXLINE( 431)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_435_loadFont)
HXLINE( 436)		::String symbol_modId;
HXDLIN( 436)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 436)		::String id1 = id;
HXDLIN( 436)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 436)		::String symbol_fallbackId = id1;
HXDLIN( 436)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 436)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 436)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 436)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 436)		bool _hx_tmp;
HXDLIN( 436)		bool _hx_tmp1;
HXDLIN( 436)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 436)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 436)			_hx_tmp1 = false;
            		}
HXDLIN( 436)		if (_hx_tmp1) {
HXLINE( 436)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 436)			_hx_tmp = false;
            		}
HXDLIN( 436)		if (_hx_tmp) {
HXLINE( 436)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 436)		symbol_modId = symbol_nakedId;
HXLINE( 438)		if (this->p->check(symbol_modId,null())) {
HXLINE( 443)			::Dynamic this1 = this->paths;
HXDLIN( 443)			return ::lime::text::Font_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 446)			if (this->hasFallback) {
HXLINE( 448)				return this->fallback->loadFont(id);
            			}
            		}
HXLINE( 453)		return ::lime::text::Font_obj::loadFromFile(this->paths->get_string(HX_("",00,00,00,00)));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_458_loadImage)
HXLINE( 459)		::String symbol_modId;
HXDLIN( 459)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 459)		::String id1 = id;
HXDLIN( 459)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 459)		::String symbol_fallbackId = id1;
HXDLIN( 459)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 459)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 459)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 459)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 459)		bool _hx_tmp;
HXDLIN( 459)		bool _hx_tmp1;
HXDLIN( 459)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 459)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 459)			_hx_tmp1 = false;
            		}
HXDLIN( 459)		if (_hx_tmp1) {
HXLINE( 459)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 459)			_hx_tmp = false;
            		}
HXDLIN( 459)		if (_hx_tmp) {
HXLINE( 459)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 459)		symbol_modId = symbol_nakedId;
HXLINE( 461)		if (this->p->check(symbol_modId,null())) {
HXLINE( 463)			return ::lime::graphics::Image_obj::loadFromFile(this->p->file(symbol_modId,null()));
            		}
            		else {
HXLINE( 465)			if (this->hasFallback) {
HXLINE( 467)				return this->fallback->loadImage(id);
            			}
            		}
HXLINE( 469)		return ::lime::graphics::Image_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_473_loadAudioBuffer)
HXLINE( 474)		::String symbol_modId;
HXDLIN( 474)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 474)		::String id1 = id;
HXDLIN( 474)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 474)		::String symbol_fallbackId = id1;
HXDLIN( 474)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 474)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 474)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 474)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 474)		bool _hx_tmp;
HXDLIN( 474)		bool _hx_tmp1;
HXDLIN( 474)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 474)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 474)			_hx_tmp1 = false;
            		}
HXDLIN( 474)		if (_hx_tmp1) {
HXLINE( 474)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 474)			_hx_tmp = false;
            		}
HXDLIN( 474)		if (_hx_tmp) {
HXLINE( 474)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 474)		symbol_modId = symbol_nakedId;
HXLINE( 476)		if (this->p->check(symbol_modId,null())) {
HXLINE( 479)			::Dynamic this1 = this->pathGroups;
HXDLIN( 479)			if (( ( ::haxe::ds::StringMap)(this1) )->exists(this->p->file(symbol_modId,null()))) {
HXLINE( 481)				::Dynamic this1 = this->pathGroups;
HXDLIN( 481)				return ::lime::media::AudioBuffer_obj::loadFromFiles(( (::Array< ::String >)(( ( ::haxe::ds::StringMap)(this1) )->get(this->p->file(symbol_modId,null()))) ));
            			}
            			else {
HXLINE( 485)				::Dynamic this1 = this->paths;
HXDLIN( 485)				return ::lime::media::AudioBuffer_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            			}
            		}
            		else {
HXLINE( 488)			if (this->hasFallback) {
HXLINE( 490)				return this->fallback->loadAudioBuffer(id);
            			}
            		}
HXLINE( 492)		return ::lime::media::AudioBuffer_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadText(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_83234c3e57483dca_496_loadText)
HXLINE( 497)		::String symbol_modId;
HXDLIN( 497)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 497)		::String id1 = id;
HXDLIN( 497)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 497)		::String symbol_fallbackId = id1;
HXDLIN( 497)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 497)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 497)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 497)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 497)		bool _hx_tmp;
HXDLIN( 497)		bool _hx_tmp1;
HXDLIN( 497)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 497)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 497)			_hx_tmp1 = false;
            		}
HXDLIN( 497)		if (_hx_tmp1) {
HXLINE( 497)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 497)			_hx_tmp = false;
            		}
HXDLIN( 497)		if (_hx_tmp) {
HXLINE( 497)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 497)		symbol_modId = symbol_nakedId;
HXLINE( 499)		if (this->p->check(symbol_modId,null())) {
HXLINE( 501)			 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 502)			::Dynamic this1 = this->paths;
HXDLIN( 502)			return request->load(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(symbol_modId,null())));
            		}
            		else {
HXLINE( 504)			if (this->hasFallback) {
HXLINE( 506)				return this->fallback->loadText(id);
            			}
            		}
HXLINE( 508)		 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 509)		return request->load(HX_("",00,00,00,00));
            	}


bool LimeModLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_513_isLocal)
HXLINE( 514)		::String symbol_modId;
HXDLIN( 514)		 ::polymod::backends::LimeModLibrary symbol_library;
HXDLIN( 514)		::String id1 = id;
HXDLIN( 514)		 ::haxe::ds::StringMap libs = null();
HXDLIN( 514)		::String symbol_fallbackId = id1;
HXDLIN( 514)		int colonIndex = id1.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 514)		::String symbol_lib = id1.substring(0,colonIndex);
HXDLIN( 514)		::String symbol_nakedId = id1.substring((colonIndex + 1),null());
HXDLIN( 514)		symbol_library = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 514)		bool _hx_tmp;
HXDLIN( 514)		bool _hx_tmp1;
HXDLIN( 514)		if (::hx::IsNotNull( symbol_library )) {
HXLINE( 514)			_hx_tmp1 = ::hx::IsNotNull( symbol_library->pathPrefix );
            		}
            		else {
HXLINE( 514)			_hx_tmp1 = false;
            		}
HXDLIN( 514)		if (_hx_tmp1) {
HXLINE( 514)			_hx_tmp = (symbol_library->pathPrefix != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 514)			_hx_tmp = false;
            		}
HXDLIN( 514)		if (_hx_tmp) {
HXLINE( 514)			symbol_modId = ((symbol_library->pathPrefix + HX_("/",2f,00,00,00)) + symbol_nakedId);
            		}
HXDLIN( 514)		symbol_modId = symbol_nakedId;
HXLINE( 515)		if (this->p->check(symbol_modId,null())) {
HXLINE( 516)			return true;
            		}
            		else {
HXLINE( 517)			if (this->hasFallback) {
HXLINE( 518)				return this->fallback->isLocal(id,type);
            			}
            		}
HXLINE( 519)		return false;
            	}


::Array< ::String > LimeModLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_523_list)
HXLINE( 524)		::Array< ::String > otherList;
HXDLIN( 524)		if (this->hasFallback) {
HXLINE( 524)			otherList = this->fallback->list(type);
            		}
            		else {
HXLINE( 524)			otherList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 526)		::String requestedType;
HXDLIN( 526)		if (::hx::IsNotNull( type )) {
HXLINE( 526)			requestedType = type;
            		}
            		else {
HXLINE( 526)			requestedType = null();
            		}
HXLINE( 527)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 529)		{
HXLINE( 529)			 ::Dynamic id = this->p->type->keys();
HXDLIN( 529)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 529)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 531)				bool _hx_tmp;
HXDLIN( 531)				if ((id1.indexOf(HX_("_append",79,f3,4a,fe),null()) != 0)) {
HXLINE( 531)					_hx_tmp = (id1.indexOf(HX_("_merge",f9,e9,ad,01),null()) == 0);
            				}
            				else {
HXLINE( 531)					_hx_tmp = true;
            				}
HXDLIN( 531)				if (_hx_tmp) {
HXLINE( 531)					continue;
            				}
HXLINE( 532)				bool _hx_tmp1;
HXDLIN( 532)				if (::hx::IsNotNull( requestedType )) {
HXLINE( 532)					_hx_tmp1 = this->exists(id1,requestedType);
            				}
            				else {
HXLINE( 532)					_hx_tmp1 = true;
            				}
HXDLIN( 532)				if (_hx_tmp1) {
HXLINE( 534)					items->push(id1);
            				}
            			}
            		}
HXLINE( 538)		{
HXLINE( 538)			int _g = 0;
HXDLIN( 538)			while((_g < otherList->length)){
HXLINE( 538)				::String otherId = otherList->__get(_g);
HXDLIN( 538)				_g = (_g + 1);
HXLINE( 540)				if ((items->indexOf(otherId,null()) == -1)) {
HXLINE( 542)					bool _hx_tmp;
HXDLIN( 542)					if (::hx::IsNotNull( requestedType )) {
HXLINE( 542)						_hx_tmp = this->fallback->exists(otherId,type);
            					}
            					else {
HXLINE( 542)						_hx_tmp = true;
            					}
HXDLIN( 542)					if (_hx_tmp) {
HXLINE( 544)						items->push(otherId);
            					}
            				}
            			}
            		}
HXLINE( 549)		return items;
            	}


::String LimeModLibrary_obj::LimeToPoly(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_261_LimeToPoly)
HXDLIN( 261)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
HXLINE( 263)			return HX_("BYTES",4b,40,86,3b);
HXDLIN( 263)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 264)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 264)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 265)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 265)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 268)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 268)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ){
HXLINE( 266)			return HX_("AUDIO_MUSIC",fc,6c,05,48);
HXDLIN( 266)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 267)			return HX_("AUDIO_SOUND",26,29,77,b8);
HXDLIN( 267)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 269)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 269)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 270)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 270)			goto _hx_goto_19;
            		}
            		/* default */{
HXLINE( 271)			return HX_("UNKNOWN",6a,f7,4e,61);
            		}
            		_hx_goto_19:;
HXLINE( 261)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,LimeToPoly,return )

::String LimeModLibrary_obj::PolyToLime(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_277_PolyToLime)
HXDLIN( 277)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("AUDIO_GENERIC",2e,f6,26,23)) ){
HXLINE( 284)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 284)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_MUSIC",fc,6c,05,48)) ){
HXLINE( 282)			return HX_("MUSIC",85,08,49,8e);
HXDLIN( 282)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_SOUND",26,29,77,b8)) ){
HXLINE( 283)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 283)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("BYTES",4b,40,86,3b)) ){
HXLINE( 279)			return HX_("BINARY",01,68,8e,9f);
HXDLIN( 279)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 280)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 280)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 281)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 281)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 285)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 285)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 286)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 286)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 287)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 287)			goto _hx_goto_21;
            		}
            		/* default */{
HXLINE( 288)			return HX_("BINARY",01,68,8e,9f);
            		}
            		_hx_goto_21:;
HXLINE( 277)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,PolyToLime,return )


::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__new( ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix) {
	::hx::ObjectPtr< LimeModLibrary_obj > __this = new LimeModLibrary_obj();
	__this->__construct(backend,fallback,__o_pathPrefix);
	return __this;
}

::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__alloc(::hx::Ctx *_hx_ctx, ::polymod::backends::LimeBackend backend, ::lime::utils::AssetLibrary fallback,::String __o_pathPrefix) {
	LimeModLibrary_obj *__this = (LimeModLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimeModLibrary_obj), true, "polymod.backends.LimeModLibrary"));
	*(void **)__this = LimeModLibrary_obj::_hx_vtable;
	__this->__construct(backend,fallback,__o_pathPrefix);
	return __this;
}

LimeModLibrary_obj::LimeModLibrary_obj()
{
}

void LimeModLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimeModLibrary);
	HX_MARK_MEMBER_NAME(pathPrefix,"pathPrefix");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(fallback,"fallback");
	HX_MARK_MEMBER_NAME(hasFallback,"hasFallback");
	HX_MARK_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LimeModLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pathPrefix,"pathPrefix");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(fallback,"fallback");
	HX_VISIT_MEMBER_NAME(hasFallback,"hasFallback");
	HX_VISIT_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LimeModLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { return ::hx::Val( fallback ); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return ::hx::Val( getAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return ::hx::Val( loadFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return ::hx::Val( loadBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathPrefix") ) { return ::hx::Val( pathPrefix ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { return ::hx::Val( hasFallback ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return ::hx::Val( getAudioBuffer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return ::hx::Val( loadAudioBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LimeModLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"LimeToPoly") ) { outValue = LimeToPoly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"PolyToLime") ) { outValue = PolyToLime_dyn(); return true; }
	}
	return false;
}

::hx::Val LimeModLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::polymod::backends::LimeBackend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { fallback=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathPrefix") ) { pathPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { hasFallback=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LimeModLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pathPrefix",17,7d,ec,c0));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("p",70,00,00,00));
	outFields->push(HX_("fallback",22,f0,9d,2a));
	outFields->push(HX_("hasFallback",9c,d5,54,fd));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimeModLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(LimeModLibrary_obj,pathPrefix),HX_("pathPrefix",17,7d,ec,c0)},
	{::hx::fsObject /*  ::polymod::backends::LimeBackend */ ,(int)offsetof(LimeModLibrary_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,p),HX_("p",70,00,00,00)},
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,fallback),HX_("fallback",22,f0,9d,2a)},
	{::hx::fsBool,(int)offsetof(LimeModLibrary_obj,hasFallback),HX_("hasFallback",9c,d5,54,fd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LimeModLibrary_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LimeModLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String LimeModLibrary_obj_sMemberFields[] = {
	HX_("pathPrefix",17,7d,ec,c0),
	HX_("b",62,00,00,00),
	HX_("p",70,00,00,00),
	HX_("fallback",22,f0,9d,2a),
	HX_("hasFallback",9c,d5,54,fd),
	HX_("type",ba,f2,08,4d),
	HX_("destroy",fa,2c,86,24),
	HX_("getAsset",7a,79,10,86),
	HX_("exists",dc,1d,e0,bf),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadText",f3,9d,99,bd),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	::String(null()) };

::hx::Class LimeModLibrary_obj::__mClass;

static ::String LimeModLibrary_obj_sStaticFields[] = {
	HX_("LimeToPoly",7c,76,3c,12),
	HX_("PolyToLime",bc,39,e0,08),
	::String(null())
};

void LimeModLibrary_obj::__register()
{
	LimeModLibrary_obj _hx_dummy;
	LimeModLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.LimeModLibrary",25,89,45,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LimeModLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimeModLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimeModLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimeModLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
