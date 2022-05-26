// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 17:42:30

#include <iostream>

using namespace std;

void f(char* c) { cout << "invoke(char*)" << endl; }

void f(int i) { cout << "invoke(int)" << endl; }

int main() {
  f(nullptr);
  f(0);
  return 0;
}