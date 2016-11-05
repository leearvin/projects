# -*- coding:utf-8 -*-
# dict learn


def reverse_lookup(input_dict, value):
    for each_key in input_dict:
        if input_dict[each_key] == value:
            return(each_key)
    raise LookupError('value does not appear in the dict.')

dict1 = {'aaa': 111, "bbb": 222}
print(reverse_lookup(dict1, 333))
