// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-10 16:48:22

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string array[3]{"1ewerefewc", "3ddd", "5d"};
  for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
    cout << array[i] << " ";
  }

  cout << endl;

  cout << sizeof(array) << endl;
  cout << sizeof(array[0]) << endl;

  vector<string> candidate_fields{"cms_id", "event_id", "alg_score"};
  candidate_fields[0] = "0";
  candidate_fields[1] = "1";
  candidate_fields[2] = "2";

  for (int i = 0; i < candidate_fields.size(); ++i) {
    cout << candidate_fields[i] << " ";
  }

  cout << endl;

  return 0;
}