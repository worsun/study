// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-13 18:05:05

#include <iostream>
using namespace std;

namespace Jim {
#if __cplusplus == 201103L
inline
#endif
    namespace cpp11 {
struct Knife {
  Knife() { cout << "Knife in c++11." << endl; }
};
}  // namespace cpp11

#if __cplusplus < 201103L
inline
#endif
    namespace oldcpp {
struct Knife {
  Knife() { cout << "Knife in old c++." << endl; }
};
}  // namespace oldcpp
}  // namespace Jim

using namespace Jim;

int main() {
  Knife a;
  cpp11::Knife b;
  oldcpp::Knife c;
}