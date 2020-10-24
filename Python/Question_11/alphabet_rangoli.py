"""
    Question 11:
    You are given an integer, _N_ . 
    Your task is to print an alphabet rangoli of size .

    Difficulty Level : EASY
"""

import string
alpha = string.ascii_lowercase

n = int(input()
L = []
for i in range(n):
    s = -".join(alpha[i:n])
    L.append((s[::-1]+s[1]).center(4*n-3, "-"))
print('\n'join(L[:0:-1]+L))
