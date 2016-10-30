import os
import glob
import nester


class Athlete:
    def __init__(self, a_name, a_dob=None, a_times=[]):
        self.name = a_name
        self.dob = a_dob
        self.times = a_times

    def top3(self):
        return(sorted(set([float(sanitize(each_t)) for each_t in self.times]))[0:3])

    def add_time(self, one_value):
        self.times.append(one_value)

    def add_times(self, a_list):
        self.times.extend(a_list)


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
            return(Athlete(templ_data.pop(0), templ_data.pop(0), templ_data))
    except IOError as ioerr:
        print('File error: ' + ioerr)
        return(None)

vera = Athlete('vera')
vera.add_time('1.30')
print(vera.top3())
vera.add_times(['1-20', '1-31', '1.9', '1-18'])
print(vera.top3())
