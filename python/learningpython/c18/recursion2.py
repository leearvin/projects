def mysum(L):
    return 0 if not L else L[0] + mysum(L[1:])     # Use ternary expression

print(mysum([1, 2, 3, 4, 5]))
#print(mysum(['a', 'b', 'c']))      #Not support string