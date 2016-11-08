# -*- coding:utf-8 -*-
import random


class Card:
    """ Reprecents a standard playin card.
    Ace ,2,3,4,5,6,7,8,9,10 ,Jack,Queen,King
    Spades =3 Hearts =2 Diamond=1 clubs=0
    Jack=11,Queen=12,King=13
    """

# initialize card
    def __init__(self, suit=0, rank=2):
        self.suit = suit  # instance atttibute .
        self.rank = rank
    suit_names = ['Clubs', 'Diamonds',
                  'Hearts', 'Spades']  # class attribute
    rank_names = [None, 'Ace', '2', '3', '4', '5', '6',
                  '7', '8', '9', '10', 'Jack', 'Queen', 'King']

# return strings of card self
    def __str__(self):
        return("%s of %s" % (self.rank_names[self.rank], self.suit_names[self.suit]))

    # compare self and other. lt ls less than. if self < other ,return True.
    # else False
    def __lt__(self, other):
        # firstly check suit ,
        if self.suit < other.suit:
            return(True)
        elif self.suit < other.suit:
            return(False)
        # if same suit ,check rank
        else:
            return(self.rank < other.rank)

# cards group .


class Deck:

    # initialize 52 cards before play
    def __init__(self):
        self.cards = []
        for suit in range(4):
            for rank in range(1, 14):
                card = Card(suit, rank)
                self.cards.append(card)

# create 52 cards for one game
    def __str__(self):
        res = []
        for card in self.cards:
            # print(card)
            res.append(str(card))
        # print(res)
        str1 = '\n'.join(res)
        # print(str1)
        return('\n'.join(res))


# add,delete,wash,and sort cards

# deal one card from the bottom at a deck
    def pop_card(self):
        return self.cards.pop()

# add a card into cards
    def add_card(self, card):
        self.cards.append(card)

# shuffle
    def shuffle(self):
        random.shuffle(self.cards)
# sort cards

    def sort_cards(self):
        print(self.cards[0])
        for i in range(1, len(self.cards)):
            for j in range(i, 1, -1):
                if self.cards[j] < self.cards[j - 1]:
                    self.cards[
                        j - 1], self.cards[j] = self.cards[j], self.cards[j - 1]

# pop one card into hand cards from deck cards
    def move_cards(self, hand, num):
        for i in range(num):
            hand.add_card(self.pop_card())

# class Hand inherit class Deck ,Deck is parent , Hand is child


class Hand(Deck):
    """ Reprecents a hand of play cards
         Hand inherit functions from class Deck . include __init__
    """

    def __init__(self, label=' '):  # define __init__ cover __init__ inherited from parent class Deck
        self.cards = []
        self.label = label


queen_of_diamonds = Card(1, 12)
# print(queen_of_diamonds)
Jack_of_Hearts = Card(2, 11)
print(queen_of_diamonds < Jack_of_Hearts)

deck = Deck()
deck.shuffle()
# print(deck)  # 52lins  . 52 cards
# deck.sort_cards()
# print(deck)

hand = Hand('Newhand')
# hand.cards = []
print(hand.label)
card = deck.pop_card()

hand.add_card(card)
deck.move_cards(hand, 1)
print(hand)
print("\n")
print(deck)
