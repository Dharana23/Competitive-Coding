list1 = [1, 2, 3, 'Python']

list1.append(2)
print(list1)

list1.extend((2, 0))
print(list1)

list1.insert(3, 'example')
print(list1)

del list1[3]
print(list1)

list1.pop(3)
print(list1)

list1.remove(2)
print(list1)

list = [1, 2, 3, 635, 12, 546, 0]

print(sorted(list))

# Ascending Order
list.sort()
print(list)

# Descending Order
list.sort(reverse=True)
print(list)

print(list.index(2))

print(list.count(12))

