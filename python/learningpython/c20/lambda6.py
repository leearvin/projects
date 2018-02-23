def action(x): return (lambda y: x + y)
act = action(99)
print(act(2))   #101
action1 = (lambda x: (lambda y: x + y))
act = action(99)
print(act(3))   #102
print(((lambda  x: (lambda y: x + y))(99))(4))