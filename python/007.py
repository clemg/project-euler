from math import sqrt
def isPrime(x):
    if any(x%i==0 for i in range(2,int(sqrt(x)+1))): return False
    return True

primes=[]
i=3
while len(primes)<10000:
    if isPrime(i): primes.append(i)
    i+=2
print(primes[-1])
