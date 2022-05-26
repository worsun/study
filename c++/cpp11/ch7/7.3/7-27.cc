// Copyright (c) 2022 Tencent Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-26 23:45:19

int main() {
  int val;
  // auto const_val_lambda = [=]() { val = 3; };  //编译失败，在const的lambda中修改常量

  // 非const的lambda，可以修改常量
  auto mutable_val_lambda = [=]() mutable { val = 3; };

  // 依然是const的lambda，不过没有改动引用本身
  auto const_ref_lambda = [&]() { val = 3; };

  // 依然是const的lambda，通过参数传递val
  auto const_parma_lambda = [&](int v) { v = 3; };
  const_parma_lambda(val);

  return 0;
}