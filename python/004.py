maxPal=0
for i in reversed(range(100,1000)):
    for j in reversed(range(100,1000)):
        n=str(i*j)
        if n==n[::-1]:
            maxPal=max(maxPal, int(n))
print(maxPal)
