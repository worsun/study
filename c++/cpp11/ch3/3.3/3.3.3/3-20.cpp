// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-15 15:04:45

// g++ 3-20.cpp -fno-elide-constructors

#include <iostream>
using namespace std;

struct Copyable {
  Copyable() {}
  Copyable(const Copyable& o) { cout << "Copied" << endl; }
};

Copyable RetrunRvalue() { return Copyable(); }
void AcceptVal(Copyable) {}
void AcceptRef(const Copyable&) {}  // const 左值引用才可以引用右值
void AcceptRvalueRef(Copyable&& s) { Copyable&& news = std::move(s); }

int main() {
  const int& judgement = 1;
  const int judgement2 = 2;

  cout << "Pass by value: " << endl;
  AcceptVal(RetrunRvalue());  // 临时值被拷贝传入
  cout << "Pass by reference: " << endl;
  AcceptRef(RetrunRvalue());  // 临时值被作为引用传递
  cout << "Pass by rigth reference: " << endl;
  AcceptRvalueRef(RetrunRvalue());
}