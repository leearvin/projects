# -*- coding:utf-8 -*-
file = open('words.txt')
line = file.readline()
for word in line:
    word = word.strip()
    print(word)
