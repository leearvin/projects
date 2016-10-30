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
    clean_score = []
    # name = file.split(",")[0]
    # print(name)
    with open(file) as person_scores_file_handle:
        scores = person_scores_file_handle.readline().strip().split(',')

        """ next four motheds is all ok"""

        ''' mothed1 '''
        # print(len(score))
        # for count in range(len(scores)):
        #     scores[count] = float(sanitize(scores[count]))
        # print(sorted(scores))

        '''' mothed2 die dai'''
        # for each_t in scores:
        #     clean_score.append(float(sanitize(each_t)))
        # print(sorted(clean_score))

        '''mothed3  list comprehehension'''
        # clean_score = [float(sanitize(each_t)) for each_t in scores]
        # print(sorted(clean_score))

        """mothed4 one line"""
        print(sorted([float(sanitize(each_t)) for each_t in scores]))
        # nester.print_lol(score)
