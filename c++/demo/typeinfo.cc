// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-07-07 15:30:29

#include <iostream>
#include <typeinfo>

template <typename T>
void func(T t) {
  std::cout << typeid(t).name() << std::endl;
}

int main() {
  std::string a = "tes";
  int b = 1;
  // std::cout << typeid(a).name() << std::endl;
  // std::cout << typeid(b).name() << std::endl;
  func(a);
  func(b);
}