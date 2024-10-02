import math
class Node:
    def __init__(self,item=None,left=None,right=None):
        self.item=item
        self.left=left
        self.right=right
class BinaryTree:
    def __init__(self):
        self.root=None

    def insert(self,data): # O(log n)
        self.root = self.rinsert(self.root,data)
    def rinsert(self,root,data): # O(log n)
        if root is None:
            return Node(data)
        if data < root.item:
            root.left = self.rinsert(root.left,data)
        elif data > root.item:
            root.right = self.rinsert(root.right,data)
        return root
    
    def inorder(self): # O(log n)
        result=[]
        self.rinorder(self.root,result)
        return result
    def rinorder(self, root, result): # O(log n)
        if root:
            self.rinorder(root.left,result)
            result.append(root.item)
            self.rinorder(root.right,result)
    def size(self): # O(log n)
        return len(inorder())
    def preorder(self): # O(log n)
        result=[]
        self.rpreorder(self.root,result)
        return result
    def rpreorder(self,root,result): # O(log n)
        if root:
            result.append(root.item)
            self.rpreorder(root.left,result)
            self.rpreorder(root.right,result)
    def postorder(self): # O(log n)
        result=[]
        self.rpostorder(self.root,result)
        return result
    def rpostorder(self,root,result): # O(log n)
        if root:
            self.rpostorder(root.left,result)
            self.rpostorder(root.right,result)
            result.append(root.item)
    def min(self): # O(log n)
        return self.rmin(self.root)
    def rmin(self,root): # O(log n)
        if root:
            while root.left:
                root = root.left
            return root.item
        return None
    def max(self): # O(log n)
        return self.rmax(self.root)
    def rmax(self,root): # O(log n)
        if root:
            while root.right:
                root = root.right
            return root.item
        return None
    def height(self): # O(n)
        return self.rheight(self.root)
    def rheight(self,root):
        if root:
            lh = self.rheight(root.left)
            rh = self.rheight(root.right)
            return max(lh,rh) + 1
        return 0
    # count of nodes of tree - O(n)
    def count(self):
        return self.rcount(self.root)
    def rcount(self,root):
        if root:
            return self.rcount(root.left) + self.rcount(root.right) +1
        return 0
    # sum of nodes
    def sum(self):
        return self.rsum(self.root)
    def rsum(self,root): # O(n)
        if root:
            return self.rsum(root.left) + self.rsum(root.right) + root.item
        return 0
        
bt = BinaryTree()
bt.insert(10)
bt.insert(5)
bt.insert(1)
bt.insert(20)
# bt.insert(0)
# bt.insert(30)

# bt.insert(20) # it is like set() duplicate value of not inserted
# for item in bt.inorder():
#     print(item,end=" ")

# print()
# print(bt.min())
# print(bt.max())
print("height of root =",bt.height())
print("no. of nodes =",bt.count())
print("sum of nodes value =",bt.sum())

