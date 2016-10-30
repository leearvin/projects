import os
import glob
import nester


def sanitize(time_string):
    if '-' in time_string:
        splitter = '-'
    elif ':' in time_string:
        splitter = ":"
    else:
        return(time_string)
    (mins, secs) = time_string.split(splitter)
    return(mins + '.' + secs)


def get_coach_data(filename):
    try:
        with open(filename) as f:
            data = f.readline()
        return(data.strip().split(","))
    except IOError as ioerr:
        print('File error: ' + ioerr)
        return(None)

# current dir is target dir.
os.chdir('e:/projects/projects/python/headfirst/chapter6')
# print(os.getcwd())
# circle of geting all filename.txt in the directory,
for file in glob.glob("*.txt"):
    # filename is person name
    student_data = get_coach_data(file)
    # (student_name, student_dob) = student_data.pop(0), student_data.pop(0)
    # create a new dict
    student_dict = {}
    student_dict['Name'] = student_data.pop(0)
    student_dict['DOB'] = student_data.pop(0)
    student_dict['Times'] = student_data
    # print(student_data)

    sorted_clean_score = str(sorted(
        set([float(sanitize(each_t)) for each_t in student_dict['Times']]))[0:3])
    # print(sorted_clean_score)
    print(student_dict['Name'] +
          "\'s fastest times are:  " + sorted_clean_score)

    # unique_sorted_clean_score = sorted(set(sorted_clean_score))
    # print(unique_sorted_clean_score[0:3])
