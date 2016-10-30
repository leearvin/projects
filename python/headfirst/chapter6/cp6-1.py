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
    # print(file)
    # clean_score = []
    # filename is person name
    name = file.split(".")[0]
    print(name, end=' ')
    # open filename handle
    scores = get_coach_data(file)
    # print(scores)
    sorted_clean_score = sorted([float(sanitize(each_t)) for each_t in scores])
    unique_sorted_clean_score = sorted(set(sorted_clean_score))
    print(unique_sorted_clean_score[0:3])
