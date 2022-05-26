// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-27 00:37:18

#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void Stat(vector<int>& v) {
  int errors;
  int score;
  auto print = [&] { cout << "Errors: " << errors << endl << "Score: " << score << endl; };

  errors = accumulate(v.begin(), v.end(), 0);
  score = accumulate(v.begin(), v.end(), 100, minus<int>());
  print();

  errors = 0;
  score = 100;
  for_each(v.begin(), v.end(), [&](int i) {
    errors += i;
    score -= i;
  });
  print();
}

int main() {
  vector<int> v(10);
  generate(v.begin(), v.end(), [] { return rand() % 10; });
  Stat(v);
  return 1;
}