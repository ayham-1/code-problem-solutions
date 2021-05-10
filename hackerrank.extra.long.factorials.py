#!/bin/python3

import math
import os
import random
import re
import sys

def fact(num):
    res = 1
    for i in range(num, 1, -1):
        res = res * i;
    return res;

def extraLongFactorials(n):
    print(fact(n))


if __name__ == '__main__':
    n = int(input().strip())
    extraLongFactorials(n)
