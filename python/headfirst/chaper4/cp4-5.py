#!usr/bin/
import pickle

try:
    with open("mydate.pickle", 'wb') as mysavedata:
        pickle.dump([1, 2, "three"], mysavedata)
    with open("mydate.pickle", "rb") as myrestoredata:
        a_list = pickle.load(myrestoredata)
    print(a_list)
except PickleError as err:
    print("File error: " + str(err))
