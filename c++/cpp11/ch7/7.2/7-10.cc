// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 21:40:08

#include <iostream>
#include <type_traits>
using namespace std;

class NoCopyCstor {
 public:
  NoCopyCstor() = default;
  NoCopyCstor(const NoCopyCstor&) = delete;
};

int main() {
  NoCopyCstor a;
  NoCopyCstor b(a);
  return 0;
}