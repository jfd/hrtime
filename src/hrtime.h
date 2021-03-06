/*
   Copyright 2010 Rune Karlsen <runelabs@gmail.com>. All rights reserved.
   Released under the "Simplified BSD License".

   Redistribution and use in source and binary forms, with or without modification, are
   permitted provided that the following conditions are met:

      1. Redistributions of source code must retain the above copyright notice, this list of
         conditions and the following disclaimer.

      2. Redistributions in binary form must reproduce the above copyright notice, this list
         of conditions and the following disclaimer in the documentation and/or other materials
         provided with the distribution.

   THIS SOFTWARE IS PROVIDED BY RUNE KARLSEN ``AS IS'' AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
   FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL RUNE KARLSEN OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
   ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
   ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

   The views and conclusions contained in the software and documentation are those of the
   authors and should not be interpreted as representing official policies, either expressed
   or implied, of Rune Karlsen <runelabs@gmail.com>.
*/

#ifndef _LIBHRTIME_V8_
#define _LIBHRTIME_V8_

#include <time.h>
#include <v8.h>
#include <node.h>

namespace hrtime_v8 {


void Initialize(v8::Handle<v8::Object> target);

v8::Handle<v8::Value> Time(const v8::Arguments &args);
v8::Handle<v8::Value> Uptime(const v8::Arguments &args);
v8::Handle<v8::Value> Cputime(const v8::Arguments &args);
v8::Handle<v8::Value> Initime(const v8::Arguments &args);
v8::Handle<v8::Value> Runtime(const v8::Arguments &args);
v8::Handle<v8::Value> Resolution(const v8::Arguments &args);


}
#endif
