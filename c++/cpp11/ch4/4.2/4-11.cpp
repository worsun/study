// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-15 12:16:50

int main() {
  int x;
  int* y = &x;
  double foo();
  int& bar();

  auto* a = &x;      // int*
  auto& b = x;       // int*
  auto c = y;        // int*
  auto* d = y;       // int*
  auto* e = &foo();  // 编译失败，指针不能指向一个临时变量

  auto& f = foo();  //编译失败，nonconst的左值饮用不能和一个临时变量绑定

  auto g = bar();   // int
  auto& h = bar();  // int&
}