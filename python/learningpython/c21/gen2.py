def buildsquares(n):        #一次性构建所有的值的列表
    res = []
    for i in range(n): res.append(i ** 2)
    return res
for x in buildsquares(5):
    print(x, end=' : ')  #0 : 1 : 4 : 9 : 16 :
for x in [n **2 for n in range(5)]:      #等效的for循环
    print(x, end=' : ') #0 : 1 : 4 : 9 : 16 :
for x in map((lambda x: x ** 2), range(5)):   #等效的map+lambda
    print(x, end=' : ') #0 : 1 : 4 : 9 : 16 :