print(''.join(str(e)for e in list(__import__('itertools').permutations([0,1,2,3,4,5,6,7,8,9]))[int(1e6)-1]))
