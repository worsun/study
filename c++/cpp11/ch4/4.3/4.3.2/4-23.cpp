// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-16 13:03:42
#include <iostream>
#include <type_traits>
#include <typeinfo>

using namespace std;

typedef double (*func)();

int main() {
  result_of<func()>::type f;
  cout << typeid(f).name() << endl;
}