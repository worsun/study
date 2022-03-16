// Copyright (c) 2020 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-03-13 18:33:15

namespace ns_adl {
struct A {};
void ADLFunc(A a) {}
}  // namespace ns_adl

int main() {
  ns_adl::A a;
  ADLFunc(a);
}