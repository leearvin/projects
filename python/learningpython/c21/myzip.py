def myzip(*args):
    #print(args) #('abc', '12345')
    iters = list(map(iter, args))
    while iters:
        res = [next(i) for i in iters]
        yield tuple(res)
print(list(myzip('abc', '12345')))