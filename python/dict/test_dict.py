#!/usr/bin/env python
#coding=utf-8

a = {"1":1, "2":2}
b = {"3":3, "2":4}
d = dict(a, **b)
print d
