# -*- coding:utf-8 -*-
class Card:
    """ Reprecents a standard playin card.
    Ace ,2,3,4,5,6,7,8,9,10 ,Jack,Queen,King
    Spades =3 Hearts =2 Diamond=1 clubs=0
    Jack=11,Queen=12,King=13
    """

    def __init__(self, suit=0, rank=2):
        self.suit = suit  # instance atttibute .
        self.rank = rank
    suit_names = ['Clubs', 'Diamonds',
                  'Hearts', 'Spades']  # class attribute
    rank_names = [None, 'Ace', '2', '3', '4', '5', '6',
                  '7', '8', '9', '10', 'Jack', 'Queen', 'King']

    def __str__(self):
        return("%s of %s" % (self.rank_names[self.rank], self.suit_names[self.suit]))

    def __lt__(self, other):  # compare self and other. lt ls less than. if self < other ,return True. else False
        # firstly check suit ,
        if self.suit < othe
        # second check rank


class Deck:
    pass

queen_of_diamonds = Card(1, 12)
print(queen_of_diamonds)
Jack_of_Hearts = Card(2, 11)
print(Jack_of_Hearts)
print(queen_of_diamonds < Jack_of_Hearts)
