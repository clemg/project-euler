from math import sqrt
def getNbDivisors(n):
    return 2*sum(n%i==0 for i in range(2,int(sqrt(n))+1))

i=1
while getNbDivisors((i*(i+1))/2)<500:
    i+=1
print((i*(i+1))/2)
