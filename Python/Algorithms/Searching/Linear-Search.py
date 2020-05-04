def lin_search(myarray, n, key):
    for x in range(0, n):
        if (myarray[x] == key):
            return x
    return -1

myarray = [12, 1, 34, 17]
key = 17
n = len(myarray)
matched = lin_search(myarray, n, key)
if (matched == -1):
    print('\n Key is not present')
else:
    print('\n Key is present at index', matched)


