#file mytimer3,py
"""
File timeseqs.py（3.x only）
Use 3.0 keyword-only default arguments, instead of ** and dict pops,
No need to hoist range() out of test in 3.0: a generator , not 2 list
"""
import time, sys
trace = lambda *args: None   # print
timefunc = time.clock if sys.platform == 'win32' else time.time

def timer(func, *pargs, _reps=1000, **kargs):
    """

    :param func: call function name
    :param pargs:
    :param _reps:
    :param kargs:
    :return:
    """
    trace(func, pargs, kargs, _reps)
    start = timefunc()
    _reps = kargs.pop('_reps', 1000)
    for i in range(_reps):
        ret = func(*pargs, **kargs)
    elapsed = timefunc() - start
    return (elapsed, ret)

def best(func, *pargs, _reps=50, **kargs):
    best = 2 ** 32
    for i in range(_reps):
        (time, ret) = timer(func, *pargs, _reps=1, **kargs)
        if time < best : best = time
    return (best, ret)