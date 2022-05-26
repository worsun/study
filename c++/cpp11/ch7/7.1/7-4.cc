// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 18:07:16

#include <iostream>

using namespace std;

// 模版类型推倒不作为指针
template <typename T>
void g(T* t) {}

template <typename T>
void h(T t) {}

int main() {
  // g(nullptr);  // 编译失败，nullptr的类型是nullptr_t，而不是指针
  g((float*)nullptr);

  h(0);
  h(nullptr);
  h((float*)nullptr);
}