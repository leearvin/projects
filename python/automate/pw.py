# -*- coding:utf-8 -*-
# pw.py
# protect username and password in web. use a password to unlock the
# pwmanager, copy password of username to clipboard. then past it to box
# in web

PASSWORDS = {'email': 'sfdasfsafas',
             'blog': 'fdsafasfasfsafasfd',
             'luggage': '12345'}


import sys
import pyperclip

# ['pw.py']  pramas of command line store into sys.argv  --list,  and sys.argv[0] is filename. sys.argv[1] is the first argument
print(sys.argv[0])
if len(sys.argv) < 2:
    print('Usage: python py.py [account] - copy account password')
    sys.exit()
    # print(11)
account = sys.argv[1]   # first command line arg is the account name

if account in PASSWORDS:
    pyperclip.copy(PASSWORDS[account])
    print('Password for ' + account + ' copied to clipboard')
else:
    print('There is no account named ' + account)
