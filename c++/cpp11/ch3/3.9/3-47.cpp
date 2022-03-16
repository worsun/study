// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-13 18:05:05

#include <iostream>
using namespace std;

namespace Jim {
namespace Basic {
struct Knife {
  Knife() { cout << "Knife in Basic." << endl; }
  class CorkScrew {};
};

}  // namespace Basic

namespace Toolkit {
template <typename T>
class SwissArmyKnife {};
}  // namespace Toolkit

namespace Other {
// Knife b;  // 无法编译通过
struct Knife {
  Knife() { cout << "Knife in Other" << endl; }
};

Knife c;
Basic::Knife k;
}  // namespace Other
}  // namespace Jim
using namespace Jim;

int main() { Toolkit::SwissArmyKnife<Basic::Knife> sknife; }