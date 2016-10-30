import os
import glob
import nester
import pickle

from AthleteList import AthleteList


def get_coach_data(filename):
    try:
        with open(filename) as f:
            data = f.readline()
            templ_data = data.strip().split(",")
            return(AthleteList(templ_data.pop(0), templ_data.pop(0), templ_data))
    except IOError as ioerr:
        print('File error: ' + ioerr)
        return(None)


def put_to_store(files_list):
    all_athletes = {}
    for each_file in files_list:
        ath = get_coach_data(each_file)
        all_athletes[ath.name] = ath
    try:
        with open('athletes.pickle', 'wb') as athf:
            pickle.dump(all_athletes, athf)
    except IOError as ioerr:
        print('File error (put_and_store): ' + str(ioerr))
    return(all_athletes)


def get_from_store():
    all_athletes = {}
    try:
        with open('athletes.pickle', 'rb') as athf:
            all_athletes = pickle.load(athf)
    except IOError as ioerr:
        print('File error (put_and_store): ' + str(ioerr))
    return(all_athletes)

os.chdir('e:/projects/projects/python/headfirst/chapter7')
for file in glob.glob("*.txt"):
    student_data = get_coach_data(file)
    print(student_data.name + "\'s fastest times are:  " + str(student_data.top3()))
vera = AthleteList('vera')
vera.append('1.30')
print(vera.top3())
vera.extend(['1-20', '1-31', '1.9', '1-18'])
print(vera.top3())
