def collatz(n):
    t=1
    while n!=1:
        if n%2==0: n/=2
        else: n=n*3+1
        t+=1
    return t

maxi=0
maxCollatz=0
for i in range(1,1000000):
    if (e:=collatz(i))>maxCollatz:
        maxCollatz=e
        maxi=i

print(maxi)
        
