# -*- coding:utf-8 -*-
import os

# exute file.py -> usr\bin\spam   run python shell:'usr\\bin\\spam' .
# linux bash:'usr/bin/spam' . diffrent system make diffrent results
# print(os.path.join('usr', 'bin', 'spam'))
filesDirectory = os.path.join(os.getcwd(), 'filefolder')
myFiles = ['accounts.txst', 'details.csv', 'invite.docx']
for fileName in myFiles:
    print(os.path.join(filesDirectory, fileName))
