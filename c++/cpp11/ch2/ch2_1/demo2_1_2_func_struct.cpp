// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-09 23:17:37

// 代码清单2-3

#include <iostream>
#include <string>
using namespace std;

struct TestStruct {
  TestStruct() : name(__func__) {}

  const char* name;
};

int main() {
  TestStruct ts;
  cout << ts.name << endl;
  return 0;
}

// 无法编译通过，因为在参数声明时，__func__还未被定义
// void FunFail(string func_name = __func__){};
