// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-16 12:56:31

template <typename T1, typename T2>
void Sum(T1& t1, T2& t2, decltype(t1 + t2)& s) {
  s = t1 + t2;
}

int main() {
  int a = 3;
  long b = 5;
  float c = 1.0f, d = 2.3f;

  long e;
  float f;
  Sum(a, b, e);
  Sum(c, d, f);
}