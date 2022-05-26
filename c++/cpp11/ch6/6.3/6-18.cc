// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-25 23:03:07

// g++ 6-18.cc -lpthread

#include <pthread.h>

#include <iostream>
using namespace std;

static long long total = 0;
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;

void* func(void*) {
  long long i;
  for (int i = 0; i < 10000000LL; i++) {
    pthread_mutex_lock(&m);
    total += i;
    pthread_mutex_unlock(&m);
  }
}

int main() {
  pthread_t thread1, thread2;
  if (pthread_create(&thread1, NULL, &func, NULL)) {
    throw;
  }
  if (pthread_create(&thread2, NULL, &func, NULL)) {
    throw;
  }

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  cout << total << endl;
  return 0;
}