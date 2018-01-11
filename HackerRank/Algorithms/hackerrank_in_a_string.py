#!/bin/python3

import sys
import re

def hackerrankInString(s):
    match = re.search(r'.*?'.join(list("hackerrank")), s.lower())
    if match:
        return "YES"
    else:
        return "NO"

if __name__ == "__main__":
    q = int(input().strip())
    for a0 in range(q):
        s = input().strip()
        result = hackerrankInString(s)
        print(result)
