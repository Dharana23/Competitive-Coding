class Node:
    def __init__(self, val):
        self.childleft = None
        self.childright = None
        self.nodedata = val
        
root = Node(1)
root.childleft = Node(2)
root.childright = Node(3)
root.childleft.childleft = Node(4)
root.childleft.childright = Node(5)

def PreOrd(root):
    if root:
        print(root.nodedata)
        PreOrd(root.childleft)
        PreOrd(root.childright)
PreOrd(root)
