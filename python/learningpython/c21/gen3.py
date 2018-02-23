print([x ** 2 for x in range(4)])  #[0, 1, 4, 9]
print((x ** 2 for x in range(4)))   #<generator object <genexpr> at 0x011B3C90>
print(list(x ** 2 for x in range(4))) #[0, 1, 4, 9]
for num in (x ** 2 for x in range(4)):
    print('%s, %s' % (num, num/2.0)) #0, 0.0 , 1, 0.5 ,4, 2.0, 9, 4.5
print(sum(x ** 2 for x in range(4))) #14
print(sorted(x ** 2 for x in range(4))) #[0, 1, 4, 9]
print(sorted((x ** 2 for x in range(4)), reverse=True)) #[9, 4, 1, 0]
import math
print(list(map(math.sqrt, (x ** 2 for x in range(4))))) #[0.0, 1.0, 2.0, 3.0]