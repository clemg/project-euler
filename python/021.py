def getDivSum(n):
    return sum(i for i in range(1,int(n/2)+1) if n%i==0)

# you gotta love python
print(sum(i for i in range(2,10000) if i!=getDivSum(i) and i==getDivSum(getDivSum(i))))
