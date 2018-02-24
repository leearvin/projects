def saver(x=[]):        #Saves away a list object
    x.append(1)         #Changes same object each time
    print(x)
     #[2, 1]  #Default not used
saver()
saver([2]) #[1]    #default used
saver()         #[1, 1]   #Grows on each call
saver()         #[1, 1, 1]