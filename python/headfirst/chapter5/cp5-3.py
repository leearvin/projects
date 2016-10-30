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

#current dir is target dir.
os.chdir('e:/projects/projects/python/headfirst/chapter5')
# print(os.getcwd())
#circle of geting all filename.txt in the directory,
for file in glob.glob("*.txt"):
    # print(file)
    # clean_score = []
    #filename is person name
    name = file.split(".")[0]
    print(name)
    #open filename handle
    with open(file) as person_scores_file_handle:
        #read one line in file handle , and delete blank and split line to list by ','
        scores = person_scores_file_handle.readline().strip().split(',')
        #replace '-' ':' by '.' and convert string to float and sorted
        sorted_clean_score = sorted(
            [float(sanitize(each_t)) for each_t in scores])
        """ji he  set()"""
        #sort again
        unique_sorted_clean_score = sorted(set(sorted_clean_score))
        print(unique_sorted_clean_score[0:3])
        # for each_t in unique_sorted_clean_score:
        #     print(each_t, end=' ')

        """die dai"""
        # unique_sorted_clean_score = []
        # for each_t in sorted_clean_score:
        #     if each_t not in unique_sorted_clean_score:
        #         unique_sorted_clean_score.append(each_t)
        # print(unique_sorted_clean_score)

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

        """mothed4 one line"""
        # print(sorted([float(sanitize(each_t)) for each_t in scores]))
        # nester.print_lol(score)
