#file mytimer1,py
"""
File timeseqs.py（2.6 and 3.0）

timer(spam, 1, 2, a=3,b=4,_reps=1000) calls and times spam(1, 2, a=3)

best(spa,, 1, 2, a=3 , b=4, _reps = 50)

"""
import time, sys
if sys.platform[:3] == 'win':
    timefunc = time.clock    # Use time.clock on Windows
else:
    timefunc = time.time    # Use time.time on some platforms

def trace(*args):           #Or: print args
    pass

def timer(func, *pargs, **kargs):
    """

    :param func:
    :param pargs:
    :param kargs:
    :return:
    """
    _reps = kargs.pop('_reps', 1000)
    trace(func, *pargs, **kargs)
    repslist = range(_reps)
    start = timefunc()
    for i in repslist:
        ret = func(*pargs, **kargs)
    elapsed = timefunc() - start
    return(elapsed, ret)

def best(func, *pargs, **kargs):
    _reps = kargs.pop('_reps', 50)
    best = 2 ** 32
    for i in range(_reps):
        (time, ret) = timer(func, *pargs, _reps=1, **kargs)
        if time < best : best = time
    return (best, ret)