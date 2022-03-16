// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-15 15:04:45

#include <iostream>
using namespace std;

class HugeMem {
 public:
  int* c;
  int sz;

 public:
  HugeMem(int size) : sz(size > 0 ? size : 1) {
    cout << "HugeMem constructor" << endl;
    c = new int[size];
  }
  ~HugeMem() {
    cout << "HugeMem destructor" << endl;
    delete[] c;
  }
  HugeMem(HugeMem&& hm) : sz(hm.sz), c(hm.c) {
    cout << "HugeMem Move constructor" << endl;
    hm.c = nullptr;
  }
};

class Moveable {
 public:
  Moveable() : i(new int(3)), h(1024) { cout << "Moveable constructor" << endl; }
  ~Moveable() {
    cout << "Moveable destructor" << endl;
    delete i;
  }
  Moveable(Moveable&& m) : i(m.i), h(move(m.h)) {
    cout << "Moveable Move constructor" << endl;
    m.i == nullptr;
  }

  int* i;
  HugeMem h;
};

Moveable GetTemp() {
  Moveable tmp = Moveable();
  cout << hex << "Huge mem from " << __func__ << " @" << tmp.h.c << endl;
  return tmp;
}

int main() {
  Moveable a(GetTemp());
  cout << hex << "Huge mem from " << __func__ << " @" << a.h.c << endl;
  return 0;
}