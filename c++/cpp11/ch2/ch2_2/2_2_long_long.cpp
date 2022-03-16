// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 11:40:00

// 代码清单2-5

#include <climits>
#include <cstdio>
using namespace std;

int main() {
  long long ll_min = LLONG_MIN;
  long long ll_max = LONG_LONG_MAX;
  unsigned long long ull_max = ULLONG_MAX;

  printf("min of long long: %lld\n", ll_min);
  printf("max of long long: %lld\n", ll_max);
  printf("max of unsinged long long: %llu\n", ull_max);
}