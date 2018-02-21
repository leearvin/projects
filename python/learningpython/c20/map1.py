counters = [1, 2, 3, 4]
updated = []
for x in counters:
    updated.append(x + 10)
print(updated)  #Output [11, 12, 13, 14]
def inc(x): return x + 10
print(list(map(inc, counters)))
print(list(map((lambda x: x+3), counters)))
print(pow(3, 4))                                 #81
print(list(map(pow, [1, 2, 3],[2, 3, 4])))      #[1, 8, 81]


