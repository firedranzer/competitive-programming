#!/bin/python3

import sys

def hackerlandRadioTransmitters(x, k):
    count = 0
    x.sort()
    for i in range(0, n):
        count = count + 1
        loc = x[i] + k
        while(i<n and x[i]<=loc):
            i = i+1
        loc = x[i-1] + k;
        while(i<n and x[i]<=loc):
            i = i+1
    return count

if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    x = list(map(int, input().strip().split(' ')))
    result = hackerlandRadioTransmitters(x, k)
    print(result)
