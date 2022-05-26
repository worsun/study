// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:58:51

#include <algorithm>
#include <vector>
using namespace std;

vector<int> nums;
vector<int> largeNums;

class LNums {
 public:
  LNums(int u) : ubound(u) {}

  void operator()(int i) const {
    if (i > ubound) {
      largeNums.push_back(i);
    }
  }

 private:
  int ubound;
};

void Above(int ubound) {
  // 传统的for循环
  for (auto iter = nums.begin(); iter != nums.end(); ++iter) {
    if (*iter >= ubound) {
      largeNums.push_back(*iter);
    }
  }

  // 使用函数指针
  for_each(nums.begin(), nums.end(), LNums(ubound));

  // 使用lambda函数和算法for_each
  for_each(nums.begin(), nums.end(), [=](int i) {
    if (i > ubound) {
      largeNums.push_back(i);
    }
  });
}

int main() {}