// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 13:23:14

#include <iostream>

using namespace std;

struct A {
  A(int i) {}
};

struct B {
  B(int i) {}
};

struct C : A, B {
  using A::A;
  using B::B;
  // C(int i) {}
};

int main() { B b(356); }