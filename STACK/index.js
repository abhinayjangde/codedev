class Stack{
    constructor(){
        this.stack = []
    }

    isEmpty(){
        return this.stack.length === 0;
    }

    size(){
        return this.stack.length;
    }

    push(val){
        this.stack.push(val)
    }
    pop(){
        if(this.isEmpty()){
            throw new Error("Stack Underflow")
        }
        return this.stack.pop();
    }

    peek(){
        if(this.isEmpty()){
            throw new Error("Stack is empty")
        }
        return this.stack[this.stack.length-1]
    }

    printStack(){
        console.log(this.stack.join(" "))
    }

}


