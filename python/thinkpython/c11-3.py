# -*- coding:utf-8 -*-
# dict learn
# dict invert ,  if the value >1 , key append into a list


def histogram(s):
    d = dict()
    for c in s:
        if c not in d:
            d[c] = 1
        else:
            d[c] += 1

    return d


def print_dict(h):
    for c in h:
        print(c, h[c])


def invert_dict(input_dict):
    inverse_dict = dict()
    for each_key in input_dict:
        value = input_dict[each_key]
        if value not in inverse_dict:
            # value is list , for append for last
            inverse_dict[value] = [each_key]
        else:
            inverse_dict[value].append(each_key)
    return(inverse_dict)

hist = histogram('aabbccdddddddd')
inverse_dict = invert_dict(hist)
print(inverse_dict)
