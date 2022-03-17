// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-15 12:42:57
#include <iostream>
#include <typeinfo>
using namespace std;

class White {};
class Black {};

int main() {
  White a;
  Black b;

  cout << typeid(a).name() << endl;
  cout << typeid(b).name() << endl;

  White c;
  bool a_b_sametype = (typeid(a).hash_code() == typeid(b).hash_code());
  bool a_c_sametype = (typeid(a).hash_code() == typeid(c).hash_code());

  cout << "A and B? " << (int)a_b_sametype << endl;
  cout << "A and C? " << (int)a_c_sametype << endl;
}