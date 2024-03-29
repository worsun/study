// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-16 10:59:45

#include <iostream>
#include <mutex>
#include <thread>

int g_i = 0;
std::mutex g_i_mutex;  // protects g_i

void safe_increment() {
  const std::lock_guard<std::mutex> lock(g_i_mutex);
  ++g_i;

  std::cout << "g_i: " << g_i << "; in thread #" << std::this_thread::get_id() << '\n';

  // g_i_mutex is automatically released when lock
  // goes out of scope
}

int main() {
  std::cout << "g_i: " << g_i << "; in main()\n";

  std::thread t1(safe_increment);
  std::thread t2(safe_increment);

  t1.join();
  t2.join();

  std::cout << "g_i: " << g_i << "; in main()\n";
}