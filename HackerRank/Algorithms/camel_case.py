#!/bin/python3

import sys


s = input().strip()
count = 1
for s in s:
    if s.isupper():
        count = count+1
print(count)