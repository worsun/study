// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 22:07:31

#include <iostream>
#include <string>

using namespace std;
static char macBuffer[1024 * 6] = {0};

class MyClass {
 public:
  MyClass(std::string b) { this->a = b; }

  ~MyClass() { std::cout << "~MyClass" << std::endl; }

  std::string GetA() { return a; }
  std::string a;
};

int main() {
  MyClass* ptMyClass = NULL;
  char* p = (char*)malloc(sizeof(MyClass) + sizeof(int));
  ptMyClass = new (p) MyClass("Hello world");
  std::cout << "&ptMyClass ==>" << ptMyClass << std::endl;
  std::cout << "&p         ==>" << (int*)p << std::endl;

  std::cout << "ptMyClass::a = " << ptMyClass->GetA() << std::endl;
  ptMyClass->~MyClass();
  std::cout << "ptMyClass::a = " << ptMyClass->GetA() << std::endl;
  free(p);

  std::cout << "******************************" << std::endl;
  ptMyClass = new (macBuffer) MyClass("");
  std::cout << "&ptMyClass ==>" << ptMyClass << std::endl;
  std::cout << "&macBuffer ==>" << (int*)(macBuffer) << std::endl;
  ptMyClass->~MyClass();
  // delete ptMyClass;  //    2
}