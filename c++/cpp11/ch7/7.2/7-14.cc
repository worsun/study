// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 21:59:09

void Func(int i) {}
void Func(char c) = delete;

int main() {
  Func(3);
  Func('c');
  return 1;
}