/*
    This file is part of the Arabica open source project.
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
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#ifndef V8Comment_h
#define V8Comment_h

#include "DOM/Node.hpp"
#include "V8CharacterData.h"
#include "uscxml/plugins/datamodel/ecmascript/v8/dom/V8DOM.h"
#include <v8.h>

namespace Arabica {
namespace DOM {

class V8Comment {
public:
    struct V8CommentPrivate {
      V8DOM* dom;
      Arabica::DOM::Comment<std::string>* arabicaThis;
    };

    V8_DESTRUCTOR(V8CommentPrivate);
    static bool hasInstance(v8::Handle<v8::Value>);



    static v8::Persistent<v8::FunctionTemplate> Tmpl;
    static v8::Handle<v8::FunctionTemplate> getTmpl() {
        if (Tmpl.IsEmpty()) {
            v8::Handle<v8::FunctionTemplate> tmpl = v8::FunctionTemplate::New();
            tmpl->SetClassName(v8::String::New("Comment"));
            tmpl->ReadOnlyPrototype();

            v8::Local<v8::ObjectTemplate> instance = tmpl->InstanceTemplate();
            v8::Local<v8::ObjectTemplate> prototype = tmpl->PrototypeTemplate();
            instance->SetInternalFieldCount(1);




            tmpl->Inherit(V8CharacterData::getTmpl());
            Tmpl = v8::Persistent<v8::FunctionTemplate>::New(tmpl);
        }
        return Tmpl;
    }


};

}
}

#endif // V8Comment_h
