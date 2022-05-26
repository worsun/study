// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 21:48:57

class ConvType {
 public:
  ConvType(int i) {}
  ConvType(char c) = delete;
};

void Func(ConvType ct) {}

int main() {
  Func(3);
  // Func('z');

  ConvType ci(3);
  // ConvType cc('a');

  ConvType c1 = 1;
  ConvType c2 = 'a';

  return 0;
}