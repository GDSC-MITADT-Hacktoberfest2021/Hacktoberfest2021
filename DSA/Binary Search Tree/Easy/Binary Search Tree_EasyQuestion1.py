class newNode:

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def ifNodeExists(node, key):
 
    if (node == None):
        return False
 
    if (node.data == key):
        return True

    res1 = ifNodeExists(node.left, key)

    if res1:
        return True
 
    res2 = ifNodeExists(node.right, key)
 
    return res2
     

if __name__ == '__main__':
    root = newNode(0)
    root.left = newNode(1)
    root.left.left = newNode(3)
    root.left.left.left = newNode(7)
    root.left.right = newNode(4)
    root.left.right.left = newNode(8)
    root.left.right.right = newNode(9)
    root.right = newNode(2)
    root.right.left = newNode(5)
    root.right.right = newNode(6)
 
    key = 4
 
    if (ifNodeExists(root, key)):
        print(1)
    else:
        print(0)
