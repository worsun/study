// Copyright (c) 2022 worusn(personal) Inc.  All rights reserved.
// Author: worsunwang
// Date: 2022-05-11 22:59:06

#include <stdarg.h>
#include <stdio.h>

double SumOfFloat(int count, ...) {
  va_list ap;
  double sum = 0;
  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    sum += va_arg(ap, double);
  }

  va_end(ap);
  return sum;
}

int main() {
  printf("%f\n", SumOfFloat(3, 1.2f, 3.4, 5.6));
  return 0;
}