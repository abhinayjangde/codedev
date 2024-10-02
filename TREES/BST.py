class Node:
    def __init__(self,item=None, left=None,right=None):
        self.item = item
        self.left = left
        self.right = right

class BST:
    def __init__(self):
        self.root = None
    def rinsert(self,root,data):
        if root is None:
            return Node(data)
        if data < root.item:
            root.left=self.rinsert(root.left,data)
        elif data > root.item:
            root.right=self.rinsert(root.right,data)
        return root
    def insert(self,data):
        self.root = self.rinsert(self.root, data)
    def rsearch(self,root,data):
        if root is None or root.item == data:
            return root
        if data<root.item:
            return self.rsearch(root.left,data)
        else:
            return self.rsearch(root.right,data)

    def search(self,data):
        return self.rsearch(self.root, data)
    def inorder(self):
        result = []
        self.rinorder(self.root, result)
        return result
    def rinorder(self,root,result):
        if root:
            self.rinorder(root.left,result)
            result.append(root.item)
            self.rinorder(root.right,result)
    def preorder(self):
        result=[]
        self.rpreorder(self.root,result)
        return result
    def rpreorder(self,root,result):
        if root:
            result.append(root.item)
            self.rpreorder(root.left, result)
            self.rpreorder(root.right, result)
    def postorder(self):
        result=[]
        self.rpostorder(self.root,result)
        return result
    def rpostorder(self,root,result):
        if root:
            self.rpostorder(root.left, result)
            self.rpostorder(root.right, result)
            result.append(root.item)

bst = BST()
bst.insert(50)
bst.insert(10)
bst.insert(80)
bst.insert(3)
# item = bst.search(10)
# print(item.item)

for x in bst.inorder():
    print(x,end=" ")


    
    