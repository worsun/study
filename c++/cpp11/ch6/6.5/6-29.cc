// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 17:35:24

#include <cstdlib>
#include <iostream>

using namespace std;

struct A {
  ~A() { cout << "Destruct A." << endl; }
};

void closeDevice() { cout << "Device is closed." << endl; }

int main() {
  A a;
  // at_quick_exit(closeDevice);
  // quick_exit(0);

  atexit(closeDevice);
  exit(0);
}