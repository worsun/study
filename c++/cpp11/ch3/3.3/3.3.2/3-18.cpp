// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-13 22:26:34

#include <iostream>
using namespace std;

class HasPtrMem {
 public:
  HasPtrMem() : d(new int(0)) { cout << "Construct: " << ++n_cstr << endl; }
  HasPtrMem(const HasPtrMem& h) : d(new int(*h.d)) {
    cout << "Copy construct: " << ++n_cptr << endl;
  }
  ~HasPtrMem() { cout << "Destruct: " << ++n_dstr << endl; }
  int* d;
  static int n_cstr;
  static int n_dstr;
  static int n_cptr;
};

int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_dstr = 0;
int HasPtrMem::n_cstr = 0;

HasPtrMem GetTemp() { return HasPtrMem(); }

int main() {
  HasPtrMem a = GetTemp();

  return 0;
}

// g++ 3-18.cpp -fno-elide-constructors