// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 22:52:40
#include <iostream>
using namespace std;

int main() {
  [] {};
  int a = 3;
  int b = 4;
  [=] { return a + b; };
  auto fun1 = [&](int c) { b = a + c; };
  auto func2 = [=, &b](int c) -> int { return b += a + c; };
}