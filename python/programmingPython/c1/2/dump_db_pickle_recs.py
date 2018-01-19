import pickle, glob
for filname in glob.glob('*.pkl'):
    recfile = open(filname, 'rb')
    record =  pickle.load(recfile)
    print(filname, '=>\n', record)
suefile = open('sue.pkl', 'rb')
print(pickle.load(suefile)['name'])