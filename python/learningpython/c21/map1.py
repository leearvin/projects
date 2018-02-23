#zip adn 2.6 map workalike
def myzip(*seqs):
    seqs = [list(S) for S in seqs]
    res = []
    while all(seqs):
        res.append(tuple(S.pop(0) for S in seqs))
    return res
def mymapPad(*seqs, pad=None):
    seqs = [list(S) for S in seqs]
    res = []
    while any(seqs):
        res.append(tuple((S.pop(0) if S else pad) for S in seqs))
    return res

S1, S2 = 'abc', '123456'
print(myzip(S1, S2)) #[('a', '1'), ('b', ','), ('c', ' ')]
print(mymapPad(S1, S2)) #[('a', '1'), ('b', '2'), ('c', '3'), (None, '4'), (None, '5'), (None, '6')]
print(mymapPad(S1, S2, pad=99))#[('a', '1'), ('b', '2'), ('c', '3'), (99, '4'), (99, '5'), (99, '6')]