def solve():
    for a in range(1000):
        for c in range(a,1000):
            for b in range(a,c):
                if a+b+c==1000 and a**2+b**2==c**2:
                    print(f"a: {a}\nb: {b}\nc: {c}\na*b*c: {a*b*c}")
                    return
solve()
