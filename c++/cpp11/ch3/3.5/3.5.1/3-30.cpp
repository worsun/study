// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-28 17:42:17

#include <string>
#include <vector>

using namespace std;

enum Gender { boy, girl };

class People {
 private:
  vector<pair<string, Gender>> data;

 public:
  People(initializer_list<pair<string, Gender>> l) {
    auto i = l.begin();
    for (; i != l.end(); ++i) {
      data.push_back(*i);
    }
  }
};

int main() { People ship2022{{"Garfield", boy}}; }