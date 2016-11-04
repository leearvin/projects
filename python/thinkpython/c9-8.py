# -*- coding:utf-8 -*-
def has_deplicates(input_list):
    new_sorted_list = sorted(input_list)
    print(new_sorted_list)
    for i in range(len(new_sorted_list) - 1):
        print(new_sorted_list[i], end=' ')
        print(new_sorted_list[i + 1])
        if new_sorted_list[i] == new_sorted_list[i + 1]:

            return(True)
    return(False)

list1 = [1, 2, 3, 4, 5, 6, 7, 8]
print(has_deplicates(list1))
