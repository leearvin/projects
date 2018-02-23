
S1 = 'abc'
S2 = 'xyz123'
#zip pirs items from iterables
print(list(zip(S1, S2)))    #[('a', 'x'), ('b', 'y'), ('c', 'z')]
#Single sequence: I-ary tuples
print(list(zip([-2, -1, 0, 1, 2]))) #[(-2,), (-1,), (0,), (1,), (2,)]
#N sequence N-ary tuples
print(list(zip([1, 2, 3], ['a', 'b' , 'c' , 'd']))) #[(1, 'a'), (2, 'b'), (3, 'c')]
#Single sequence: I-ary function
print(list(map(abs, [-2, -1, 0 , 1, 2]))) #[2, 1, 0, 1, 2]
#N sequence N-ary tuples
print(list(map(pow, [1, 2, 3], [2, 3, 4, 5])))   #[1, 8, 81]
# map(func, seqs...) workalike with zip
"""
def mymap(func, *seqs):
    res = []
    for args in zip(*seqs): #所有参数都传入zip进行分割组合
        print(args) #不加星就是传递的是一个元祖 加星就是传递的是元祖的参数解包（独立位置的元祖元组）
        res.append(func(*args)) #传递的是元祖解包后多个元素参数，而不是一个元祖
    return res
print(mymap(abs, [-2, -1, 0, 1, 2]))  #[2, 1, 0, 1, 2]
print(mymap(pow, [1, 2, 3], [2, 3, 4, 5])) #[1, 8, 81]
"""
"""
# using a list comprehension:
def mymap(func, *seqs):
    return [func(*args) for args in zip(*seqs)]
print(mymap(abs, [-2, -1, 0, 1, 2]))  #[2, 1, 0, 1, 2]
print(mymap(pow, [1, 2, 3], [2, 3, 4, 5])) #[1, 8, 81]
"""
"""
def mymap(func, *seqs):
    res = []
    for args in zip(*seqs):
        yield func(*args)
print(list(mymap(abs, [-2, -1, 0, 1, 2])))  #[2, 1, 0, 1, 2]
print(list(mymap(pow, [1, 2, 3], [2, 3, 4, 5]))) #[1, 8, 81]
"""
def mymap(func, *seqs):
    return (func(*args) for args in zip(*seqs))    #返回值用圆括号包括--生成器表达式
print(list(mymap(abs, [-2, -1, 0, 1, 2])))  #[2, 1, 0, 1, 2]
print(list(mymap(pow, [1, 2, 3], [2, 3, 4, 5]))) #[1, 8, 81]

