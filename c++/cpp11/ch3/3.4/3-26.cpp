// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-28 12:10:56
#include <iostream>

using namespace std;

struct Rational1 {
  Rational1(int n = 0, int d = 1) : num(n), den(d) {
    cout << __func__ << "(" << num << "/" << den << ")" << endl;
  }

  int num;  // Numerator 被除数
  int den;  // Denominator 除数
};

struct Rational2 {
  explicit Rational2(int n = 0, int d = 1) : num(n), den(d) {
    cout << __func__ << "(" << num << "/" << den << ")" << endl;
  }

  int num;  // Numerator 被除数
  int den;  // Denominator 除数
};

void DisPlay1(Rational1 ra) {
  cout << "Numerator: " << ra.num << "Denominator: " << ra.den << endl;
}

void DisPlay2(Rational2 ra) {
  cout << "Numerator: " << ra.num << "Denominator: " << ra.den << endl;
}

int main() {
  Rational1 r1_1 = 11;
  Rational1 r1_2(12);

  Rational2 r2_1 = 21;  // 无法编译通过
  Rational2 r2_1(22);

  DisPlay1(1);

  DisPlay2(2);  // 无法编译通过
  DisPlay2(Rational2(2));

  return 0;
}