# -*- coding:utf-8 -*-
import os


class Time:
    """ Reprecents the time of day   ​attribute: hour,minute,second ​"""
    pass


def print_time(t):
    print("%.2d:%.2d:%.2d" % (t.hour, t.minute, t.second))


def is_after(t1, t2):
    if t1.hour > t2.hour:
        return(True)
    elif t1.hour < t2.hour:
        return(False)
    else:
        if t1.minute > t2.minute:
            return(True)
        elif t1.minute < t2.minute:
            return(False)
        else:
            if t1.second > t2.second:
                return(True)
            elif t1.second < t2.second:
                return(False)
            else:
                return(False)


def add_time(t1, t2):  # pure function. function style  programming is good  pattern
    sumTime = Time()
    sumTime.hour = t1.hour + t2.hour
    sumTime.minute = t1.minute + t2.minute
    sumTime.second = t1.second + t2.second

    if sumTime.second >= 60:
        sumTime.second -= 60
        sumTime.minute += 1

    if sumTime.minute >= 60:
        sumTime.minute -= 60
        sumTime.hour += 1

    if sumTime.hour >= 24:
        sumTime.hour -= 24

    return(sumTime)


def increment(t, seconds):  # modifier . modify global var or instance
    t.second += seconds
    while t.second >= 60:
        t.second -= 60
        t.minute += 1
    while t.minute >= 60:
        t.minute -= 60
        t.hour += 1
    t.hour %= 24
    return(t)


def time_to_int(t):
    minutes = t.hour * 60 + t.minute
    seconds = minutes * 60 + t.second
    return(seconds)


def int_to_time(seconds):
    time = Time()
    minutes, time.second = divmod(seconds, 60)
    time.hour, time.minute = divmod(minutes, 60)
    return(time)


start_time = Time()
start_time.hour = 0
start_time.minute = 0
start_time.second = 0

duration = Time()
duration.hour = 1
duration.minute = 30
duration.second = 0

# print(is_after(start_time, time2))
new_time = add_time(start_time, duration)
print_time(new_time)

new_time2 = increment(start_time, 900)
print_time(new_time2)

print(time_to_int(int_to_time(3600)))
