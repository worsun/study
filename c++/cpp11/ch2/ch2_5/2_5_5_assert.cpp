// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 12:11:33

// 代码清单2-10/2-11

#include <cassert>
#include <cstring>
#include <iostream>
using namespace std;

static_assert((sizeof(int) == 8), "This 64-bit machine should follow this!");

// int positive(const int n) {
//   static_assert(n > 0, "value nust > 0");  // static_assert必须是变异期间可以判断的，否则用assert
// }

int main() { return 0; }