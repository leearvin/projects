"""
#a.py
a.py , b.py c.py 
a.py是顶层文件，b.py和c.py都是模块，但是他们不直接运行，模块通常是被其他文件导入的，这些文件想要使用这些模块所定义的工具
"""
import b
print('I am A!' )
b.spam('gumby')
"""
Python import语句，给文件a.py提供了由b.py
"""