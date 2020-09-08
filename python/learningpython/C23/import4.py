from small import x, y
x = 42
y[0] = 42
print(x, y)  #42 [42, 2]

import small
print(small.x)  #1
print(small.y)  #[42, 2]