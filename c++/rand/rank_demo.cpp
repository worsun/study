// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-16 17:03:16

#include <stdlib.h>
#include <time.h>

#include <iostream>
using namespace std;
int main() {
  srand((unsigned)time(NULL));
  for (int i = 0; i < 10; i++) cout << rand() << '\t';
  cout << endl;
  return 0;
}