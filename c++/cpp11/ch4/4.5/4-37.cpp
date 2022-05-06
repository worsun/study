// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-04-24 21:50:32
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  for (auto i = v.begin(); i != v.end(); ++i) {
    cout << *i << endl;
  }

  for (auto e : v) {
    cout << e << endl;
  }
}