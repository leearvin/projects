# -*- coding:utf-8 -*-
import shutil
import os
# import send2trash
# os.chdir('e:\\projects\\projects\\python\\automate')
# currentDir = os.getcwd() + '\\'
# shutil.copy(currentDir + 'note.txt', currentDir + 'old_note.txt')
# print(shutil.copy(currentDir + 'note.txt',
#                   currentDir + '\\filefolder\\' + 'old_note.txt'))
# print(shutil.copytree(currentDir, currentDir + '\\bak'))
# for fileName in os.listdir():
#     if fileName.endswith('.txt'):
# os.unlink(fileName)
#         print(fileName)
# testFileHandle = open('testFile.txt', 'a')  # create a new file
# testFileHandle.write('test test test')
# testFileHandle.close()
for folder, subfolders, fileNames in os.walk('e:\\projects\\'):
    print(folder)
    for subfolder in subfolders:
        print(subfolder)
    for fileName in fileNames:
        print(fileName)
