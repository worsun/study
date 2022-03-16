// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-28 17:55:05

#include <iostream>
#include <vector>
using namespace std;

class Mydata {
 public:
  Mydata& operator[](initializer_list<int> l) {
    for (auto i = l.begin(); i != l.end(); ++i) {
      idx.push_back(*i);
      return *this;
    }
  }

  Mydata& operator=(int v) {
    if (idx.empty() != true) {
      for (auto i = idx.begin(); i != idx.end(); ++i) {
        d.resize((*i > d.size()) ? *i : d.size());
        d[*i - 1] = v;
      }
      idx.clear();
    }
    return *this;
  }

  void Print() {
    for (auto i = d.begin(); i != d.end(); ++i) {
      cout << *i << " ";
    }
    cout << endl;
  }

 private:
  vector<int> idx;
  vector<int> d;
};

int main() {
  Mydata d;
  d[{2, 3, 5}] = 7;
  // d.Print();
  d[{1, 4, 5, 8}] = 4;
  d.Print();
}