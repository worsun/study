// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-28 17:48:21

#include <initializer_list>
using namespace std;

void Fun(initializer_list<int> iv) {}

int main() {
  Fun({1, 2});
  Fun({});
}