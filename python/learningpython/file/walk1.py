import os

for (dirname, sub, files) in os.walk('.'):
    print('[' + dirname + ']')
    for fname in files:
        print(os.path.join(dirname, fname))
