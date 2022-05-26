// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 21:19:41

#include <iostream>
using namespace std;

template <long... nums>
struct Multiply;

template <long first, long... last>
struct Multiply<first, last...> {
  static const long val = first * Multiply<last...>::val;
};

template <>
struct Multiply<> {
  static const long val = 1;
};

int main() {
  cout << Multiply<2, 3, 4, 5>::val << endl;
  cout << Multiply<22, 44, 66, 88, 9>::val << endl;
  return 0;
}