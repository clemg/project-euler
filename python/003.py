n=600851475143
def isPrime(x):
    if not any(x%i==0 for i in range(2,x)): return True
    return False

while not isPrime(n):
    i=2
    while not n%i==0: i+=1
    n=n//i

print(n)
