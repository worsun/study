// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 13:23:14

#include <iostream>

using namespace std;

struct A {
  A(int i) {}
};

struct B : A {
  using A::A;  // 一旦使用继承构造函数，编译器不再生成默认构造函数
};

int main() {
  B b;  // 编译错误
}