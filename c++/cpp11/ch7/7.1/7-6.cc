// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 18:15:29

#include <cstddef>
#include <cstdio>

using namespace std;

int main() {
  nullptr_t my_null;
  printf("%x\n", &my_null);

  // 根据c++11标准规定，本句无法编译通过(nullptr是一个右值，无法获取其地址)
  // printf("%x\n", &nullptr);

  printf("%d\n", my_null == nullptr);

  // default_nullptr是nullptr的一个右值引用
  const nullptr_t&& default_nullptr = nullptr;
  printf("%x\n", &default_nullptr);
}