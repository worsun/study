// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-11 12:33:17

#include <cstring>
#include <iostream>

using namespace std;

class A {
 public:
  int a;
  int b;
};

int main() {
  A a1;
  a1.a = 10;
  a1.b = 20;

  char* p = new char[sizeof(A)];
  memcpy(p, &a1, sizeof(A));

  A* a2 = reinterpret_cast<A*>(p);
  cout << a2->a << endl;
  cout << a2->b << endl;

  return 0;
}