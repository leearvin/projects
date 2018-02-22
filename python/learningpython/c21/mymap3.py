#alternate implemetation with lengths
def myzip(*seqs):
    minlen = min(len(S) for S in seqs)
    return [tuple(S[i] for S in seqs) for i in range(minlen)]
def mymapPad(*seqs, pad=None):
    maxlen = max(len(S) for S in seqs)
    index = range(maxlen)
    return [tuple((S[i] if len(S) > i else pad) for S in seqs) for i in index]
S1, S2 = 'abc', '123456'
print(list(myzip(S1, S2)))  #[('a', '1'), ('b', '2'), ('c', '3')]
print(list(mymapPad(S1, S2))) #[('a', '1'), ('b', '2'), ('c', '3'), (None, '4'), (None, '5'), (None, '6')]
print(list(mymapPad(S1, S2, pad=99)))#[('a', '1'), ('b', '2'), ('c', '3'), (99, '4'), (99, '5'), (99, '6')]