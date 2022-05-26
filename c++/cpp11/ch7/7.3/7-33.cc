// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-27 00:26:14

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums;

void Add(const int val) {
  auto print = [&] {
    for (auto s : nums) {
      cout << s << '\t';
    }
    cout << endl;
  };

  // 传统for循环方式
  for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
    *iter = *iter + val;
  }
  print();

  // 试一试for_each内置仿函数
  for_each(nums.begin(), nums.end(), bind2nd(plus<int>(), val));
  print();

  // 试一试for_each内置仿函数
  transform(nums.begin(), nums.end(), nums.begin(), bind2nd(plus<int>(), val));
  print();

  // 不过在lambda的支持下，我们还是可以只用for_each
  for_each(nums.begin(), nums.end(), [=](int& i) { i += val; });
  print();
}

int main() {
  for (int i = 0; i < 10; i++) {
    nums.push_back(i);
  }
  Add(10);
  return 1;
}