# -*- coding:utf-8 -*-
def middle_list(input_list):
    if isinstance(input_list, list):
        if len(input_list) == 0:
            pass
        elif len(input_list) == 1:
            input_list.pop(0)
        else:
            input_list.pop(len(input_list) - 1)
            input_list.pop(0)
        return(None)
    return("Error: input is not a list.")

str = [1, 2, 3, 4, 5]
print(middle_list(str))
print(str)
