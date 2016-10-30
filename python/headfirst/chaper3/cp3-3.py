#!usr/bin/
import os
print(os.getcwd())
os.chdir('E:\projects\projects\python\headfirst\chaper3')
print(os.getcwd())
if os.path.exists('E:/projects/projects/python/headfirst/chaper3/.txt'):
    the_file = open('text.txt')
    the_file.seek(0)
    for each_line in the_file:
        if each_line.find(":") != -1:
            (role, line_spoken) = each_line.split(":", 1)
            print(role, end="")
            print("\t", end="")
            print(line_spoken)
    the_file.close()
else:
    print("The data file is not exists.")
