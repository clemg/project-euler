from math import ceil, sqrt

n=2000000
primes=n*[True]
for i in range(2, ceil(sqrt(n))):
    if primes[i]:
        for j in range(i**2, n, i): primes[j]=False

t=0
for i in range(2,n):
    if primes[i]: t+=i
print(t)
