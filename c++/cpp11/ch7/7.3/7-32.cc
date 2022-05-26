// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:58:51

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

vector<int> nums;

void OneCond(int low, int high) {
  // 传统的for循环
  for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
    if (*iter >= low && *iter < high) {
      break;
    }
  }

  // 使用函数指针, compose2 为boost库仿函数
  find_if(nums.begin(), nums.end(),
          compose2(logical_and<bool>(), bind2nd<less<int>>(), high, bind2nd<greater_equal<int>>(),
                   low));

  // 使用lambda函数和算法for_each
  find_if(nums.begin(), nums.end(), [=](int i) { return i >= low && i < high; });
}

int main() {}