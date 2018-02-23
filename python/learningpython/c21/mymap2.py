# using generator: yield
def myzip(*seqs):
    #print(seqs)  #('abc', '123456')
    seqs = [list(S) for S in seqs]
    #print(seqs)   #[['a', 'b', 'c'], ['1', '2', '3', '4', '5', '6']]
    while all(seqs):
        yield tuple(S.pop(0) for S in seqs)
def mymapPad(*seqs, pad= None):
    seqs = [list(S) for S in seqs]
    while any(seqs):
        yield tuple((S.pop(0) if S else pad) for S in seqs)
S1, S2 = 'abc', '123456'
print(list(myzip(S1, S2)))  #[('a', '1'), ('b', '2'), ('c', '3')]
print(list(mymapPad(S1, S2))) #[('a', '1'), ('b', '2'), ('c', '3'), (None, '4'), (None, '5'), (None, '6')]
print(list(mymapPad(S1, S2, pad=99)))#[('a', '1'), ('b', '2'), ('c', '3'), (99, '4'), (99, '5'), (99, '6')]