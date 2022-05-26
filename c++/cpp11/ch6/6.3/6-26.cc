// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 16:56:58

// g++ 6-26.cc -lpthread

#include <atomic>
#include <cassert>
#include <string>
#include <thread>

using namespace std;

atomic<string*> ptr;
atomic<int> data;

void Producer() {
  string* p = new string("Hello");
  data.store(42, memory_order_relaxed);
  ptr.store(p, memory_order_release);
}

void Consumer() {
  string* p2;
  while (!(p2 = ptr.load(memory_order_consume))) {
    ;
  }
  assert(*p2 == "Hello");
  assert(data.load(memory_order_relaxed) == 42);
}

int main() {
  thread t1(Producer);
  thread t2(Consumer);
  t1.join();
  t2.join();
  return 0;
}