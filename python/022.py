names=open("../files/names.txt",'r').read().replace('"','').split(',')
print(sum((k+1)*(sum(ord(l)-(ord('A')-1) for l in v)) for k,v in enumerate(sorted(names))))
