// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-21 12:55:05

// from zhihu
#include <iostream>

template <typename T>
void print(T& t) {
  std::cout << "左值" << std::endl;
}

template <typename T>
void print(T&& t) {
  std::cout << "右值" << std::endl;
}

template <typename T>
void testForward(T&& v) {
  print(v);
  print(std::forward<T>(v));
  print(std::move(v));
}

int main(int argc, char* argv[]) {
  testForward(1);

  std::cout << "======================" << std::endl;

  int x = 1;
  testForward(x);
}