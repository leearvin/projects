#!usr/bin/
import os
print(os.getcwd())
os.chdir('E:\projects\projects\python\headfirst\chaper3')
print(os.getcwd())
the_file = open('text.txt')
#print(the_file.readline(), end=' ')
#print(the_file.readline(), end=" ")
# the_file.seek(0)
for each_line in the_file:
    (role, line_spoken) = each_line.split(":", 1)
    print(role, end="")
    print("\t", end="")
    print(line_spoken)
    #print(each_line, end=' ')
the_file.close()
