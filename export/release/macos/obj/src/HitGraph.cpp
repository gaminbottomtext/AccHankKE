#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Ana
#include <Ana.h>
#endif
#ifndef INCLUDED_Analysis
#include <Analysis.h>
#endif
#ifndef INCLUDED_HitGraph
#include <HitGraph.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Replay
#include <Replay.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_19_new,"HitGraph","new",0xfe3c728d,"HitGraph.new","HitGraph.hx",19,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_83_drawAxes,"HitGraph","drawAxes",0xbc7e1dfc,"HitGraph.drawAxes","HitGraph.hx",83,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_125_drawJudgementLine,"HitGraph","drawJudgementLine",0x9ac87792,"HitGraph.drawJudgementLine","HitGraph.hx",125,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_154_drawGraph,"HitGraph","drawGraph",0xa2494697,"HitGraph.drawGraph","HitGraph.hx",154,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_253_fitX,"HitGraph","fitX",0x71611a9a,"HitGraph.fitX","HitGraph.hx",253,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_258_addToHistory,"HitGraph","addToHistory",0x8539beeb,"HitGraph.addToHistory","HitGraph.hx",258,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_263_update,"HitGraph","update",0x5c6cbdfc,"HitGraph.update","HitGraph.hx",263,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_267_average,"HitGraph","average",0x47c52e0a,"HitGraph.average","HitGraph.hx",267,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_275_destroy,"HitGraph","destroy",0x096fe9a7,"HitGraph.destroy","HitGraph.hx",275,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_103_createTextField,"HitGraph","createTextField",0x869f8fde,"HitGraph.createTextField","HitGraph.hx",103,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_107_initTextField,"HitGraph","initTextField",0xeb60e40a,"HitGraph.initTextField","HitGraph.hx",107,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_21_boot,"HitGraph","boot",0x6ec0c965,"HitGraph.boot","HitGraph.hx",21,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_22_boot,"HitGraph","boot",0x6ec0c965,"HitGraph.boot","HitGraph.hx",22,0x9e69dd83)
HX_LOCAL_STACK_FRAME(_hx_pos_dfe8d92fa5dee8a4_23_boot,"HitGraph","boot",0x6ec0c965,"HitGraph.boot","HitGraph.hx",23,0x9e69dd83)

void HitGraph_obj::__construct(int X,int Y,int Width,int Height){
            	HX_GC_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_19_new)
HXLINE(  37)		this->history = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  33)		this->showInput = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("inputShow",27,92,7d,13),::hx::paccDynamic)) );
HXLINE(  31)		this->maxValue = ( (Float)((::Math_obj::floor(((( (Float)(::PlayState_obj::rep->replay->__Field(HX_("sf",93,64,00,00),::hx::paccDynamic)) ) / ( (Float)(60) )) * ( (Float)(1000) ))) + 95)) );
HXLINE(  30)		this->minValue = ( (Float)(-((::Math_obj::floor(((( (Float)(::PlayState_obj::rep->replay->__Field(HX_("sf",93,64,00,00),::hx::paccDynamic)) ) / ( (Float)(60) )) * ( (Float)(1000) ))) + 95))) );
HXLINE(  50)		super::__construct();
HXLINE(  51)		this->set_x(( (Float)(X) ));
HXLINE(  52)		this->set_y(( (Float)(Y) ));
HXLINE(  53)		this->_width = Width;
HXLINE(  54)		this->_height = Height;
HXLINE(  56)		 ::openfl::display::BitmapData bm =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,Width,Height,null(),null());
HXLINE(  57)		bm->draw(::hx::ObjectPtr<OBJ_>(this),null(),null(),null(),null(),null());
HXLINE(  58)		this->bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bm,null(),null());
HXLINE(  60)		this->_axis =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  61)		this->_axis->set_x(( (Float)((this->_labelWidth + 10)) ));
HXLINE(  63)		Float ts = (( (Float)(::Math_obj::floor(((( (Float)(::PlayState_obj::rep->replay->__Field(HX_("sf",93,64,00,00),::hx::paccDynamic)) ) / ( (Float)(60) )) * ( (Float)(1000) )))) ) / ( (Float)(166) ));
HXLINE(  65)		 ::openfl::text::TextField early = ::HitGraph_obj::createTextField(10,10,-1,12);
HXLINE(  66)		 ::openfl::text::TextField late = ::HitGraph_obj::createTextField(10,(this->_height - 20),-1,12);
HXLINE(  68)		early->set_text(((HX_("Early (",4b,1b,54,e9) + (( (Float)(-166) ) * ts)) + HX_("ms)",03,1a,53,00)));
HXLINE(  69)		late->set_text(((HX_("Late (",ce,30,f7,89) + (( (Float)(166) ) * ts)) + HX_("ms)",03,1a,53,00)));
HXLINE(  71)		this->addChild(early);
HXLINE(  72)		this->addChild(late);
HXLINE(  74)		this->addChild(this->_axis);
HXLINE(  76)		this->drawAxes();
            	}

Dynamic HitGraph_obj::__CreateEmpty() { return new HitGraph_obj; }

void *HitGraph_obj::_hx_vtable = 0;

Dynamic HitGraph_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HitGraph_obj > _hx_result = new HitGraph_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool HitGraph_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e8c1adb) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x0e8c1adb;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void HitGraph_obj::drawAxes(){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_83_drawAxes)
HXLINE(  84)		 ::openfl::display::Graphics gfx = this->_axis->get_graphics();
HXLINE(  85)		gfx->clear();
HXLINE(  86)		gfx->lineStyle(1,16777215,((Float)0.5),null(),null(),null(),null(),null());
HXLINE(  89)		gfx->moveTo(( (Float)(0) ),( (Float)(0) ));
HXLINE(  90)		gfx->lineTo(( (Float)(0) ),( (Float)(this->_height) ));
HXLINE(  93)		gfx->moveTo(( (Float)(0) ),( (Float)(this->_height) ));
HXLINE(  94)		gfx->lineTo(( (Float)(this->_width) ),( (Float)(this->_height) ));
HXLINE(  96)		gfx->moveTo(( (Float)(0) ),(( (Float)(this->_height) ) / ( (Float)(2) )));
HXLINE(  97)		gfx->lineTo(( (Float)(this->_width) ),(( (Float)(this->_height) ) / ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HitGraph_obj,drawAxes,(void))

void HitGraph_obj::drawJudgementLine(Float ms){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_125_drawJudgementLine)
HXLINE( 127)		 ::openfl::display::Graphics gfx = this->get_graphics();
HXLINE( 129)		gfx->lineStyle(1,this->graphColor,((Float)0.3),null(),null(),null(),null(),null());
HXLINE( 131)		Float ts = (( (Float)(::Math_obj::floor(((( (Float)(::PlayState_obj::rep->replay->__Field(HX_("sf",93,64,00,00),::hx::paccDynamic)) ) / ( (Float)(60) )) * ( (Float)(1000) )))) ) / ( (Float)(166) ));
HXLINE( 132)		Float range = ::Math_obj::max((this->maxValue - this->minValue),(this->maxValue * ((Float)0.1)));
HXLINE( 134)		Float value = (((ms * ts) - this->minValue) / range);
HXLINE( 136)		Float pointY = this->_axis->get_y();
HXDLIN( 136)		Float pointY1 = (pointY + (((-(value) * ( (Float)(this->_height) )) - ( (Float)(1) )) + this->_height));
HXLINE( 138)		Float graphX = (this->_axis->get_x() + 1);
HXLINE( 140)		if ((ms == 45)) {
HXLINE( 141)			gfx->moveTo(graphX,(this->_axis->get_y() + pointY1));
            		}
HXLINE( 143)		Float graphX1 = (this->_axis->get_x() + 1);
HXLINE( 145)		gfx->drawRect(graphX1,pointY1,( (Float)(this->_width) ),( (Float)(1) ));
HXLINE( 147)		gfx->lineStyle(1,this->graphColor,1,null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(HitGraph_obj,drawJudgementLine,(void))

void HitGraph_obj::drawGraph(){
            	HX_GC_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_154_drawGraph)
HXLINE( 155)		 ::openfl::display::Graphics gfx = this->get_graphics();
HXLINE( 156)		gfx->clear();
HXLINE( 157)		gfx->lineStyle(1,this->graphColor,1,null(),null(),null(),null(),null());
HXLINE( 159)		gfx->beginFill(65280,null());
HXLINE( 160)		this->drawJudgementLine(( (Float)(45) ));
HXLINE( 161)		gfx->endFill();
HXLINE( 163)		gfx->beginFill(16711680,null());
HXLINE( 164)		this->drawJudgementLine(( (Float)(90) ));
HXLINE( 165)		gfx->endFill();
HXLINE( 167)		gfx->beginFill(9109504,null());
HXLINE( 168)		this->drawJudgementLine(( (Float)(135) ));
HXLINE( 169)		gfx->endFill();
HXLINE( 171)		gfx->beginFill(5767168,null());
HXLINE( 172)		this->drawJudgementLine(( (Float)(166) ));
HXLINE( 173)		gfx->endFill();
HXLINE( 175)		gfx->beginFill(65280,null());
HXLINE( 176)		this->drawJudgementLine(( (Float)(-45) ));
HXLINE( 177)		gfx->endFill();
HXLINE( 179)		gfx->beginFill(16711680,null());
HXLINE( 180)		this->drawJudgementLine(( (Float)(-90) ));
HXLINE( 181)		gfx->endFill();
HXLINE( 183)		gfx->beginFill(9109504,null());
HXLINE( 184)		this->drawJudgementLine(( (Float)(-135) ));
HXLINE( 185)		gfx->endFill();
HXLINE( 187)		gfx->beginFill(5767168,null());
HXLINE( 188)		this->drawJudgementLine(( (Float)(-166) ));
HXLINE( 189)		gfx->endFill();
HXLINE( 191)		Float range = ::Math_obj::max((this->maxValue - this->minValue),(this->maxValue * ((Float)0.1)));
HXLINE( 192)		Float graphX = (this->_axis->get_x() + 1);
HXLINE( 194)		if (this->showInput) {
HXLINE( 196)			int _g = 0;
HXDLIN( 196)			int _g1 = ( ( ::Analysis)(::PlayState_obj::rep->replay->__Field(HX_("ana",d4,fa,49,00),::hx::paccDynamic)) )->anaArray->length;
HXDLIN( 196)			while((_g < _g1)){
HXLINE( 196)				_g = (_g + 1);
HXDLIN( 196)				int i = (_g - 1);
HXLINE( 198)				 ::Ana ana = ( ( ::Analysis)(::PlayState_obj::rep->replay->__Field(HX_("ana",d4,fa,49,00),::hx::paccDynamic)) )->anaArray->__get(i).StaticCast<  ::Ana >();
HXLINE( 200)				Float value = ((( (Float)((ana->key * 25)) ) - this->minValue) / range);
HXLINE( 202)				if (ana->hit) {
HXLINE( 203)					gfx->beginFill(16776960,null());
            				}
            				else {
HXLINE( 205)					gfx->beginFill(12759680,null());
            				}
HXLINE( 207)				if ((ana->hitTime < 0)) {
HXLINE( 208)					continue;
            				}
HXLINE( 210)				Float pointY = (((-(value) * ( (Float)(this->_height) )) - ( (Float)(1) )) + this->_height);
HXLINE( 211)				gfx->drawRect((graphX + this->fitX(ana->hitTime)),pointY,( (Float)(2) ),( (Float)(2) ));
HXLINE( 212)				gfx->endFill();
            			}
            		}
HXLINE( 216)		{
HXLINE( 216)			int _g = 0;
HXDLIN( 216)			int _g1 = this->history->get_length();
HXDLIN( 216)			while((_g < _g1)){
HXLINE( 216)				_g = (_g + 1);
HXDLIN( 216)				int i = (_g - 1);
HXLINE( 218)				Float value = ((( (Float)(this->history->__get(i)->__GetItem(0)) ) - this->minValue) / range);
HXLINE( 219)				::String judge = ( (::String)(this->history->__get(i)->__GetItem(1)) );
HXLINE( 221)				::String _hx_switch_0 = judge;
            				if (  (_hx_switch_0==HX_("bad",c5,b1,4a,00)) ){
HXLINE( 228)					gfx->beginFill(16711680,null());
HXDLIN( 228)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("good",3d,95,69,44)) ){
HXLINE( 226)					gfx->beginFill(65280,null());
HXDLIN( 226)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("miss",fc,52,5c,48)) ){
HXLINE( 232)					gfx->beginFill(5767168,null());
HXDLIN( 232)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("shit",c0,cf,52,4c)) ){
HXLINE( 230)					gfx->beginFill(9109504,null());
HXDLIN( 230)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==HX_("sick",be,8c,53,4c)) ){
HXLINE( 224)					gfx->beginFill(65535,null());
HXDLIN( 224)					goto _hx_goto_5;
            				}
            				/* default */{
HXLINE( 234)					gfx->beginFill(16777215,null());
            				}
            				_hx_goto_5:;
HXLINE( 236)				Float pointY = (((-(value) * ( (Float)(this->_height) )) - ( (Float)(1) )) + this->_height);
HXLINE( 240)				gfx->drawRect(this->fitX(( (Float)(this->history->__get(i)->__GetItem(2)) )),pointY,( (Float)(4) ),( (Float)(4) ));
HXLINE( 242)				gfx->endFill();
            			}
            		}
HXLINE( 246)		 ::openfl::display::BitmapData bm =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->_width,this->_height,null(),null());
HXLINE( 247)		bm->draw(::hx::ObjectPtr<OBJ_>(this),null(),null(),null(),null(),null());
HXLINE( 248)		this->bitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bm,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(HitGraph_obj,drawGraph,(void))

Float HitGraph_obj::fitX(Float x){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_253_fitX)
HXDLIN( 253)		Float _hx_tmp = (x / ::flixel::FlxG_obj::sound->music->_length);
HXDLIN( 253)		return (_hx_tmp * this->get_width());
            	}


HX_DEFINE_DYNAMIC_FUNC1(HitGraph_obj,fitX,return )

void HitGraph_obj::addToHistory(Float diff,::String judge,Float time){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_258_addToHistory)
HXDLIN( 258)		this->history->push(::cpp::VirtualArray_obj::__new(3)->init(0,diff)->init(1,judge)->init(2,time));
            	}


HX_DEFINE_DYNAMIC_FUNC3(HitGraph_obj,addToHistory,(void))

void HitGraph_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_263_update)
HXDLIN( 263)		this->drawGraph();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HitGraph_obj,update,(void))

Float HitGraph_obj::average(){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_267_average)
HXLINE( 268)		Float sum = ( (Float)(0) );
HXLINE( 269)		{
HXLINE( 269)			int _g = 0;
HXDLIN( 269)			::cpp::VirtualArray _g1 = this->history;
HXDLIN( 269)			while((_g < _g1->get_length())){
HXLINE( 269)				 ::Dynamic value = _g1->__get(_g);
HXDLIN( 269)				_g = (_g + 1);
HXLINE( 270)				sum = (sum + value);
            			}
            		}
HXLINE( 271)		return (sum / ( (Float)(this->history->get_length()) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HitGraph_obj,average,return )

void HitGraph_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_275_destroy)
HXLINE( 276)		this->_axis = ( ( ::openfl::display::Shape)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->_axis)) );
HXLINE( 277)		this->history = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(HitGraph_obj,destroy,(void))

int HitGraph_obj::AXIS_COLOR;

Float HitGraph_obj::AXIS_ALPHA;

int HitGraph_obj::HISTORY_MAX;

 ::openfl::text::TextField HitGraph_obj::createTextField(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Size){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Color = __o_Color.Default(-1);
            		int Size = __o_Size.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_103_createTextField)
HXDLIN( 103)		return ( ( ::openfl::text::TextField)(::HitGraph_obj::initTextField( ::openfl::text::TextField_obj::__alloc( HX_CTX ),X,Y,Color,Size)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HitGraph_obj,createTextField,return )

 ::Dynamic HitGraph_obj::initTextField( ::Dynamic tf,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Size){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Color = __o_Color.Default(-1);
            		int Size = __o_Size.Default(12);
            	HX_GC_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_107_initTextField)
HXLINE( 108)		( ( ::openfl::text::TextField)(tf) )->set_x(X);
HXLINE( 109)		( ( ::openfl::text::TextField)(tf) )->set_y(Y);
HXLINE( 110)		( ( ::openfl::text::TextField)(tf) )->set_multiline(false);
HXLINE( 111)		( ( ::openfl::text::TextField)(tf) )->set_wordWrap(false);
HXLINE( 112)		( ( ::openfl::text::TextField)(tf) )->set_embedFonts(true);
HXLINE( 113)		( ( ::openfl::text::TextField)(tf) )->set_selectable(false);
HXLINE( 118)		( ( ::openfl::text::TextField)(tf) )->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("assets/fonts/vcr.ttf",46,38,26,7e),Size,(Color & 16777215),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE( 119)		( ( ::openfl::display::DisplayObject)(tf) )->set_alpha((( (Float)(((Color >> 24) & 255)) ) / ( (Float)(255) )));
HXLINE( 120)		( ( ::openfl::text::TextField)(tf) )->set_autoSize(1);
HXLINE( 121)		return tf;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HitGraph_obj,initTextField,return )


::hx::ObjectPtr< HitGraph_obj > HitGraph_obj::__new(int X,int Y,int Width,int Height) {
	::hx::ObjectPtr< HitGraph_obj > __this = new HitGraph_obj();
	__this->__construct(X,Y,Width,Height);
	return __this;
}

::hx::ObjectPtr< HitGraph_obj > HitGraph_obj::__alloc(::hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height) {
	HitGraph_obj *__this = (HitGraph_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HitGraph_obj), true, "HitGraph"));
	*(void **)__this = HitGraph_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height);
	return __this;
}

HitGraph_obj::HitGraph_obj()
{
}

void HitGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HitGraph);
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(curLabel,"curLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(avgLabel,"avgLabel");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(showInput,"showInput");
	HX_MARK_MEMBER_NAME(graphColor,"graphColor");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_unit,"_unit");
	HX_MARK_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HitGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(curLabel,"curLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(avgLabel,"avgLabel");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(showInput,"showInput");
	HX_VISIT_MEMBER_NAME(graphColor,"graphColor");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_unit,"_unit");
	HX_VISIT_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HitGraph_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fitX") ) { return ::hx::Val( fitX_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return ::hx::Val( _axis ); }
		if (HX_FIELD_EQ(inName,"_unit") ) { return ::hx::Val( _unit ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return ::hx::Val( history ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"average") ) { return ::hx::Val( average_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return ::hx::Val( minLabel ); }
		if (HX_FIELD_EQ(inName,"curLabel") ) { return ::hx::Val( curLabel ); }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return ::hx::Val( maxLabel ); }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { return ::hx::Val( avgLabel ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"drawAxes") ) { return ::hx::Val( drawAxes_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showInput") ) { return ::hx::Val( showInput ); }
		if (HX_FIELD_EQ(inName,"drawGraph") ) { return ::hx::Val( drawGraph_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { return ::hx::Val( graphColor ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { return ::hx::Val( _labelWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addToHistory") ) { return ::hx::Val( addToHistory_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawJudgementLine") ) { return ::hx::Val( drawJudgementLine_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HitGraph_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"initTextField") ) { outValue = initTextField_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true; }
	}
	return false;
}

::hx::Val HitGraph_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast<  ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { curLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { avgLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showInput") ) { showInput=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { graphColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { _labelWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HitGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("minLabel",02,7b,e6,66));
	outFields->push(HX_("curLabel",54,08,5d,b7));
	outFields->push(HX_("maxLabel",b0,60,cc,19));
	outFields->push(HX_("avgLabel",c2,a2,a0,08));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("showInput",cd,29,82,ec));
	outFields->push(HX_("graphColor",35,97,9f,9d));
	outFields->push(HX_("history",54,35,47,64));
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("_axis",80,38,8a,f3));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_unit",63,e6,ba,00));
	outFields->push(HX_("_labelWidth",91,d0,cf,b8));
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HitGraph_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(HitGraph_obj,minLabel),HX_("minLabel",02,7b,e6,66)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(HitGraph_obj,curLabel),HX_("curLabel",54,08,5d,b7)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(HitGraph_obj,maxLabel),HX_("maxLabel",b0,60,cc,19)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(HitGraph_obj,avgLabel),HX_("avgLabel",c2,a2,a0,08)},
	{::hx::fsFloat,(int)offsetof(HitGraph_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsFloat,(int)offsetof(HitGraph_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsBool,(int)offsetof(HitGraph_obj,showInput),HX_("showInput",cd,29,82,ec)},
	{::hx::fsInt,(int)offsetof(HitGraph_obj,graphColor),HX_("graphColor",35,97,9f,9d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(HitGraph_obj,history),HX_("history",54,35,47,64)},
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(int)offsetof(HitGraph_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(HitGraph_obj,_axis),HX_("_axis",80,38,8a,f3)},
	{::hx::fsInt,(int)offsetof(HitGraph_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(HitGraph_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsString,(int)offsetof(HitGraph_obj,_unit),HX_("_unit",63,e6,ba,00)},
	{::hx::fsInt,(int)offsetof(HitGraph_obj,_labelWidth),HX_("_labelWidth",91,d0,cf,b8)},
	{::hx::fsString,(int)offsetof(HitGraph_obj,_label),HX_("_label",35,55,96,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HitGraph_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &HitGraph_obj::AXIS_COLOR,HX_("AXIS_COLOR",e5,83,ee,e4)},
	{::hx::fsFloat,(void *) &HitGraph_obj::AXIS_ALPHA,HX_("AXIS_ALPHA",e0,b9,28,bc)},
	{::hx::fsInt,(void *) &HitGraph_obj::HISTORY_MAX,HX_("HISTORY_MAX",b9,9e,af,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HitGraph_obj_sMemberFields[] = {
	HX_("minLabel",02,7b,e6,66),
	HX_("curLabel",54,08,5d,b7),
	HX_("maxLabel",b0,60,cc,19),
	HX_("avgLabel",c2,a2,a0,08),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("showInput",cd,29,82,ec),
	HX_("graphColor",35,97,9f,9d),
	HX_("history",54,35,47,64),
	HX_("bitmap",ef,0f,0c,f1),
	HX_("_axis",80,38,8a,f3),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_unit",63,e6,ba,00),
	HX_("_labelWidth",91,d0,cf,b8),
	HX_("_label",35,55,96,6b),
	HX_("drawAxes",49,c3,e2,54),
	HX_("drawJudgementLine",a5,40,8d,ab),
	HX_("drawGraph",aa,44,f5,61),
	HX_("fitX",67,d5,bb,43),
	HX_("addToHistory",b8,8e,2f,93),
	HX_("update",09,86,05,87),
	HX_("average",5d,71,db,62),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void HitGraph_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HitGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_MARK_MEMBER_NAME(HitGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_MARK_MEMBER_NAME(HitGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HitGraph_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HitGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_VISIT_MEMBER_NAME(HitGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_VISIT_MEMBER_NAME(HitGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#endif

::hx::Class HitGraph_obj::__mClass;

static ::String HitGraph_obj_sStaticFields[] = {
	HX_("AXIS_COLOR",e5,83,ee,e4),
	HX_("AXIS_ALPHA",e0,b9,28,bc),
	HX_("HISTORY_MAX",b9,9e,af,58),
	HX_("createTextField",31,de,75,3a),
	HX_("initTextField",9d,e7,80,14),
	::String(null())
};

void HitGraph_obj::__register()
{
	HitGraph_obj _hx_dummy;
	HitGraph_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HitGraph",1b,28,fb,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HitGraph_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HitGraph_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HitGraph_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HitGraph_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HitGraph_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HitGraph_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HitGraph_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HitGraph_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HitGraph_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_21_boot)
HXDLIN(  21)		AXIS_COLOR = 16777215;
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_22_boot)
HXDLIN(  22)		AXIS_ALPHA = ((Float)0.5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_dfe8d92fa5dee8a4_23_boot)
HXDLIN(  23)		HISTORY_MAX = 30;
            	}
}

