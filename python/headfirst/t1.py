#!/usr/bin
movies = ["The Holy Grail","The Life of Brain","The Meaning of Life"]
print(movies);
print(movies[1])

cast = ["Cleese","Palin","Jones","Idle"]
print(cast)
#len(array)   array length
print(len(cast))
print(cast[1])
#add one element at end of array
cast.append("Gilliam")
print(cast)
#pop one element from end of array
print(cast.pop())
print(cast)
#add one array at end of array
cast.extend(["Gilliam","Chapman"])
print(cast)
#delete element of valure name from array object
cast.remove("Chapman")
print(cast)
#insert a element at position number
cast.insert(0,"Chapman")
print(cast)

"""result
['The Holy Grail', 'The Life of Brain', 'The Meaning of Life']
The Life of Brain
['Cleese', 'Palin', 'Jones', 'Idle']
4
Palin
['Cleese', 'Palin', 'Jones', 'Idle', 'Gilliam']
Gilliam
['Cleese', 'Palin', 'Jones', 'Idle']
['Cleese', 'Palin', 'Jones', 'Idle', 'Gilliam', 'Chapman']
['Cleese', 'Palin', 'Jones', 'Idle', 'Gilliam']
['Chapman', 'Cleese', 'Palin', 'Jones', 'Idle', 'Gilliam']

"""

