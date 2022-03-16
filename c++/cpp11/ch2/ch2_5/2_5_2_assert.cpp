// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 12:11:33

// 代码清单2-7

#include <cassert>
#include <iostream>
using namespace std;

enum FeatureSupports {
  C99 = 0x0001,
  ExtInt = 0x0002,
  SAssert = 0x0004,
  NoExcept = 0x0008,
  SMAX = 0x0010,
};

int main() {
  assert((SMAX - 1) == (C99 | ExtInt | SAssert | NoExcept));
  cout << SMAX - 1 << endl;
}