// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 11:31:09

// g++ 6-24.cc -lpthread

#include <atomic>
#include <iostream>
#include <thread>

using namespace std;

atomic<int> a{0};
atomic<int> b{0};

int Thread1(int) {
  int t = 1;
  a.store(t, memory_order_relaxed);
  b.store(2, memory_order_release);
}

int Thread2(int) {
  while (b.load(memory_order_acquire) != 2) {
    ;
  }
  cout << a.load(memory_order_relaxed) << endl;
}

int main() {
  thread t1(Thread1, 0);
  thread t2(Thread2, 0);
  t1.join();
  t2.join();
  return 0;
}