// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 21:44:23

#include <iostream>
using namespace std;

template <typename... T>
void DummyWapper(T... t) {}

template <typename T>
T pr(T t) {
  cout << t;
  return t;
}

template <typename... A>
void VTPrint(A... a) {
  DummyWapper(pr(a)...);
}

int main() {
  VTPrint(1, ", ", 1.2, ", abc\n");
  return 0;
}