// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 11:31:09

// g++ 6-22.cc -lpthread

#include <atomic>
#include <iostream>
#include <thread>

using namespace std;

atomic<int> a{0};
atomic<int> b{0};

int Thread1(int) {
  int t = 1;
  a = t;
  b = 2;
}

int Thread2(int) {
  while (b != 2) {
    ;
  }
  cout << a << endl;
}

int main() {
  thread t1(Thread1, 0);
  thread t2(Thread2, 0);
  t1.join();
  t2.join();
  return 0;
}