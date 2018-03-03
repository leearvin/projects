from small import x, y    #第一次from导入small.py的时候，会运行一次
print(x)                  #2
x = 42
print(x)                  #42
import small
print(small.x)             #2 第二次导入 就是导入方法属性了 不运行
small.x = 42
print(small.x)             #42