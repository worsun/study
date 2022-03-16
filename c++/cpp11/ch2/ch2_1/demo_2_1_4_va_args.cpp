// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 11:25:23

// 代码清单2-4

#include <stdio.h>

#include <iostream>
#include <string>
using namespace std;

#define LOG(...)                                           \
  {                                                        \
    fprintf(stderr, "%s: Line %d:\t", __FILE__, __LINE__); \
    fprintf(stderr, __VA_ARGS__);                          \
    fprintf(stderr, "\n");                                 \
  }

int main() {
  int x = 3;
  LOG("x == %d", x);
  return 0;
}