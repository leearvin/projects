def gensquares(N):
    for i in range(N):
        yield i ** 2     #Resume the later
for i in gensquares(5):      #Resume the function
    print(i, end=' : ')         #0 : 1 : 4 : 9 : 16 : print last yield value
x = gensquares(4)
print(x)    #<generator object gensquares at 0x021D3C90>
print([y for y in gensquares(4)])  #[0, 1, 4, 9]
print(next(x))  #0
print(next(x))  #1
print(next(x))  #2
print(next(x))  #3
print(next(x))  #0
