L = [1, 2, 3, 4, 5]
sum = 0
while L:
    sum += L[0]
    L = L[1:]
print(sum)