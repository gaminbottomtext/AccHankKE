#ifndef INCLUDED_Optimization
#define INCLUDED_Optimization

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Optimization)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES Optimization_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef Optimization_obj OBJ_;
		Optimization_obj();

	public:
		enum { _hx_ClassId = 0x29121039 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Optimization")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Optimization"); }
		static ::hx::ObjectPtr< Optimization_obj > __new(::String desc);
		static ::hx::ObjectPtr< Optimization_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Optimization_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Optimization",4d,87,51,a9); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_Optimization */ 
