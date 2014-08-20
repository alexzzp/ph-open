/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.EntityReference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ENTITYREFERENCE_HPP_DECL
#define J2CPP_ORG_W3C_DOM_ENTITYREFERENCE_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class EntityReference;
	class EntityReference
		: public object<EntityReference>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit EntityReference(jobject jobj)
		: object<EntityReference>(jobj)
		{
		}

		operator local_ref<org::w3c::dom::Node>() const;
		operator local_ref<java::lang::Object>() const;

	}; //class EntityReference

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ENTITYREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ENTITYREFERENCE_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_ENTITYREFERENCE_HPP_IMPL

namespace j2cpp {



org::w3c::dom::EntityReference::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

org::w3c::dom::EntityReference::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(org::w3c::dom::EntityReference,"org/w3c/dom/EntityReference")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ENTITYREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION