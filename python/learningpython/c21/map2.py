print(open('myfile.txt').readlines())  #['aaa\n', 'bbb\n', 'ccc\n']
print([line.rstrip() for line in open('myfile.txt').readlines()]) #['aaa', 'bbb', 'ccc']
print([line.rstrip() for line in open('myfile.txt')])   #['aaa', 'bbb', 'ccc'] 文件迭代器
print(list(map((lambda line: line.rstrip()), open('myfile.txt')))) #['aaa', 'bbb', 'ccc'] 文件迭代器
listoftuple = [('bob', 35, 'mgr'), ('mel', 40, 'dev')]
print([age for (name, age, job) in listoftuple])  #[35, 40]
print(list(map(lambda row: row[1], listoftuple))) #[35, 40]
listoftuple = [('bob', 35, 'mgr'), ('mel', 40, 'dev')]
print(list(map((lambda age : age), listoftuple)))
#print(list(map((lambda (name, age, job): age), listoftuple)))   # for 2.0 only


