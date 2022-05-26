// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 23:25:35

// g++ 6-20.cc -lpthread

#include <unistd.h>

#include <atomic>
#include <iostream>
#include <thread>

using namespace std;

std::atomic_flag lock = ATOMIC_FLAG_INIT;  // false状态

void f(int n) {
  while (lock.test_and_set(std::memory_order_acquire)) {
    cout << "Waiting form thread " << n << endl;
  }
  cout << "Thread " << n << " starts working" << endl;
}

void g(int n) {
  cout << "Thread " << n << " is going to start." << endl;
  lock.clear();
  cout << "Thread " << n << " starts working." << endl;
}

int main() {
  lock.test_and_set();
  thread t1(f, 1);
  thread t2(g, 2);

  t1.join();
  usleep(100);
  t2.join();
  return 0;
}