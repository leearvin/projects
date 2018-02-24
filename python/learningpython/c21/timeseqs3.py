"""
使用自定义函数再次测试
"""
import sys, mytimer1
#print(mytimer.timer.__doc__)

reps = 10000
repslist = range(reps)

def forloop():
    res = []
    for x in repslist:
        res.append(x + 10)
    return res

def listComp():
    return [x + 10 for x in repslist]

def mapCall():
    return list(map(lambda x: x + 10, repslist))      #use list in Python3.0

def genExpr():
    return list(x + 10 for x in repslist)  #list forces results of generator expression

def genFunc():
    def gen():
        for x in repslist:
            yield x + 10
    return list(gen())

print(sys.version)
for tester in (mytimer1.timer, mytimer1.best):
    print('<%s>'%tester.__name__)
    for test in (forloop, listComp, mapCall, genExpr, genFunc):
        elapsed, result = mytimer1.timer(test)
        print('_' * 35)
        print('%-9s: %.5f => [%s...%s]' % (test.__name__, elapsed, result[0], result[-1]))
"""
3.5.1 (v3.5.1:37a07cee5969, Dec  6 2015, 01:38:48) [MSC v.1900 32 bit (Intel)]
<timer>
___________________________________
forloop  : 1.31363 => [10...10009]
___________________________________
listComp : 0.74522 => [10...10009]
___________________________________
mapCall  : 1.69120 => [10...10009]
___________________________________
genExpr  : 0.94526 => [10...10009]
___________________________________
genFunc  : 0.95439 => [10...10009]
<best>
___________________________________
forloop  : 1.30397 => [10...10009]
___________________________________
listComp : 0.72743 => [10...10009]
___________________________________
mapCall  : 1.68330 => [10...10009]
___________________________________
genExpr  : 0.94685 => [10...10009]
___________________________________
genFunc  : 0.95256 => [10...10009]
"""