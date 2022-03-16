// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-15 12:16:50
#include <iostream>
using namespace std;
double foo() {}
float* bar() {}
int main() {
  const auto a = foo();      // a: const double
  const auto& b = foo();     // b: const double &
  volatile auto* c = bar();  // c: volatile float*
  const auto* m = bar();     // c: volatile float*

  auto d = a;            // d: double
  auto& e = a;           // e: const double&
  auto f = c;            // f: float*
  volatile auto& g = c;  // g: volatile float * &

  auto n = m;  // g: volatile float * &

  cout << &a << endl << &d << endl;
  cout << &a << endl << &e << endl;

  cout << f << endl << c << endl;
  cout << g << endl << c << endl;

  cout << m << endl << n << endl;
}