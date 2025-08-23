class Node {
    constructor(data) {
        this.data = data
        this.left = null
        this.right = null
    }
}

class BST {
    constructor() {
        this.root = null
    }
    isEmpty(){
        return this.root === null;
    }

    insert(val){ // TC = O(log n)
        const node = new Node(val)

        // recursion function to insert value into BST
        const insertNode= (root, node)=>{
            if(node.data < root.data){ // val is < root.data
                if(!root.left){
                    root.left = node
                }else{
                    insertNode(root.left, node)
                }
            }
            else{ // val is > root.data
                if(!root.right) root.right = node
                else insertNode(root.right, node)
            }
        }

        if(!this.root) this.root = node
        else insertNode(this.root,node)
    }

    preorder(root=this.root){
        if(root){
            console.log(root.data);
            this.preorder(root.left)
            this.preorder(root.right)
        }
    }
    
    inorder(root=this.root){
        if(root){
            this.preorder(root.left)
            console.log(root.data);
            this.preorder(root.right)
        }
    }
    postorder(node = this.root) {
    if (node) {
        this.postorder(node.left);
        this.postorder(node.right);
        console.log(node.data);
    }
}
}

const bst = new BST()
//      10
//     5  12
//   1   11  20
console.log(bst.isEmpty())
bst.insert(10)
bst.insert(12)
bst.insert(5)
bst.insert(1)
bst.insert(20)
bst.insert(11)

// bst.preorder(); // 10 5 1 12
bst.inorder() // 1, 5, 10, 11, 12, 20