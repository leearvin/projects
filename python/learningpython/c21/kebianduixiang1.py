def saver(x=None):        #Saves away a list object
    """

    :param x:
    :return:
    """

    """if x is None:
        x = []
    """
    x = x or []
    x.append(1)         #Changes same object each time
    print(x)
saver()         #[1]   #call first time
saver([2])      #[2, 1]
saver()         #[1]   #Doest't grow now
saver()         #[1]