# -*- coding:utf-8 -*-
#Todo: check prama is num
def add_each_element_in_list(input_list):
    item_sum = 0
    for each_item in input_list:
        if isinstance(each_item, list):
            item_sum = item_sum + add_each_element_in_list(each_item)
        else:
            item_sum = item_sum + each_item
    return item_sum
