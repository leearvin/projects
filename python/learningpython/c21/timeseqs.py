"""
File timeseqs.py test abs(x)
"""
import sys, mytimer
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
for test in (forloop, listComp, mapCall, genExpr, genFunc):
    elapsed, result = mytimer.timer(test)
    print('_' * 33)
    print('%9s: %.5f => [%s>>>%s]' % (test.__name__, elapsed, result[0], result[-1]))
"""
3.5.1 (v3.5.1:37a07cee5969, Dec  6 2015, 01:38:48) [MSC v.1900 32 bit (Intel)]
_________________________________
  forloop: 1.32628 => [0>>>9999]
_________________________________
 listComp: 0.78002 => [0>>>9999]
_________________________________
  mapCall: 0.67683 => [0>>>9999]
_________________________________
  genExpr: 0.99682 => [0>>>9999]
_________________________________
  genExpr: 0.99021 => [0>>>9999]
_________________________________
  genFunc: 0.99951 => [0>>>9999]
  
  3.5.1 (v3.5.1:37a07cee5969, Dec  6 2015, 01:38:48) [MSC v.1900 32 bit (Intel)]
_________________________________
  forloop: 1.35997 => [0>>>9999]
_________________________________
 listComp: 0.81248 => [0>>>9999]
_________________________________
  mapCall: 0.73529 => [0>>>9999]
_________________________________
  genExpr: 1.03857 => [0>>>9999]
_________________________________
  genFunc: 1.06527 => [0>>>9999]
"""