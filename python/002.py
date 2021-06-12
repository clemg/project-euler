prev=[0,1]
while prev[-1]<int(4*10e5): prev.append(sum(prev[-2:]))
print(sum(i for i in prev if i%2==0))
