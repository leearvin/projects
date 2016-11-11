# -*- coding:utf-8 -*-
import re
phoneNumRegex = re.compile(r'(\d{3})-(\d{3}-\d{3})')
mo = phoneNumRegex.search('My number is 111-222-3333 222-333-4444 111-333-444')
if mo != None:
    print(mo.groups())
    first_num, second_num = mo.groups()
    print('my first group phone is ' + first_num)
    print('my second group phone is ' + second_num)

