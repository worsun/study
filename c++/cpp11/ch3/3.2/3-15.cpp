// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-11 13:22:48

#include <iostream>
using namespace std;

class DCExcept {
 public:
  DCExcept(double d) try : DCExcept(1, d) { cout << "Run the body." << endl; } catch (...) {
    cout << "caugth exception." << endl;
  }

 private:
  DCExcept(int i, double d) {
    cout << "going to throw" << endl;
    throw 0;
  }

  int type;
  double data;
};

int main() { DCExcept(1.2); }