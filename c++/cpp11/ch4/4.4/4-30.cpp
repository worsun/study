// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-18 21:42:56
#include <iostream>

using namespace std;

template <typename T1, typename T2>
auto Sum(const T1& t1, const T2& t2) -> decltype(t1 + t2) {
  return t1 + t2;
}

template <typename T1, typename T2>
auto Mul(const T1& t1, const T2& t2) -> decltype(t1 * t2) {
  return t1 * t2;
}

int main() {
  auto a = 3;
  auto b = 4L;
  auto pi = 3.14;

  auto c = Mul(Sum(a, b), pi);
  cout << c << endl;
}