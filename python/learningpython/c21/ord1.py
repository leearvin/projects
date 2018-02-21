print(ord('s'))    #output 115
print(chr(115))    #Output S
res = []
for x in 'Spam':
    res.append(ord(x))
print(res)          #[83, 112, 97, 109]
res = []
res = list(map(ord, 'Spam'))
#res = list(map(lambda x:ord(x), 'Spam'))   #Equivalent to above
print(res)          #[83, 112, 97, 109]
res = [ord(x) for x in 'Spam']
print(res)          #[83, 112, 97, 109]
print([x ** 2 for x in range(10)])     #[0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
print(list(map((lambda x: x ** 2), range(8))))   #[0, 1, 4, 9, 16, 25, 36, 49]