/*
 * Copyright (c) 2015-2017 JlnWntr (jlnwntr@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MINI_LUA_H
#include "MiniLua.hpp"
#endif

int main(int argc, char *argv[]) {

  MiniLua lua{"test.lua"};

  // get int
  int width{0};
  lua.Get("width", width);
  std::cout << "width: " << width << "\n";

  // get double
  double number{0};
  lua.Get("number", number);
  std::cout << "number: " << number << "\n";

  // get float
  float flt{0.0};
  lua.Get("float", flt);
  std::cout << "float: " << flt << "\n";

  // get string
  std::string title{"empty"};
  lua.Get("title", title);
  std::cout << "title: " << title << "\n";

  // get boolean
  bool boolean{false};
  lua.Get("fullscreen", boolean);
  std::cout << "fullscreen: " << (boolean ? "true" : "false") << "\n";

  return 0;
}
