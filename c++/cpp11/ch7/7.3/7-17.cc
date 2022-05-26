// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 22:52:40
#include <iostream>
using namespace std;

int main() {
  int girls = 3, boys = 4;
  auto totalChild = [](int x, int y) -> int { return x + y; };

  cout << totalChild(girls, boys) << endl;
}