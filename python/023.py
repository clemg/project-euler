from math import ceil, sqrt
abNums=list(i for i in range(1,28124) if sum(e for e in range(1,1+ceil(i/2)) if i%e==0) > i)

def isAbSum(n):
    for num in abNums:
        if num>n-num: break
        if n-num in abNums: return True
    return False

#very slow since not optimized at all
total = 23123*23124/2
print(total-sum(i for i in range(23124) if isAbSum(i)))
