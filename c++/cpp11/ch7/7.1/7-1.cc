// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 17:42:30

#include <stdio.h>

void f(char* c) { printf("invoke f(char*)\n"); }

void f(int i) { printf("invoke f(int)\n"); }

int main() {
  f(0);
  f(NULL);
  f((char*)0);
  return 0;
}