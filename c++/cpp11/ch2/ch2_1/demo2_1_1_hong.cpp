// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-09 23:13:08
#include <iostream>
using namespace std;

int main() {
  cout << "Standard Clib: " << __STDC_HOSTED__ << endl;
  cout << "Standard C: " << __STDC__ << endl;
  cout << "IOS/IEC " << __STDC_ISO_10646__ << endl;
  return 0;
}