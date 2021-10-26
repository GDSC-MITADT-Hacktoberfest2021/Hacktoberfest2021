class Node:

    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def storeInorder(root, inorder):
     

    if root is None:
        return
     

    storeInorder(root.left, inorder)
     

    inorder.append(root.data)
 
    storeInorder(root.right, inorder)
 

def countNodes(root):
    if root is None:
        return 0
 
    return countNodes(root.left) + countNodes(root.right) + 1
 

def arrayToBST(arr, root):

    if root is None:
        return
     

    arrayToBST(arr, root.left)
     root.data = arr[0]
    arr.pop(0)

    arrayToBST(arr, root.right)
 

def binaryTreeToBST(root):

    if root is None:
        return

    n = countNodes(root)

    arr = []
    storeInorder(root, arr)
     

    arr.sort()
 
    arrayToBST(arr, root)

def printInorder(root):
    if root is None:
        return
    printInorder(root.left)
    print root.data,
    printInorder(root.right)
 

root = Node(10)
root.left = Node(30)
root.right = Node(15)
root.left.left = Node(20)
root.right.right = Node(5)

binaryTreeToBST(root)
 
print "Following is the inorder traversal of the converted BST"
printInorder(root)
