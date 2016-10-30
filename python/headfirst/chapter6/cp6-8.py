import os
import glob
import nester


class AthleteList(list):
    def __init__(self, a_name, a_dob=None, a_times=[]):
        list.__init__([])
        self.name = a_name
        self.dob = a_dob
        self.extend(a_times)

    def top3(self):
        return(sorted(set([float(sanitize(each_t)) for each_t in self]))[0:3])


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
            return(AthleteList(templ_data.pop(0), templ_data.pop(0), templ_data))
    except IOError as ioerr:
        print('File error: ' + ioerr)
        return(None)
os.chdir('e:/projects/projects/python/headfirst/chapter6')
for file in glob.glob("*.txt"):
    student_data = get_coach_data(file)
    print(student_data.name + "\'s fastest times are:  " + str(student_data.top3()))
vera = AthleteList('vera')
vera.append('1.30')
print(vera.top3())
vera.extend(['1-20', '1-31', '1.9', '1-18'])
print(vera.top3())
