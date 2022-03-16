// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-13 18:36:09
#include <iostream>
#include <map>
#include <type_traits>
using namespace std;

using uint = unsigned int;
typedef unsigned int UINT;

using sint = int;

template <typename T>
using MapString = std::map<T, char*>;

int main() {
  cout << is_same<uint, UINT>::value << endl;
  MapString<int> numberedString;
}