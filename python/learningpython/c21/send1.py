def gen():
    for i in range(4):
        x = yield i
        print(x)
G = gen()
print(next(G))  #0
print(G.send(77)) # 77 1
print(G.send(88)) # 88 2
print(next(G))  #None 3



