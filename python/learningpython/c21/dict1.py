D = {'a':1, 'b':2, 'c':3}
x = iter(D)
print(next(x))
print(next(x))
print(next(x))
for key in D:
    print(key, D[key])
for line in open('myfile.txt'):
    print(line, end='')
print([x * x for x in range(6)]) #[0, 1, 4, 9, 16, 25]
print(x * x for x in range(6)) #<generator object <genexpr> at 0x01E7AD50>
print({x: x * x for x in range(6)}) #dictionary comprehenseion, by 3.0. {0: 0, 1: 1, 2: 4, 3: 9, 4: 16, 5: 25}
print({x * x for x in range(6)}) #{0, 1, 4, 9, 16, 25}
print(set(x * x for x in range(6))) #{0, 1, 4, 9, 16, 25}
print(dict((x, x * x) for x in range(6)))
res = set()
for x in range(6):
    res.add(x * x)
print(res)    #{0, 1, 4, 9, 16, 25}
res = {}
for x in range(6):
    res[x] = x * x
print(res) #{0: 0, 1: 1, 2: 4, 3: 9, 4: 16, 5: 25}
G = ((x, x * x) for x in range(6))
print(next(G))   #(0, 0)
print(next(G))  #(1, 1)
print([x * x for x in range(6) if x % 2 == 0]) #[0, 4, 16]
print({x * x for x in range(6) if x % 2 == 0}) #{0, 16, 4} but sets are not
print({x: x * x for x in range(6) if x % 2 == 0}) #{0: 0, 2: 4, 4: 16} Nerther are dict key
print([x + y for x in [1, 2, 3] for y in [4, 5, 6]]) #[5, 6, 7, 6, 7, 8, 7, 8, 9]
print({x + y for x in [1, 2, 3] for y in [4, 5 ,6]}) #{8, 9, 5, 6, 7} 不能有重复
print({x : y for x in [1, 2, 3] for y in [4, 5, 6]}) #{1: 6, 2: 6, 3: 6}
print({x + y for x in 'ab' for y in 'cd'}) #{'ad', 'bd', 'bc', 'ac'}
print({x + y:(ord(x), ord(y)) for x in 'ab' for y in 'cd'}) #{'ac': (97, 99), 'bd': (98, 100), 'ad': (97, 100), 'bc': (98, 99)}
print({k * 2 for k in ['spam', 'ham', 'sausage'] if k[0] == 's'}) #{'spamspam', 'sausagesausage'}
print({k.upper() for k in ['spam', 'ham', 'sausage'] if k[0] == 's'}) #{'SAUSAGE', 'SPAM'}