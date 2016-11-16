# -*- coding:utf-8 -*-
import shutil
import os
os.chdir('e:\\projects\\projects\\python\\automate')
currentDir = os.getcwd() + '\\'
shutil.copy(currentDir + 'note.txt', currentDir + 'old_note.txt')
print(shutil.copy(currentDir + 'note.txt',
                  currentDir + '\\filefolder\\' + 'old_note.txt'))
print(shutil.copytree(currentDir, currentDir + '\\bak'))
for fileName in os.listdir():
    if fileName.endswith('.txt'):
        # os.unlink(fileName)
        print(fileName)
