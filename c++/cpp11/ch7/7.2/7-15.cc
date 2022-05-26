// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 22:00:21

#include <cstddef>

class NoHeapAlloc {
 public:
  void* operator new(std::size_t) = delete;
};

int main() {
  NoHeapAlloc nha;
  NoHeapAlloc* pnha = new NoHeapAlloc;

  return 1;
}