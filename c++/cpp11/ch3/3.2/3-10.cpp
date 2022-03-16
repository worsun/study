// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-02-10 13:23:14

#include <iostream>

using namespace std;
// 代码清单3-10
class Info {
 private:
  void InitRest() {}
  int type{1};
  char name{'a'};

 public:
  Info() { InitRest(); }
  Info(int i) : type(i) { InitRest(); }
  Info(char e) : name(e) { InitRest(); }
};

// 代码清单3-11
class Info2 {
 private:
  void InitRest() { type += 1; }

 public:
  int type{1};
  char name{'a'};
  Info2() { InitRest(); }
  Info2(int i) : Info2() { type = i; }
  Info2(char e) : Info2() { name = e; }
};

// 代码清单3-12
class Info3 {
 private:
  void InitRest() { type += 1; }

  Info3(int i, char e) : type(i), name(e) { type += 1; }

 public:
  int type{1};
  char name{'a'};
  Info3() : Info3(1, 'a') {}
  Info3(int i) : Info3(i, 'a') {}
  Info3(char e) : Info3(1, e) {}
};

int main() {
  Info2 f2(3);
  cout << f2.type << endl;

  Info3 f3(3);
  cout << f3.type << endl;
}