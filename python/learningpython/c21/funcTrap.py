x = 99
def selector():
    import __main__
    print(__main__.x)  #操作的是全局变量
    x = 88              #定义了一个本地变量，因为没有global宣告，所以不影响全局变量
    print(x)
selector()
print(x)            #没有被函数内的定义影响到x的值
"""
99
88
99
"""