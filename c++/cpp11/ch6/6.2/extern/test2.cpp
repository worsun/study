// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 20:52:40

#include <iostream>
using namespace std;

// 递归终止函数
void print() { cout << "empty" << endl; }

// 第二个版本的终止函数
template <class T>
void print(T t) {
  cout << t << endl;
}

template <class T, class... Args>
void print(T head, Args... rest) {
  cout << "parameter" << head << endl;
  print(rest...);
}

int main() {
  print(1, 2, 3, 4);
  return 0;
}