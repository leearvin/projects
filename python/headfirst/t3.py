#!/usr/bin
movies = ["The Holy Grail",1975,"Terry Jones & Terry Gilliam",91,["Graham Chapman",["Micheal Palin","Jone Cleese","Terry Gilliam","Eric Idle","Terry Jones"]]]
print(movies)
for each_item in movies:
	if isinstance(each_item,list):
		for next_item in each_item:
			if isinstance(next_item,list):
				for deeper_item in next_item:
					print(deeper_item)
			else:
				print(next_item)
	else:
		print(each_item)
#learn BIF isinstance()
names = ['Michael',"Terry"]
if(isinstance(names,list)):
	print("names is list")
else:
	print("name is not list")