#file mytimer,py

import time
reps = 1000
repslist = range(reps)

def timer(func, *pargs, **kargs):
    """
      simple timer tool function
      :param func:需要计时的函数方法
      :param pargs:函数的参数
      :param kargs:函数的字典参数
      :return:时间 和 函数
      """
    start = time.clock()
    for i in repslist:
        ret = func(*pargs, **kargs)
    elapsed = time.clock() - start
    return(elapsed, ret)