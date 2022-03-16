// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-21 12:40:41

#include <iostream>
using namespace std;

template <typename T, typename U>
void PerfectForward(T&& t, U& Func) {
  cout << t << "\tforwarded..." << endl;
  Func(forward<T>(t));
}

void RunCode(double&& m) { cout << "rvalue ref 1" << endl; }
void RunHome(double&& h) { cout << "rvalue ref 2" << endl; }
void RunComp(double&& c) { cout << "rvalue ref 3" << endl; }

int main() {
  PerfectForward(1.5, RunComp);
  PerfectForward(8, RunCode);
  PerfectForward(1.5, RunHome);
}