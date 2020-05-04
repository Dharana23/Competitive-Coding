class Node:
    def __init__(self, val):
        self.left = None
        self.rigth = None
        self.v = val
        
class Tree:
    def __init__(self):
        self.root = None
    
    def get_root(self):
        return self.root
    
    def add(self, val):
        if self.root is None:
            self.root = Node(val)
        else:
            self._add(val, self.root)
            
    def _add(self, val, node):
        if val < node.v:
            if node.left is not None:
                self._add(val, node.left)
            else:
                node.left = Node(val)
        else:
            if node.right is not None:
                self._add(val, node.right)
            else:
                node.right = Node(val)
        
    def find(self, val):
        if self.root is not None:
            return self._find(val, self.root)
         
    def _find(self, val, node):
        if val == node.v:
            print('\n Found the value')
            
        elif val < node.v and node.left is not None:
            self._find(val, node.left)
            
        elif val > node.v and node.right is not None:
            self._find(val, node.right)
        
        else:
            print('\n Value not found')
            
    def deleteTree(self):
        self.root = None
        print('\n Tree deleted')

    def printTree(self):
        if self.root is not None:
            self._printTree(self.root)
            
    def _printTree(self, node):
        if node is not None:
            self._printTree(node.left)
            print(str(node.v))
            
tree = Tree()
while True:
    print('\n 1. Add element')
    print('\n 2. Search element')
    print('\n 3. Print tree')
    print('\n 4. Delete tree and exit')
    
    choice = int(input('\n Enter your choice:'))

    if choice == 1:
        val = int(input('\n Enter the value'))
        tree.add(val)
        
    elif choice == 2:
        val = int(input('\n Enter the value:'))
        tree.find(val)
        
    elif choice == 3:
        tree.printTree()
        
    elif choice == 4:
        tree.deleteTree()
        break
    
    else:
        print('\n Wrong choice')
