def mysum(L):
    return L[0] if len(L) == 1 else L[0] + mysum(L[1:])   #Any type, assume one

print(mysum([1, 2, 3, 4, 5]))
print(mysum(['a', 'b', 'c']))      #support string