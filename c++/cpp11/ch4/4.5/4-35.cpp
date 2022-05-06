// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-04-24 21:20:43
#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  for (int& e : arr) {  // 注意这里是引用
    e *= 2;
  }

  for (int& e : arr) {
    cout << e << '\t';
  }
}