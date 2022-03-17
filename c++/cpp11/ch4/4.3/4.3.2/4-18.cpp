// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-16 12:43:41

#include <vector>
using namespace std;

int main() {
  vector<int> vec;
  typedef decltype(vec.begin()) vectype;

  for (vectype i = vec.begin(); i < vec.end(); ++i) {
  }

  for (decltype(vec)::iterator i = vec.begin(); i < vec.end(); ++i) {
  }
}