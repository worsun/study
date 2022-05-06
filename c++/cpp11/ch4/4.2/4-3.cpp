// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-13 20:29:45

#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
T3 Sum(T1 t1, T2 t2) {
  auto s = t1 + t2;
  return s;
}

int main() {
  auto name = "world.\n";
  cout << "hello, " << name;

  auto re = Sum<int, double, double>(1, 2.0);
}