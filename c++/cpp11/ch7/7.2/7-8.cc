// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 21:32:21

#include <iostream>
#include <type_traits>

using namespace std;

class TwoCstor {
 public:
  TwoCstor() = default;
  TwoCstor(int i) : data(i) {}

 private:
  int data;
};

int main() {
  cout << is_pod<TwoCstor>::value << endl;
  return 0;
}