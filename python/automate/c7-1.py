# -*- coding:utf-8 -*-
import re
phoneNumRegex = re.compile(r'\d{1}-\d{3}-\d{3}')
mo = phoneNumRegex.search('My number is 111-222-3333 222-333-4444 111-333-444')
if mo != None:
    print('my phone is ' + mo.group())
