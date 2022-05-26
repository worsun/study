// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 17:42:30

#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
  // nullptr 可以隐式转换为char*
  char* cp = nullptr;

  // nullptr不可以转换为整型，而任何类型也不可以转换为nullptr_t（nullptr_t 是nullptr 的类型）
  // int n1 = nullptr;
  // int n2 = reinterpret_cast<int>(nullptr);

  // nullptr 与 nullptr_t类型变量可以作比较
  // 当使用==， <=, >= 符号比较时返回true
  nullptr_t nptr;
  if (nptr == nullptr) {
    cout << "nullptr_t nptr == nullptr" << endl;
  } else {
    cout << "nullptr_t nptr != nullptr" << endl;
  }

  if (nptr < nullptr) {
    cout << "nullptr_t nptr < nullptr" << endl;
  } else {
    cout << "nullptr_t nptr !< nullptr" << endl;
  }

  // 不能转换为整型或者bool类型，以下代码不能编译通过(当前能编译通过因为编译起版本比较老)
  if (0 == nullptr) cout << "0 == nullptr" << endl;
  if (nullptr) cout << "0 != nullptr" << endl;

  // 不可以进行算术运算，一下代码不能编译通过
  // nullptr += 1;
  // nullptr *= 5;

  // 一下操作可以正常进行
  sizeof(nullptr);
  typeid(nullptr);
  throw(nullptr);

  return 0;
}