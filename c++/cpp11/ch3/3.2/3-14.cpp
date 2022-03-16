// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-11 13:17:29

#include <deque>
#include <list>
#include <vector>

using namespace std;

class TDConstruct {
  template <class T>
  TDConstruct(T first, T last) : l(first, last) {}
  list<int> l;

 public:
  TDConstruct(vector<short>& v) : TDConstruct(v.begin(), v.end()) {}
  TDConstruct(deque<int>& v) : TDConstruct(v.begin(), v.end()) {}
};
