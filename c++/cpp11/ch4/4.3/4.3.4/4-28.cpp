// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-18 12:43:58

#include <iostream>
#include <type_traits>

using namespace std;

int i = 1;
int& j = i;
int* p = &i;
const int k = 1;

int main() {
  decltype(i)& var1 = i;
  decltype(j)& var2 = i;  // 冗余的&，被忽略

  cout << is_lvalue_reference<decltype(var1)>::value << endl;

  cout << is_rvalue_reference<decltype(var2)>::value << endl;
  cout << is_lvalue_reference<decltype(var2)>::value << endl;

  // decltype(p)* var3 = &i;
  decltype(p)* var33 = &p;  // var33 的类型是int**

  auto* v3 = p;  // v3是int*
  v3 = &i;

  const decltype(k) var4 = 1;  //冗余的const，被忽略
}
