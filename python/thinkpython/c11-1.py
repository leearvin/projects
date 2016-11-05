# -*- coding:utf-8 -*-
# dict learn


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


print('Input a string , and will count letters in the string:')
str = input()
dict1 = histogram(str)
print_dict(dict1)
