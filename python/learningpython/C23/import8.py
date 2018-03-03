import module2
print(module2.name)
print(module2.sys)
print(module2.func)
print(module2.Kclass)
print(list(module2.__dict__.keys()))
"""
Starting to load...
done loading
43
<module 'sys' (built-in)>
<function func at 0x018C9030>
<class 'module2.Kclass'>
['__name__', '__cached__', '__package__', '__doc__', '__file__', 'Kclass', 'sys', '__builtins__', 'func', '__loader__', 'name', '__spec__']
"""
print(module2.__name__) #module2
print(module2.__cached__) #F:\projects\python\learningpython\C23\__pycache__\module2.cpython-35.pyc
print(module2.__package__) #empty
print(module2.__doc__)  # """doc"""
print(module2.__file__) #F:\projects\python\learningpython\C23\module2.py
print(module2.Kclass)  #Kclass in module2
print(list(module2.sys.path))  #内置的sys模块
dir(module2.sys)
print(module2.__builtins__)
print(module2.func)
print(module2.__loader__)
print(module2.name)
print(module2.__spec__)


