#um of [1, [2, [3, 4], 5], 6, [7, 8]]

def sumtree(L):
    tot = 0
    for x in L:
        print(x)# For each item at this level
        if not isinstance(x, list):
            tot += x                    # Add numbers directly
        else:
            tot += sumtree(x)           # Recur for sublists
    return tot

L = [1, [2, [3, 4], 5], 6, [7, 8]]
print(sumtree(L))       # Output 36
print(sumtree([1, [2, [3, [4, [5, [6, [7, 8]]]]]]]))
print(sumtree([[[[[[[1, 2], 3], 4], 5], 6], 7],8]))

