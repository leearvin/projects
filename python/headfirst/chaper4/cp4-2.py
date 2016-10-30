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
except IOError as error_msg:
    print("The data file is not exists." + str(error_msg))
finally:
    the_file.close()
try:
    man_file = open("man_data.txt", 'w+')
    other_file = open("other_data.txt", "w+")
    print(man, file=man_file)
    print(other, file=other_file)
except IOError as error_msg:
    # error_msg is a object . so str(error_msg) convert to string
    print('File error.' + error_msg)
finally:
    man_file.close()
    other_file.close()
