"""

"""
import sys, mytimer2
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
for tester in (mytimer2.timer, mytimer2.best):
    print('<%s>'%tester.__name__)
    for test in (forloop, listComp, mapCall, genExpr, genFunc):
        elapsed, result = mytimer2.timer(test)
        print('_' * 35)
        print('%-9s: %.5f => [%s...%s]' % (test.__name__, elapsed, result[0], result[-1]))
"""
<timer>
___________________________________
forloop  : 1.31366 => [10...10009]
___________________________________
listComp : 0.74578 => [10...10009]
___________________________________
mapCall  : 1.66627 => [10...10009]
___________________________________
genExpr  : 0.96341 => [10...10009]
___________________________________
genFunc  : 0.96975 => [10...10009]
<best>
___________________________________
forloop  : 1.30363 => [10...10009]
___________________________________
listComp : 0.74544 => [10...10009]
___________________________________
mapCall  : 1.66623 => [10...10009]
___________________________________
genExpr  : 0.96968 => [10...10009]
___________________________________
genFunc  : 0.97579 => [10...10009]
"""