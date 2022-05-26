// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 22:03:28

#include <cstddef>
#include <new>

extern void* p;

class NoStackAlloc {
 public:
  ~NoStackAlloc() = delete;
};

int main() {
  // NoStackAlloc nsa;        // 无法编译通过
  new (p) NoStackAlloc();  // placement new, 假设p无需调用析构函数

  return 1;
}