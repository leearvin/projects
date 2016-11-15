# -*- coding:utf-8 -*-
#! python3
# randomQuizGenerator.py   -create quizzes with questins and answers in
# random order , along woth the answer key

import random

capitals = {'aaaa11': '1111111', 'aaaa12': '1111112', 'aaaa13': '1111113', 'aaaa14': '1111114', 'aaaa15': '1111116', 'aaaa16': '1111116', 'aaaa17': '1111117', 'aaaa18': '1111118', 'aaaa19': '1111119', 'aaaa10': '1111110', 'aaaa111': '11111111', 'aaaa112': '11111112', 'aaaa113': '11111113', 'aaaa114': '11111114', 'aaaa115': '11111115', 'aaaa116': '11111116', 'aaaa117': '11111117', 'aaaa118': '11111118', 'aaaa119': '11111119', 'aaaa120': '11111120', 'aaaa121': '11111121', 'aaaa122': '11111122', 'aaaa123': '11111123', 'aaaa124': '11111124', 'aaaa125': '11111125',
            'aaaa126': '11111126', 'aaaa127': '11111127', 'aaaa128': '11111128', 'aaaa129': '11111129', 'aaaa130': '11111130', 'aaaa131': '11111131', 'aaaa1132': '11111132', 'aaaa133': '11111133', 'aaaa134': '11111134', 'aaaa135': '11111135', 'aaaa136': '11111136', 'aaaa137': '11111137', 'aaaa138': '11111138', 'aaaa139': '11111139', 'aaaa140': '11111140', 'aaaa141': '11111141', 'aaaa142': '11111142', 'aaaa143': '11111143', 'aaaa144': '11111144', 'aaaa145': '11111145', 'aaaa146': '11111146', 'aaaa147': '11111147', 'aaaa148': '11111148', 'aaaa149': '11111149', 'aaaa150': '11111150'}

# generate 35 files.
for quizNum in range(35):
    # TODO : Create the quiz and answer key files.
    # create the quiz and answer key files
    quizFile = open('capitalsquiz%s' % (quizNum + 1), 'w')
    answerKeyFile = open('capitalsquiz_answers%s' % (quizNum + 1), 'w')

    # write out the header for the quiz
    quizFile.write('Name:\n\nDate:\n\nPeriod:\n\n')
    quizFile.write((' ' * 20) + 'State Capitals Quiz (Form %s)' %
                   (quizNum + 1))
    quizFile.write('\n\n')

    # shuffle the order of the states.
    states = list(capitals.keys())
    random.shuffle(states)

    # Loop through all 50 states, making a question for each.
    for questionNum in range(50):
        # get right and wrong answers
        correctAnswer = capitals[states[questionNum]]
        wrongAnswer = list(capitals.values())
        del wrongAnswer[wrongAnswer.index(correctAnswer)]
        wrongAnswer = random.sample(wrongAnswer, 3)
        answerOptions = wrongAnswer + [correctAnswer]
        random.shuffle(answerOptions)

    # Write the question and the answer option to the quiz file.

        quizFile.write('%s. What is the capital of %s?\n' %
                       (questionNum + 1, states[questionNum]))
        for i in range(4):
            quizFile.write(' %s. %s\n' % ('ABCD'[i], answerOptions[i]))
        quizFile.write('\n')

        # write the answer key to a file.
        answerKeyFile.write('%s . %s\n' % (
            questionNum + 1, 'ABCD'[answerOptions.index(correctAnswer)]))
    quizFile.close()
    answerKeyFile.close()

    # TODO : Write out the header for the quiz

    # TODO : Shuffle the order for the states

    # TODO : Loop through all 50 states, making a question for each
