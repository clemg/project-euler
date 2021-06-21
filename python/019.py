from calendar import isleap
t=0

day=5
for y in range(1901,2001):
    DpM = [30,28 if isleap(y) else 27,30,29,30,29,30,30,29,30,29,30]
    for days in DpM:
        if day==0: t+=1
        day=(day+days)%7
        
print(t)
