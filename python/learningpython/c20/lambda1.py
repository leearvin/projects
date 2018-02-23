def f1(x): return x ** 2
def f2(x): return x ** 3
def f3(x): return x ** 4
L = [f1, f2, f3]
for f in L:
    print(f(2))
print(L[0](3))
