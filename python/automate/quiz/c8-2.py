# -*- coding:utf-8 -*-
# c8 - 2.py

import os
filesDirectory = os.path.join(os.getcwd(), 'filefolder', 'hello.txt')
fileHandle = open(filesDirectory)
# print(os.path.isfile(filesDirectory))
# fileContent = fileHandle.read()
fileLines = fileHandle.readlines()


print(fileLines)
fileHandle.close()

writeHandle = open(filesDirectory, 'a')
writeHandle.write("hello.txt10! \n")
writeHandle.close()
