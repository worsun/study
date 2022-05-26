// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 23:12:20

// g++ 6-19.cc -lpthread

#include <atomic>
#include <iostream>
#include <thread>

using namespace std;

atomic_llong total{0};
void func(int) {
  for (long long i = 0; i < 10000000L; i++) {
    total += i;
  }
}

int main() {
  thread t1(func, 0);
  thread t2(func, 0);
  t1.join();
  t2.join();
  cout << total << endl;
  return 0;
}