X = 1
import mod2           #2,3 第一次导入的时候 运行mod2,py
print(X, end=' ')        #1 , My local X
print(mod2.X, end=' ')     #2  mod2,X
print(mod2.mod3.X, end=' ')  #3 mod2内的mod3.X
