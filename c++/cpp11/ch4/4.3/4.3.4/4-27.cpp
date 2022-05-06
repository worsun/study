// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-18 12:43:58

#include <iostream>
#include <type_traits>

using namespace std;

const int ic = 0;
volatile int iv;

struct S {
  int i;
};

const S a = {0};
volatile S b;
volatile S* p = &b;

int main() {
  cout << is_const<decltype(ic)>::value << endl;
  cout << is_volatile<decltype(iv)>::value << endl;

  cout << is_const<decltype(a)>::value << endl;
  cout << is_volatile<decltype(b)>::value << endl;

  cout << is_const<decltype(a.i)>::value << endl;
  cout << is_volatile<decltype(p->i)>::value << endl;
}
