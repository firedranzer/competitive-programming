#!/bin/python3

import sys

def hackerlandRadioTransmitters(x, k):
    count = 1
    x.sort()
    begin = x[0]
    for i in range(0, n):
        if(x[i]>begin+2*k):
            count = count + 1;
            begin = x[i]
    
    return count

if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    x = list(map(int, input().strip().split(' ')))
    result = hackerlandRadioTransmitters(x, k)
    print(result)
