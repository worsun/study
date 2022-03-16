// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-10 12:37:22

int main() {
  const int x = 1024;
  const int y = 10;

  char a = x;
  char* b = new char(1024);

  char c = {x};
  char d = {y};
  unsigned char e{-1};

  float f{7};
  int g{1.0f};
  float* h = new float{1e48};
  float i = 1.2l;
}