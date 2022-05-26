// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:58:51

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

vector<int> nums;

void OneCond(int val) {
  // 传统的for循环
  for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
    if (*iter == val) {
      break;
    }
  }

  // 使用函数指针
  find_if(nums.begin(), nums.end(), bind2nd(equal_to<int>(), val));

  // 使用lambda函数和算法for_each
  find_if(nums.begin(), nums.end(), [=](int i) { return i == val; });
}

int main() {}