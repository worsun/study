// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 13:23:14

#include <iostream>

using namespace std;

struct A {
  A(int i) {}
  A(double d, int i) {}
  A(float f, double d, int i) {}
};

struct B : A {
  using A::A;  // 不会自动继承基类构造函数
  // B(int i) : A(i) {} // 也可以手动继承父类构造函数
  virtual void ExtraInterface(){};

  int d{0};
};

int main() { B b(356); }