"""
File timeseqs1.py test x + 1
"""
import sys, mytimer
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
for test in (forloop, listComp, mapCall, genExpr, genFunc):
    elapsed, result = mytimer.timer(test)
    print('_' * 33)
    print('%9s: %.5f => [%s>>>%s]' % (test.__name__, elapsed, result[0], result[-1]))
"""
3.5.1 (v3.5.1:37a07cee5969, Dec  6 2015, 01:38:48) [MSC v.1900 32 bit (Intel)]
_________________________________
  forloop: 1.26072 => [10>>>10009]
_________________________________
 listComp: 0.69568 => [10>>>10009]
_________________________________
  mapCall: 1.59095 => [10>>>10009]
_________________________________
  genExpr: 0.90910 => [10>>>10009]
_________________________________
  genFunc: 0.90731 => [10>>>10009]
"""