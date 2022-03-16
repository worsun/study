// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 13:23:14

#include <iostream>

using namespace std;

struct Base {
  void f(double i) { cout << "Base:" << i << endl; }
  void g(double i) { cout << "Base g:" << i << endl; }
};

struct Derived : Base {
  // using Base::f;
  void f(int i) { cout << "Derived:" << i << endl; }
};

int main() {
  Base b;
  b.f(4.5);

  Derived d;
  d.f(2);
  d.g(3.4);
}