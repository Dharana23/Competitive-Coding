stack = []
def empty():
    if len(stack) == 0:
        print('\n Stack is empty')
    else:
        print(stack)
        
val1 = 1
val2 = 2
val3 = 3

stack.append(val1)
stack.append(val2)
stack.append(val3)
empty()

a = stack.pop()
b = stack.pop()
c = stack.pop()

print('\n The popped elements are:', a, b, c)
empty()


