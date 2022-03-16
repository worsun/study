// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 12:11:33

// 代码清单2-8

#include <cassert>
#include <cstring>
#include <iostream>
using namespace std;

template <typename T, typename U>
int bit_copy(T& a, U& b) {
  assert(sizeof(b) == sizeof(a));
  memcpy(&a, &b, sizeof(b));
};

int main() {
  int a = 0x2468;
  double b;
  bit_copy(a, b);
  cout << b << endl;
}