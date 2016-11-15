# -*- coding:utf-8 -*-
# bulletPointAdder.py  Adds wikipedia bullet to the start of each line of
# text on the clipboard
import pyperclip
text = pyperclip.paste()
# print(text)
# TODO Separate lines add add stars
lines = text.split('\n')
for i in range(len(lines) - 1):
    lines[i] = '* ' + lines[i]
text = '\n'.join(lines)
print(text)

pyperclip.copy(text)
