#! python3
# -*- coding:utf-8 -*-


def spam():
    bacon()


def bacon():
    raise Exception("This is the error message!")

spam()
