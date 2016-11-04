# -*- coding:utf-8 -*-
def is_anagram(input_word1, input_word2):
    word1 = sorted(input_word1)
    word2 = sorted(input_word2)
    print(word1)
    print(word2)
    if len(word1) != len(word2):
        return(False)
    else:
        print(len(word1))
        for i in range(len(word1) - 1):
            print(i)
            if word1[i] != word2[i]:
                return(False)
        return(True)

str1 = '123465666'
str2 = '123456'
print(is_anagram(str1, str2))
