// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 21:40:08

#include <iostream>
#include <type_traits>
using namespace std;

class DefaultOptr {
 public:
  DefaultOptr() = default;
  DefaultOptr& operator=(const DefaultOptr&);
};

inline DefaultOptr& DefaultOptr::operator=(const DefaultOptr&) = default;

int main() {
  DefaultOptr a;
  DefaultOptr b = a;
  return 0;
}