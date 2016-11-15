# -*- coding:utf-8 -*-
#! python3
# phoneAndEmail.py - Finds phone numbers and emails addresses on the ciipboard

import pyperclip
import re


# regex telephone
phoneRegex = re.compile(r'''(
    (\d{3}|\(\d{3}\))?      #area code
    (\s|-|\.)?                  #separator
    (\d{3})                     #first 3 digits
    (\s|-|\.)                   #separator
    (\d{4})                     #last 4 digits
    (\s*(ext|x|ext.)\s*(\d{2,5}))?    #extension
    )''', re.VERBOSE)

# regex email
emailRegex = re.compile(r'''(
    [a-zA_Z0-9._%+-]+                          #username
    @                                                       #@ symbol
    [a-zA_Z0-9.-]+                                 #domainname
    (\.[a-zA-Z]{2,4})                                 #dot-something
    )''' , re.VERBOSE)
