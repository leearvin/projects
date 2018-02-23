print([x ** 2 for x in range(10) if not x % 2]) # [0, 4, 16, 36, 64]
print(list(map((lambda x : x ** 2), filter((lambda x : not x % 2), range(10))))) #[0, 4, 16, 36, 64]
res = [x + y for x in [0, 1, 3] for y in [100, 200, 300]]
print(res) #[100, 200, 300, 101, 201, 301, 103, 203, 303]
res = []
for x in [0 , 1, 2]:
    for y in [100, 200,300]:
        res.append(x + y)
print(res) #[100, 200, 300, 101, 201, 301, 102, 202, 302]
print(list([x + y for x in 'spam' for y in 'SPAM'])) #['sS', 'sP', 'sA', 'sM', 'pS', 'pP', 'pA', 'pM', 'aS', 'aP', 'aA', 'aM', 'mS', 'mP', 'mA', 'mM']
print([(x, y) for x in range(5) if not x % 2 for y in range(5) if not y % 2]) #[(0, 0), (0, 2), (0, 4), (2, 0), (2, 2), (2, 4), (4, 0), (4, 2), (4, 4)]
res = []
for x in range(5):
    if not x % 2:
        for y in range(5):
            if not y % 2:
                res.append((x, y))
print(res) #[(0, 0), (0, 2), (0, 4), (2, 0), (2, 2), (2, 4), (4, 0), (4, 2), (4, 4)]


