M  = [[1, 2, 3],
      [4, 5, 6],
      [7, 8, 9] ]
N = [[2, 2, 2],
     [3, 3, 3],
     [4, 4, 4] ]
print(M[1])   #[4, 5, 6]
print(M[1][2])  #6
print(list(row[1] for row in M)) # second row [2, 5, 8]
print(list(M[row][1] for row in range(3)))   #[2, 5, 8]
print(list(M[i][i] for i in range(len(M))))  #[1, 5, 9]
print([M[row][col] * N[row][col] for row in range(3) for col in range(3)]) #[2, 4, 6, 12, 15, 18, 28, 32, 36]
print([M[row][col] * N[row][col] for col in range(3) for row in range(3)]) #[2, 12, 28, 4, 15, 32, 6, 18, 36]
res = []
for row in range(3):
    tmp = []
    for col in range(3):
        tmp.append(M[row][col] * N[row][col])
    res.append(tmp)
print(res)