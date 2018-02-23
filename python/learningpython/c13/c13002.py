x = [1, 2, 3, 4, 5, 6, 7]
while x:
    if macth(x[0]):
        print('Ni')
        break
    x = x[1:]
else:
    print('Not found')
