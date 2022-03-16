// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-15 12:51:28
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
  int i;
  decltype(i) j = 0;
  cout << typeid(j).name() << endl;

  float a;
  double b;
  decltype(a + b) c;
  cout << typeid(c).name() << endl;
}