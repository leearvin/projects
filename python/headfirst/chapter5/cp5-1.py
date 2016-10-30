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

os.chdir('e:/projects/projects/python/headfirst/chapter5')
print(os.getcwd())
for file in glob.glob("*.txt"):
    print(file)
    # name = file.split(",")[0]
    # print(name)
    with open(file) as score:
        score = score.readline().strip().split(',')
        # print(len(score))
        for count in range(len(score)):
            score[count] = sanitize(score[count])
        print(sorted(score))

        # nester.print_lol(score)
