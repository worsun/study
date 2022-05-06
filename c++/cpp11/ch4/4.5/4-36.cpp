// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-04-24 21:24:48
#include <iostream>
using namespace std;

int func(int a[]) {
  for (auto e : a) {
    cout << e;
  }
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  func(arr);
}