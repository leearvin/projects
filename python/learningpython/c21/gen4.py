G = (c * 4 for c in 'spam')
I1 = iter(G)
print(I1 is G)  # True
I2 = iter(G)
print(next(I1)) #ssss
print(next(I2)) #pppp
print(next(I1)) #aaaa
print(next(I2)) #mmmm
try:
    print(next(I1)) #StopIteration
except StopIteration:
    I3 = iter(c * 4 for c in 'spam')
    print(next(I3))  # ssss
    #I3 = iter(G)
    #print(next(I3)) #StopIteration too. G is dead. need a new generator

#print(next(I)) #ssss
#print(next(I)) #pppp
#print(list(G))  #['ssss', 'pppp', 'aaaa', 'mmmm']
def timesfour(s):
    for c in s:
        yield c * 4
G = timesfour('spam')
I1, I2 = iter(G), iter(G)
print(next(I1))     #ssss
print(next(I2))     #pppp
print(next(I1))     #aaaa
print(next(I2))     #mmmm

L = [1, 2, 3, 4]
I1 , I2 = iter(L), iter(L)
print(next(I1)) #1
print(next(I1)) #2
print(next(I2)) #1 other generator
del L[2:]  #change reflected in iterators
print(next(I1)) #StopIteration