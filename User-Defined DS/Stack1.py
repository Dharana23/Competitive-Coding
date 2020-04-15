class Stack:
    def __init__(self):
        self.items = []
        
    def is_empty(self):
        return self.items == []
    
    def push(self, data):
        self.items.append(data)
        
    def pop(self):
        return self.items.pop()
    
s = Stack()
while True:
    print('\n 1. Push')
    print('\n 2. Pop')
    print('\n 3. Quit')
    
    choice = int(input('\n Enter your choice:'))s
    
    if choice == 1:
        val = input('\n Enter the value:')
        s.push(val)
        
    elif choice == 2:
        if s.is_empty():
            print('\n Stack is empty')
        else:
            print('\n Popped value:', s.pop())
            
    elif choice == 3:
        break
    
    else:
        print('\n Enter valid choice')
        
        
        