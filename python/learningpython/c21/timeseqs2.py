
import sys, mytimer1
#print(mytimer.timer.__doc__)

reps = 10000
repslist = range(reps)

def forloop():
    res = []
    for x in repslist:
        res.append(abs(x))
    return res

def listComp():
    return [abs(x) for x in repslist]

def mapCall():
    return list(map(abs, repslist))      #use list in Python3.0

def genExpr():
    return list(abs(x) for x in repslist)  #list forces results of generator expression

def genFunc():
    def gen():
        for x in repslist:
            yield abs(x)
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
forloop  : 1.36708 => [0...9999]
___________________________________
listComp : 0.81501 => [0...9999]
___________________________________
mapCall  : 0.69494 => [0...9999]
___________________________________
genExpr  : 1.00908 => [0...9999]
___________________________________
genFunc  : 1.01596 => [0...9999]
<best>
___________________________________
forloop  : 1.34560 => [0...9999]
___________________________________
listComp : 0.77629 => [0...9999]
___________________________________
mapCall  : 0.69289 => [0...9999]
___________________________________
genExpr  : 1.02565 => [0...9999]
___________________________________
genFunc  : 1.02071 => [0...9999]
"""