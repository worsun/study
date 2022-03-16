// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 12:11:33

// 代码清单2-6

#include <cassert>
#include <iostream>
using namespace std;

char* ArrayAlloc(int n) {
  assert(n > 0);
  return new char[n];
}

int main() {
  char* a = ArrayAlloc(0);
  cout << sizeof(*a) << endl;
}