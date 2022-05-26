// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 21:26:17

#include <iostream>
#include <stdexcept>
using namespace std;

void Printf(const char* s) {
  cout << "33333" << endl;
  while (*s) {
    if (*s == '%' && *++s != '%') {
      throw runtime_error("invalid format string: missing arguments");
    }
    cout << *s++;
  }
}

template <typename T, typename... Args>
void Printf(const char* s, T value, Args... args) {
  cout << "11111" << endl;
  while (*s) {
    if (*s == '%' && *++s != '%') {
      cout << value;
      return Printf(++s, args...);
    }
    cout << *s++;
  }
  throw runtime_error("extra arguments provided to Printf");
}

int main() {
  Printf("hello %s%s%ma\n", string("world"), "!", 9999999);
  return 0;
}