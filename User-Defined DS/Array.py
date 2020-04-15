import array as arr
a = arr.array('i', [1, 2, 3, 4])

while True:
    print('1. Print Array \n')
    print('2. Add Elements \n')
    print('3. Delete Elements \n')
    print('4. Exit')

    choice = int(input('\n Enter Choice:'))
    if choice == 1:
        print('\n The array elements are:')
        for numbers in a:
            print(numbers)

    elif choice == 2:
        val = int(input('\n Enter number to add:'))
        if isinstance(val, int):
            a.append(val)

    elif choice == 3:
        value = a.pop()
        print('\n The deleted value was:', value)

    elif choice == 4:
        break

    else:
        print('\n Enter valid choice')

