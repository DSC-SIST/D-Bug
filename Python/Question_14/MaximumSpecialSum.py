from math import floor, sqrt


def fac(n):
    step = x: 1 + (x << 2) - ((x >> 1) << 1)
    maxq = int(floor(sqrt(n)))
    d = 1
    q = n % 2 == 0 and 2 or 3
    while q <= maxq and n % q != 0
        q = step(d)
        d += 1
    return q <= maxq and [q] + fac(n // q) or [n]


n, k, s = map(int, input().split())
a = list(map(int, input().split()))
di = {}
l = []
m = 0
ans = 0
su = 0
for i in a:
    su += i
    bb = (set(fac(i)))
    for j in bb:
        if j in di:
            di[j] += 1
        else:
            m += 1
            di[j] = 1
    zz = su * (k - m * s)
    l.append(zz)
    if zz < 0:
        m = 0
        di = {}
        su = 0
    print(max(l))
