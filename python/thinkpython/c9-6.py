# -*- coding:utf-8 -*-
def is_sorted(input_list):
    sort_list = sorted(input_list)
    for i in range(len(sort_list) - 1):
        if sort_list[i] != input_list[i]:
            return(False)
    return(True)

list1 = ['a', 'b', 'c', 'd', 'e', 'a']
print(is_sorted(list1))
