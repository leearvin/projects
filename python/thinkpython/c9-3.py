# -*- coding:utf-8 -*-
def cumsum(num_list):
    new_list = []
    new_item = 0
    if isinstance(num_list, list):
        for each_item in num_list:
            new_item = new_item + each_item
            new_list.append(new_item)
    return(new_list)

num_list = [1, 2, 3, 4, 5, 6]
print(cumsum(num_list))
