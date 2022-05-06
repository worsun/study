// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-04-24 21:03:04
#include <iostream>
using namespace std;

double foo(int a) { return (double)a + 0.1; }

int foo(double a) { return (int)a; }

template <class T>
auto Forward(T t) -> decltype(foo(t)) {
  return foo(t);
}

int main() {
  cout << Forward(2) << endl;
  cout << Forward(0.5) << endl;
}