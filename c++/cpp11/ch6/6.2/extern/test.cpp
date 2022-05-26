// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 20:48:44

#include <iostream>
using namespace std;

template <class... T>
void f(T... args) {
  cout << sizeof...(args) << endl;
}

int main() {
  f();
  f(1, 2);
  f(1, 2, 3);
  f(1, 2, 3, "4");
}