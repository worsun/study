// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:07:27

class _functor {
 public:
  int operator()(int x, int y) { return x + y; }
};

int main() {
  int girls = 3, boys = 4;
  _functor totalChild;
  // totalChild 是对象，但是使用却像函数，因为实现了()充载，所以叫仿函数
  return totalChild(girls, boys);
}