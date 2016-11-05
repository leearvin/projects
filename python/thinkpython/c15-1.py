# -*- coding:utf-8 -*-
import copy


class Point:
    """ Pepresents a point in 2-d space"""
    pass


class Rectangle:
    """Reprecents a rectangle
    attributes: width, height , corner
    """
    pass
#


def print_point(p):
    print("%g, %g" % (p.x, p.y))


def grow_rectangle(rect, dwidth, dheight):
    rect.width += dwidth
    rect.height += dheight


def find_center(rect):
    point1 = Point()
    point1.x = rect.corner.x + rect.width / 2
    point1.y = rect.corner.y + rect.height / 2
    return(point1)


def move_rectangle(rect, dx, dy):
    rect.coner.x += dx
    rect.coner.y += dy

box = Rectangle()
box.width = 100.0
box.height = 200.0
box.corner = Point()
box.corner.x = 0.0
box.corner.y = 0.0

center = find_center(box)
print_point(center)

print(box.width, box.height)
grow_rectangle(box, 100, 200)
print(box.width, box.height)

p1 = Point()
p1.x = 3.0
p1.y = 4.0
p2 = copy.copy(p1)
print_point(p2)
print_point(p1)
if(p1 is p2):
    print('p1 is p2')
else:
    pass
if(p1 == p2):
    print("p1 equival p2")
else:
    pass
box2 = copy.copy(box)
print(box2 is box)
print(box2.corner is box.corner)

box3 = copy.deepcopy(box)
print(box3 is box)
print(box3.corner is box.corner)


print(isinstance(p1, Point))
print(hasattr(p1, 'x'))
print(hasattr(p1, 'z'))
