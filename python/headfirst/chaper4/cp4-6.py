#!usr/bin/
import os
import nester
import pickle
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
    with open('man_data.txt', 'wb') as man_file:
        # nester.print_lol(man, False, 0, fn=man_file)
        pickle.dump(man, man_file)
    with open('other_data.txt', 'wb') as other_file:
        # nester.print_lol(other, False, 0, fn=other_file)
        pickle.dump(other, other_file)
except IOError as error_msg:
    # error_msg is a object . so str(error_msg) convert to string
    print('File error.' + error_msg)
except pickle.PickleError as perr:
    print('pickling error: ' + str(perr))
# finally:
#     man_file.close()
#     other_file.close()

# load data from pickled
try:
    with open('man_data.txt', 'rb') as man_file_handle:
        new_man = pickle.load(man_file_handle)
    with open('other_data.txt', 'rb') as other_file_handle:
        new_other = pickle.load(other_file_handle)
except IOError as error_msg:
    print('File error.' + error_msg)
except pickle.PickleError as perr:
    print('pickling error: ' + str(perr))
nester.print_lol(new_man)
nester.print_lol(new_other)
