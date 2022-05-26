// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:37:46

int main() {
  int girls = 3, boys = 4;
  auto totalChild = [](int a, int b) -> int { return a + b; };
  typedef int (*allChild)(int x, int y);
  typedef int (*oneChild)(int x);

  allChild p;
  // c++11 允许lambda表达式转为函数指针。（严格来讲，lambda表达式并非函数指针）
  p = totalChild;

  oneChild q;
  // q = totalChild;  // 编译失败，参数，返回值，调用方式必须保持一致，且无捕获列表

  decltype(totalChild) allPeople = totalChild;  // 需通过decltype获得lambda类型
  // decltype(totalChild) totalPeople = p;         // 编译失败，指针无法转换为lambda
}