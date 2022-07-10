// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-07-07 11:25:23

#include <iostream>
#include <type_traits>

template <typename T>
void func(T t) {
  std::cout << std::is_integral<T>::value << std::endl;
}

template <typename T>
void func2(const T& t) {
  std::cout << std::is_integral<T>::value << std::endl;
}

template <typename T>
void func3(const T& t) {
  std::cout << "start " << std::endl;
  std::cout << std::is_same<typename std::decay<T>::type, int>::value << std::endl;
  std::cout << std::is_same<typename std::decay<T>::type, char*>::value << std::endl;
  std::cout << std::is_same<typename std::decay<T>::type, std::string>::value << std::endl;
  std::cout << "end " << std::endl;
}

template <typename T>
struct is_strings {
  operator bool() { return false; }
};

template <>
struct is_strings<std::string> {
  operator bool() { return true; }
};

template <>
struct is_strings<char*> {
  operator bool() { return true; }
};

template <typename T>
void func4(const T& t) {
  std::cout << "func4 start " << std::endl;
  std::cout << std::boolalpha;
  std::cout << is_strings<T>() << std::endl;
  std::cout << "func4 end " << std::endl;
}

int main() {
  // int a = 1;
  // const int b = 1;
  // int& c = a;
  // int* d = &a;

  // func(a);
  // func(b);
  // func(c);
  // func(d);
  // func(5);
  // func2(4);
  // int m = 1;
  // func(std::move(m));
  // int n = 21;
  // func(std::move(n));

  // func3(a);
  // func3(b);
  // func3(c);
  // func3(d);
  // func3(5);
  func3("test");
  std::string name = "wor";
  func3(name);
  char* s = "name";
  func3(s);

  func4("test");
  func4(name);
}