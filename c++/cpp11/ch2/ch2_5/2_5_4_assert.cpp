// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 12:11:33

// 代码清单2-9

#include <cassert>
#include <cstring>
#include <iostream>
using namespace std;

#define assert_sattic(e)              \
  do {                                \
    enum { assert_sattic__ = 1 / e }; \
  } while (0)

template <typename T, typename U>
int bit_copy(T& a, U& b) {
  assert_sattic(sizeof(b) == sizeof(a));
  memcpy(&a, &b, sizeof(b));
};

int main() {
  int a = 0x2468;
  double b;
  bit_copy(a, b);
  cout << b << endl;
}