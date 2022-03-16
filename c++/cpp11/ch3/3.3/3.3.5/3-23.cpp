// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-17 12:39:15

#include <iostream>
#include <utility>

using namespace std;

struct Maythrow {
  Maythrow() {}
  Maythrow(const Maythrow&) { cout << "Maythrow copy constructor." << endl; }
  Maythrow(Maythrow&&) { cout << "Maythrow move constructor." << endl; }
};

struct Nothrow {
  Nothrow() {}
  Nothrow(const Nothrow&) { cout << "Nothrow copy constructor." << endl; }
  Nothrow(Nothrow&&) noexcept { cout << "Nothrow move constructor." << endl; }
};

int main() {
  Maythrow m;
  Nothrow n;

  Maythrow mt = move_if_noexcept(m);  // 如果没有noexcept的移动构造函数，调用拷贝构造。返回左值引用
  Nothrow nt = move_if_noexcept(n);  // 如果没有noexcept的移动构造函数，调用移动构造。返回右值引用
  return 0;
}