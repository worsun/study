// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-18 21:37:57

class OuterType {
  struct InnerType {
    int i;
  };
  InnerType GetInner();
  InnerType it;
};

auto OuterType::GetInner() -> InnerType { return it; }

int main() {}