// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-28 15:50:34
#include <iostream>
using namespace std;

class ConvertTo {};

class Convertable

{
 private:
  /* data */
 public:
  explicit operator ConvertTo() const { return ConvertTo(); }
};

void Func(ConvertTo ct) {}

void test() {
  Convertable c;
  ConvertTo ct(c);

  ConvertTo ct2 = c;
  ConvertTo ct3 = static_cast<ConvertTo>(c);

  Func(c);
}