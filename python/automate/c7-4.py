# -*- coding:utf-8 -*-
import re
heroRegex = re.compile(r'Batman|Tina Fey')
mo1 = heroRegex.search('Batman and Tina Fey')
print(mo1.group())  # Batman
mo2 = heroRegex.search('Tina Fey and Batman')
print(mo2.group())  # Tina Fey
batRegex = re.compile(r'Bat(man|mobile|copter|bat)')
mo3 = batRegex.search("Batmobile lost a wheel")
print(mo3.group())  # Batmobile
print(mo3.group(1))  # mobile()
