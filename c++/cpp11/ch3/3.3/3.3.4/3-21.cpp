// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-15 15:04:45

#include <iostream>
using namespace std;

class Moveable {
 public:
  Moveable() : i(new int(3)) {}
  ~Moveable() {}
  Moveable(const Moveable& m) : i(new int(*m.i)) { cout << "const Moveable" << endl; }
  Moveable(Moveable&& m) : i(m.i) {
    m.i = nullptr;
    cout << "Moveable&&" << endl;
  }

  int* i;
};

int main() {
  Moveable a;
  Moveable c(move(a));
  cout << *a.i << endl;  // a的i已经为null了
  return 0;
}