# -*- coding:utf-8 -*-
def sum_all(*args):
    sum_all = 0
    for each_key in args:
        sum_all += args[each_key - 1]
    return(sum_all)
print(sum_all(1, 2, 3, 4))
