#include <hxcpp.h>

#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_NGio
#include <NGio.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_io_newgrounds_NG
#include <io/newgrounds/NG.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_Object
#include <io/newgrounds/objects/Object.h>
#endif
#ifndef INCLUDED_io_newgrounds_objects_ScoreBoard
#include <io/newgrounds/objects/ScoreBoard.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_18_saveScore,"Highscore","saveScore",0xbac27177,"Highscore.saveScore","Highscore.hx",18,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_39_saveCombo,"Highscore","saveCombo",0x8c462673,"Highscore.saveCombo","Highscore.hx",39,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_56_saveWeekScore,"Highscore","saveWeekScore",0x4660a363,"Highscore.saveWeekScore","Highscore.hx",56,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_80_setScore,"Highscore","setScore",0x2adf0fee,"Highscore.setScore","Highscore.hx",80,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_88_setCombo,"Highscore","setCombo",0xfc62c4ea,"Highscore.setCombo","Highscore.hx",88,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_96_formatSong,"Highscore","formatSong",0x2cf91dca,"Highscore.formatSong","Highscore.hx",96,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_109_getComboInt,"Highscore","getComboInt",0x8b266719,"Highscore.getComboInt","Highscore.hx",109,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_125_getScore,"Highscore","getScore",0x7c81b67a,"Highscore.getScore","Highscore.hx",125,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_133_getCombo,"Highscore","getCombo",0x4e056b76,"Highscore.getCombo","Highscore.hx",133,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_141_getWeekScore,"Highscore","getWeekScore",0xb3da25e6,"Highscore.getWeekScore","Highscore.hx",141,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_149_load,"Highscore","load",0x978326c4,"Highscore.load","Highscore.hx",149,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_9_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",9,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_10_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",10,0x77c0e42e)

void Highscore_obj::__construct() { }

Dynamic Highscore_obj::__CreateEmpty() { return new Highscore_obj; }

void *Highscore_obj::_hx_vtable = 0;

Dynamic Highscore_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Highscore_obj > _hx_result = new Highscore_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Highscore_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55f38dd0;
}

 ::haxe::ds::StringMap Highscore_obj::songScores;

 ::haxe::ds::StringMap Highscore_obj::songCombos;

void Highscore_obj::saveScore(::String song,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_18_saveScore)
HXLINE(  19)		::String daSong = ::Highscore_obj::formatSong(song,( (int)(diff) ));
HXLINE(  23)		if (::NGio_obj::isLoggedIn) {
HXLINE(  23)			 ::Dynamic id = ::io::newgrounds::NG_obj::core->scoreBoards->keys();
HXDLIN(  23)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  23)				int id1 = ( (int)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  23)				 ::io::newgrounds::objects::ScoreBoard board = ( ( ::io::newgrounds::objects::ScoreBoard)(::io::newgrounds::NG_obj::core->scoreBoards->get(id1)) );
HXDLIN(  23)				if (::hx::IsEq( song,board->_data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE(  23)					board->postScore(score,HX_("Uhh meow?",f4,6d,8e,fc));
            				}
            			}
            		}
HXLINE(  26)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  28)			if (::Highscore_obj::songScores->exists(daSong)) {
HXLINE(  30)				if (::hx::IsLess( ::Highscore_obj::songScores->get(daSong),score )) {
HXLINE(  31)					::Highscore_obj::setScore(daSong,score);
            				}
            			}
            			else {
HXLINE(  34)				::Highscore_obj::setScore(daSong,score);
            			}
            		}
            		else {
HXLINE(  35)			::haxe::Log_obj::trace(HX_("BotPlay detected. Score saving is disabled.",db,9d,e0,2d),::hx::SourceInfo(HX_("source/Highscore.hx",22,91,de,7c),35,HX_("Highscore",90,18,b0,92),HX_("saveScore",d5,7a,86,07)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveScore,(void))

void Highscore_obj::saveCombo(::String song,::String combo, ::Dynamic __o_diff){
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_39_saveCombo)
HXLINE(  40)		::String daSong = ::Highscore_obj::formatSong(song,( (int)(diff) ));
HXLINE(  41)		::String finalCombo = ::StringTools_obj::replace(combo.split(HX_(")",29,00,00,00))->__get(0),HX_("(",28,00,00,00),HX_("",00,00,00,00));
HXLINE(  43)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  45)			if (::Highscore_obj::songCombos->exists(daSong)) {
HXLINE(  47)				int _hx_tmp = ::Highscore_obj::getComboInt(::Highscore_obj::songCombos->get_string(daSong));
HXDLIN(  47)				if ((_hx_tmp < ::Highscore_obj::getComboInt(finalCombo))) {
HXLINE(  48)					::Highscore_obj::setCombo(daSong,finalCombo);
            				}
            			}
            			else {
HXLINE(  51)				::Highscore_obj::setCombo(daSong,finalCombo);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveCombo,(void))

void Highscore_obj::saveWeekScore(::hx::Null< int >  __o_week,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int week = __o_week.Default(1);
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_56_saveWeekScore)
HXLINE(  59)		{
HXLINE(  59)			::String song = (HX_("Week ",8c,05,ec,5a) + week);
HXDLIN(  59)			if (::NGio_obj::isLoggedIn) {
HXLINE(  59)				 ::Dynamic id = ::io::newgrounds::NG_obj::core->scoreBoards->keys();
HXDLIN(  59)				while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  59)					int id1 = ( (int)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  59)					 ::io::newgrounds::objects::ScoreBoard board = ( ( ::io::newgrounds::objects::ScoreBoard)(::io::newgrounds::NG_obj::core->scoreBoards->get(id1)) );
HXDLIN(  59)					if (::hx::IsEq( song,board->_data->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic) )) {
HXLINE(  59)						board->postScore(score,HX_("Uhh meow?",f4,6d,8e,fc));
            					}
            				}
            			}
            		}
HXLINE(  62)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) ))) {
HXLINE(  64)			::String daWeek = ::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),( (int)(diff) ));
HXLINE(  66)			if (::Highscore_obj::songScores->exists(daWeek)) {
HXLINE(  68)				if (::hx::IsLess( ::Highscore_obj::songScores->get(daWeek),score )) {
HXLINE(  69)					::Highscore_obj::setScore(daWeek,score);
            				}
            			}
            			else {
HXLINE(  72)				::Highscore_obj::setScore(daWeek,score);
            			}
            		}
            		else {
HXLINE(  73)			::haxe::Log_obj::trace(HX_("BotPlay detected. Score saving is disabled.",db,9d,e0,2d),::hx::SourceInfo(HX_("source/Highscore.hx",22,91,de,7c),73,HX_("Highscore",90,18,b0,92),HX_("saveWeekScore",c1,b3,07,00)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveWeekScore,(void))

void Highscore_obj::setScore(::String song,int score){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_80_setScore)
HXLINE(  82)		::Highscore_obj::songScores->set(song,score);
HXLINE(  83)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),::Highscore_obj::songScores,::hx::paccDynamic);
HXLINE(  84)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setScore,(void))

void Highscore_obj::setCombo(::String song,::String combo){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_88_setCombo)
HXLINE(  90)		::Highscore_obj::songCombos->set(song,combo);
HXLINE(  91)		::flixel::FlxG_obj::save->data->__SetField(HX_("songCombos",1a,c2,aa,22),::Highscore_obj::songCombos,::hx::paccDynamic);
HXLINE(  92)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setCombo,(void))

::String Highscore_obj::formatSong(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_96_formatSong)
HXLINE(  97)		::String daSong = song;
HXLINE(  99)		if ((diff == 0)) {
HXLINE( 100)			daSong = (daSong + HX_("-easy",af,a6,14,2c));
            		}
            		else {
HXLINE( 101)			if ((diff == 2)) {
HXLINE( 102)				daSong = (daSong + HX_("-hard",98,49,10,2e));
            			}
            		}
HXLINE( 104)		return daSong;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,formatSong,return )

int Highscore_obj::getComboInt(::String combo){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_109_getComboInt)
HXDLIN( 109)		::String _hx_switch_0 = combo;
            		if (  (_hx_switch_0==HX_("FC",3d,3d,00,00)) ){
HXLINE( 114)			return 2;
HXDLIN( 114)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("GFC",44,1d,36,00)) ){
HXLINE( 116)			return 3;
HXDLIN( 116)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("MFC",ca,aa,3a,00)) ){
HXLINE( 118)			return 4;
HXDLIN( 118)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("SDCB",70,89,10,37)) ){
HXLINE( 112)			return 1;
HXDLIN( 112)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 120)			return 0;
            		}
            		_hx_goto_8:;
HXLINE( 109)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Highscore_obj,getComboInt,return )

int Highscore_obj::getScore(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_125_getScore)
HXLINE( 126)		::Dynamic this1 = ::Highscore_obj::songScores;
HXDLIN( 126)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong(song,diff)))) {
HXLINE( 127)			::Highscore_obj::setScore(::Highscore_obj::formatSong(song,diff),0);
            		}
HXLINE( 129)		::Dynamic this2 = ::Highscore_obj::songScores;
HXDLIN( 129)		return ( ( ::haxe::ds::StringMap)(this2) )->get_int(::Highscore_obj::formatSong(song,diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getScore,return )

::String Highscore_obj::getCombo(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_133_getCombo)
HXLINE( 134)		::Dynamic this1 = ::Highscore_obj::songCombos;
HXDLIN( 134)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong(song,diff)))) {
HXLINE( 135)			::Highscore_obj::setCombo(::Highscore_obj::formatSong(song,diff),HX_("",00,00,00,00));
            		}
HXLINE( 137)		::Dynamic this2 = ::Highscore_obj::songCombos;
HXDLIN( 137)		return ( ( ::haxe::ds::StringMap)(this2) )->get_string(::Highscore_obj::formatSong(song,diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getCombo,return )

int Highscore_obj::getWeekScore(int week,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_141_getWeekScore)
HXLINE( 142)		::Dynamic this1 = ::Highscore_obj::songScores;
HXDLIN( 142)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff)))) {
HXLINE( 143)			::Highscore_obj::setScore(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff),0);
            		}
HXLINE( 145)		::Dynamic this2 = ::Highscore_obj::songScores;
HXDLIN( 145)		return ( ( ::haxe::ds::StringMap)(this2) )->get_int(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getWeekScore,return )

void Highscore_obj::load(){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_149_load)
HXLINE( 150)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic) )) {
HXLINE( 152)			::Highscore_obj::songScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic)) );
            		}
HXLINE( 154)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songCombos",1a,c2,aa,22),::hx::paccDynamic) )) {
HXLINE( 156)			::Highscore_obj::songCombos = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songCombos",1a,c2,aa,22),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Highscore_obj,load,(void))


Highscore_obj::Highscore_obj()
{
}

bool Highscore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScore") ) { outValue = setScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCombo") ) { outValue = setCombo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getScore") ) { outValue = getScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCombo") ) { outValue = getCombo_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveScore") ) { outValue = saveScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveCombo") ) { outValue = saveCombo_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"songScores") ) { outValue = ( songScores ); return true; }
		if (HX_FIELD_EQ(inName,"songCombos") ) { outValue = ( songCombos ); return true; }
		if (HX_FIELD_EQ(inName,"formatSong") ) { outValue = formatSong_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getComboInt") ) { outValue = getComboInt_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWeekScore") ) { outValue = getWeekScore_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"saveWeekScore") ) { outValue = saveWeekScore_dyn(); return true; }
	}
	return false;
}

bool Highscore_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"songScores") ) { songScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"songCombos") ) { songCombos=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Highscore_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Highscore_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songScores,HX_("songScores",96,1a,f0,a0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songCombos,HX_("songCombos",1a,c2,aa,22)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Highscore_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_MARK_MEMBER_NAME(Highscore_obj::songCombos,"songCombos");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Highscore_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_VISIT_MEMBER_NAME(Highscore_obj::songCombos,"songCombos");
};

#endif

::hx::Class Highscore_obj::__mClass;

static ::String Highscore_obj_sStaticFields[] = {
	HX_("songScores",96,1a,f0,a0),
	HX_("songCombos",1a,c2,aa,22),
	HX_("saveScore",d5,7a,86,07),
	HX_("saveCombo",d1,2f,0a,d9),
	HX_("saveWeekScore",c1,b3,07,00),
	HX_("setScore",50,dc,0d,87),
	HX_("setCombo",4c,91,91,58),
	HX_("formatSong",ac,46,bd,0b),
	HX_("getComboInt",f7,03,06,98),
	HX_("getScore",dc,82,b0,d8),
	HX_("getCombo",d8,37,34,aa),
	HX_("getWeekScore",48,cb,a3,ea),
	HX_("load",26,9a,b7,47),
	::String(null())
};

void Highscore_obj::__register()
{
	Highscore_obj _hx_dummy;
	Highscore_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Highscore",90,18,b0,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Highscore_obj::__GetStatic;
	__mClass->mSetStaticField = &Highscore_obj::__SetStatic;
	__mClass->mMarkFunc = Highscore_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Highscore_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Highscore_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Highscore_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Highscore_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Highscore_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Highscore_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_9_boot)
HXDLIN(   9)		songScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_10_boot)
HXDLIN(  10)		songCombos =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

