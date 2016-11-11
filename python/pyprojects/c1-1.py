# _*_  coding utf-8   _*_
def straight_line(gradient, x, constant):
    """ return y coordinate of a straight lin"""
    return gradient * x + constant

for i in range(10):
    print(straight_line(2, i, 4))
help(straight_line)
