#!usr/bin/
import os
print(os.getcwd())
os.chdir('E:/projects/projects/python/headfirst/chaper4')
print(os.getcwd())
# if
# os.path.exists('E:/projects/projects/python/headfirst/chaper4/sketch.txt'):
man = []
other = []
try:
    the_file = open('sketch.txt')
    the_file.seek(0)
    for each_line in the_file:
        try:
            if each_line.find(":") != -1:
                (role, line_spoken) = each_line.split(":", 1)
                line_spoken = line_spoken.strip()
                if role == 'Man':
                    man.append(line_spoken)
                elif role == 'Other Man':
                    other.append(line_spoken)
        except ValueError:
            pass
    the_file.close()
except IOError:
    print("The data file is not exists.")

try:
    man_file = open("man_data.txt", 'w+')
    other_file = open("other_data.txt", "w+")
    print(man, file=man_file)
    print(other, file=other_file)
    man_file.close()
    other_file.close()
except IOError:
    print('File error.')
