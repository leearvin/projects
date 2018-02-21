import sys
showall = lambda x : list(map(sys.stdout.write, x))  #Use list in 3.0
t = showall(['spam\n', 'toast\n', 'eggs\n'])
showall = lambda x: [sys.stdout.write(line) for line in  x]
t = showall(('bright\n', 'spam\n', 'toast\n', 'eggs\n'))