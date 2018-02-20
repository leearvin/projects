def mysum(L):
    first, *rest = L
    return first if not rest else first + mysum(rest)  #Use Python3.0 ext seq assgin

print(mysum([1, 2, 3, 4, 5]))
print(mysum(['a', 'b', 'c']))      #support string