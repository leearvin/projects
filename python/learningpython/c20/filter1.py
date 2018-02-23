print(list(range(-5 ,5)))   #[-5, -4, -3, -2, -1, 0, 1, 2, 3, 4]
print(list(filter((lambda x : x >0), range(-5 , 5)))) #[1, 2, 3, 4]
res = []
for x in range(-5, 5):
    if x > 0:
        res.append(x)
print(res)     #[1, 2, 3, 4]
from functools import reduce
print(reduce((lambda x, y: x + y), [1, 2, 3, 4]))   #10
print(reduce((lambda x, y: x * y), [1, 2, 3, 4]))   #24
L = [1, 2, 3, 4]
res = L[0]
for x in L[1:]:
    res = res + x
print(res)    #10