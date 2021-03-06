/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGClipPathElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGClipPathElement.h"
#include "SVGElement.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGClipPathElement);

/* Hash table */

static const HashTableValue JSSVGClipPathElementTableValues[13] =
{
    { "clipPathUnits", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementClipPathUnits, (intptr_t)0 },
    { "requiredFeatures", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementRequiredFeatures, (intptr_t)0 },
    { "requiredExtensions", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementRequiredExtensions, (intptr_t)0 },
    { "systemLanguage", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementSystemLanguage, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGClipPathElementXmllang, (intptr_t)setJSSVGClipPathElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGClipPathElementXmlspace, (intptr_t)setJSSVGClipPathElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementStyle, (intptr_t)0 },
    { "transform", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementTransform, (intptr_t)0 },
    { "nearestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementNearestViewportElement, (intptr_t)0 },
    { "farthestViewportElement", DontDelete|ReadOnly, (intptr_t)jsSVGClipPathElementFarthestViewportElement, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGClipPathElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSSVGClipPathElementTableValues, 0 };
#else
    { 34, 31, JSSVGClipPathElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGClipPathElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete|Function, (intptr_t)jsSVGClipPathElementPrototypeFunctionHasExtension, (intptr_t)1 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGClipPathElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { "getBBox", DontDelete|Function, (intptr_t)jsSVGClipPathElementPrototypeFunctionGetBBox, (intptr_t)0 },
    { "getCTM", DontDelete|Function, (intptr_t)jsSVGClipPathElementPrototypeFunctionGetCTM, (intptr_t)0 },
    { "getScreenCTM", DontDelete|Function, (intptr_t)jsSVGClipPathElementPrototypeFunctionGetScreenCTM, (intptr_t)0 },
    { "getTransformToElement", DontDelete|Function, (intptr_t)jsSVGClipPathElementPrototypeFunctionGetTransformToElement, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGClipPathElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 2047, JSSVGClipPathElementPrototypeTableValues, 0 };
#else
    { 17, 15, JSSVGClipPathElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGClipPathElementPrototype::s_info = { "SVGClipPathElementPrototype", 0, &JSSVGClipPathElementPrototypeTable, 0 };

JSObject* JSSVGClipPathElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGClipPathElement>(exec, globalObject);
}

bool JSSVGClipPathElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGClipPathElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGClipPathElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGClipPathElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGClipPathElement::s_info = { "SVGClipPathElement", &JSSVGElement::s_info, &JSSVGClipPathElementTable, 0 };

JSSVGClipPathElement::JSSVGClipPathElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGClipPathElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGClipPathElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGClipPathElementPrototype(JSSVGClipPathElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGClipPathElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGClipPathElement, Base>(exec, &JSSVGClipPathElementTable, this, propertyName, slot);
}

bool JSSVGClipPathElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGClipPathElement, Base>(exec, &JSSVGClipPathElementTable, this, propertyName, descriptor);
}

JSValue jsSVGClipPathElementClipPathUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->clipPathUnitsAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGClipPathElementRequiredFeatures(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredFeatures()), imp);
}

JSValue jsSVGClipPathElementRequiredExtensions(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->requiredExtensions()), imp);
}

JSValue jsSVGClipPathElementSystemLanguage(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->systemLanguage()), imp);
}

JSValue jsSVGClipPathElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return jsString(exec, imp->xmllang());
}

JSValue jsSVGClipPathElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return jsString(exec, imp->xmlspace());
}

JSValue jsSVGClipPathElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGClipPathElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGClipPathElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
}

JSValue jsSVGClipPathElementTransform(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    return toJS(exec, castedThis->globalObject(), obj.get(), imp);
}

JSValue jsSVGClipPathElementNearestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->nearestViewportElement()));
}

JSValue jsSVGClipPathElementFarthestViewportElement(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSSVGClipPathElement* castedThis = static_cast<JSSVGClipPathElement*>(asObject(slot.slotBase()));
    UNUSED_PARAM(exec);
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThis->impl());
    return toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->farthestViewportElement()));
}

void JSSVGClipPathElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGClipPathElement, Base>(exec, propertyName, value, &JSSVGClipPathElementTable, this, slot);
}

void setJSSVGClipPathElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(static_cast<JSSVGClipPathElement*>(thisObject)->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGClipPathElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(static_cast<JSSVGClipPathElement*>(thisObject)->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSC_HOST_CALL jsSVGClipPathElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGClipPathElement::s_info))
        return throwError(exec, TypeError);
    JSSVGClipPathElement* castedThisObj = static_cast<JSSVGClipPathElement*>(asObject(thisValue));
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThisObj->impl());
    const UString& extension = args.at(0).toString(exec);


    JSC::JSValue result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue JSC_HOST_CALL jsSVGClipPathElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGClipPathElement::s_info))
        return throwError(exec, TypeError);
    JSSVGClipPathElement* castedThisObj = static_cast<JSSVGClipPathElement*>(asObject(thisValue));
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue JSC_HOST_CALL jsSVGClipPathElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGClipPathElement::s_info))
        return throwError(exec, TypeError);
    JSSVGClipPathElement* castedThisObj = static_cast<JSSVGClipPathElement*>(asObject(thisValue));
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGClipPathElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGClipPathElement::s_info))
        return throwError(exec, TypeError);
    JSSVGClipPathElement* castedThisObj = static_cast<JSSVGClipPathElement*>(asObject(thisValue));
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGClipPathElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGClipPathElement::s_info))
        return throwError(exec, TypeError);
    JSSVGClipPathElement* castedThisObj = static_cast<JSSVGClipPathElement*>(asObject(thisValue));
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThisObj->impl());


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue JSC_HOST_CALL jsSVGClipPathElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGClipPathElement::s_info))
        return throwError(exec, TypeError);
    JSSVGClipPathElement* castedThisObj = static_cast<JSSVGClipPathElement*>(asObject(thisValue));
    SVGClipPathElement* imp = static_cast<SVGClipPathElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(0));


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), JSSVGStaticPODTypeWrapper<TransformationMatrix>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
