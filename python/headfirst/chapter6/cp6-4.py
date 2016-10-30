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
            templ_data = data.strip().split(",")
            return({
                'Name': templ_data.pop(0),
                'DOB': templ_data.pop(0),
                'Times': str(sorted(set([float(sanitize(each_t)) for each_t in templ_data]))[0:3])
            })
    except IOError as ioerr:
        print('File error: ' + ioerr)
        return(None)

# current dir is target dir.
os.chdir('e:/projects/projects/python/headfirst/chapter6')
# print(os.getcwd())
# circle of geting all filename.txt in the directory,
for file in glob.glob("*.txt"):
    # filename into funciton get_coath_data,return a dict

    student_data = get_coach_data(file)
    print(student_data['Name'] +
          "\'s fastest times are:  " + student_data['Times'])
