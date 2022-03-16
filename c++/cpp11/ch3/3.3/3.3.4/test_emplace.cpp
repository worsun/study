// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-08 21:26:42

#include <iostream>
#include <vector>

class A {
 private:
  int* a;

 public:
  A(int in) {
    a = new int(in);
    std::cout << "normal construct" << std::endl;
  }
  A(A&& in) {
    a = in.a;
    in.a = nullptr;
    std::cout << "move construct" << std::endl;
  }

  A(const A& in) {
    a = new int(*in.a);
    std::cout << "copy construct" << std::endl;
  }
  ~A() { delete a; };
};

class B {
 private:
  int* a;

 public:
  B(int in) { a = new int(in); }
  B(const B& in) {
    a = new int(*in.a);
    std::cout << "copy construct" << std::endl;
  }
  ~B() { delete a; };
};

int main() {
  std::vector<A> v_a;
  // v_a.push_back(A(1));
  v_a.emplace_back(2);
  v_a.push_back(std::move(A(1)));

  std::cout << "------------------" << std::endl;

  // std::vector<B> v_b;
  // v_b.push_back(B(1));
  // v_b.emplace_back(std::move(B(2)));
}