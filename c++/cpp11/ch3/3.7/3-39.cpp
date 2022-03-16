// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-11 12:46:29

#include <iostream>

using namespace std;

union T {
  static long Get() { return 32; }
};

int main() {
  cout << T::Get() << endl;
  return 0;
}