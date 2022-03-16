// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-11 12:40:54

struct Student {
  bool gender;
  int age;

  Student(bool g, int a) : gender(g), age(a) {}
};

union T {
  Student s;
  int id;
  char name[10];
};

int main() {}