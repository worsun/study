// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-28 15:50:34
#include <iostream>
using namespace std;

template <typename T>
class Ptr {
 public:
  Ptr(T* p) : _p(p) {}
  operator bool() const {
    if (_p != 0) {
      return true;
    } else {
      return false;
    }
  }

 private:
  T* _p;
};

int main() {
  int a;
  Ptr<int> p(&a);

  if (p) {
    cout << "valid pointer," << endl;
  } else {
    cout << "invalid pointer." << endl;
  }

  Ptr<double> pd(0);
  cout << p + pd << endl;

  return 0;
}