# -*- coding:utf-8 -*-
class Time:
    """ Reprecents the time of day   ​attribute: hour,minute,second ​"""

    # initialization , auto run when instance initlalized
    def __init__(self, hour=0, minute=0, second=0):
        self.hour = hour
        self.minute = minute
        self.second = second

    # return object string expression.
    def __str__(self):
        return("%.2d:%.2d:%.2d" % (self.hour, self.minute, self.second))

    # def __add__(self, other):                                    #support  instance of class +
    #     seconds = self.time_to_int() + other.time_to_int()
    #     return(self.int_to_time(seconds))

    def __add__(self, other):  # type_based dispath , other->Time add_time() and other->int increment()
        if isinstance(other, Time):
            return(self.add_time(other))
        else:
            return(self.increment(other))

    def __radd__(self, other):  # right-side add.  if the first argument is not instance of object ,
        return self.__add__(other)

    def print_time(self):
        print("%.2d:%.2d:%.2d" % (self.hour, self.minute, self.second))

    def time_to_int(self):
        minutes = self.hour * 60 + self.minute
        seconds = minutes * 60 + self.second
        return(seconds)

    # instance of function , The instance is a  first arg "self".  Positional
    # arguments
    def int_to_time(self, seconds):
        time = Time()
        minutes, time.second = divmod(seconds, 60)
        time.hour, time.minute = divmod(minutes, 60)
        return(time)

    def increment(self, seconds):
        seconds += self.time_to_int()
        return(self.int_to_time(seconds))

    def is_after(self, other):
        return(self.time_to_int() > other.time_to_int())

    def add_time(self, other):
        seconds = self.time_to_int() + other.time_to_int()
        return(self.int_to_time(seconds))

start_time = Time()
start_time.hour = 9
start_time.minute = 45
start_time.second = 00
start_time.print_time()         # start_time enter print_time()

end_time = start_time.increment(3600)
end_time.print_time()
print(end_time.is_after(start_time))

new_time1 = Time()
new_time1.print_time()  # 00:00:00    initialization
new_time2 = Time(2)
new_time2.print_time()  # 02:00:00 initialization
new_time3 = Time(4, 19)
new_time3.print_time()  # 04:19:00
print(new_time1)        # return string in function __str__  00:00:00
# + work , define  __add__ in the class
print(start_time + end_time)

print(1337 + new_time1)
