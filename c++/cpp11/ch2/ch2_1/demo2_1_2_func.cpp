// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-09 23:17:37
#include <iostream>
#include <string>
using namespace std;

const char* hello() { return __func__; }
const char* word() { return __func__; }

int main() {
  cout << hello() << ", " << word() << endl;
  return 0;
}