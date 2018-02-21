print([x for x in range(5) if not x%2])    #[0, 2, 4]
print([x for x in range(5) if x%2 == 0])    #[0, 2, 4]
print(list(filter((lambda x : not x % 2), range(5))))    #[0, 2, 4]
res = []
for x in range(5):
    if x % 2 == 0: res.append(x)
print(res)                      #[0, 2, 4]