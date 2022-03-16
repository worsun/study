// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-11 12:14:27

// g++ -std=c++11 3-35.cpp

#include <iostream>

using namespace std;

struct B1 {};

struct B2 {};

struct D1 : B1 {
  B1 b;  // 第一个非静态变量与基类相同
  int i;
};

struct D2 : B1 {
  B2 b;
  int i;
};

int main() {
  D1 d1;
  D2 d2;
  cout << hex;
  cout << reinterpret_cast<long long>(&d1) << endl;

  cout << reinterpret_cast<long long>(&(d1.b)) << endl;

  cout << reinterpret_cast<long long>(&(d1.i)) << endl;

  cout << reinterpret_cast<long long>(&d2) << endl;

  cout << reinterpret_cast<long long>(&(d2.b)) << endl;

  cout << reinterpret_cast<long long>(&(d2.i)) << endl;
}