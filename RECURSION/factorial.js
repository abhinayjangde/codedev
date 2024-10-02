// find factorial using iterative approach
const factorial_iterative = (n)=>{
    ans = 1
    while(n>=1){
        ans*=n
        n-=1
    }
    return ans   
}
console.log("Iterative : ", factorial_iterative(5))

// find factorial using recursion
const factorial = (n)=>{
    if(n<=1){ // this is also valid: n==0 || n==1
        return 1;
    }
    return n * factorial(n-1);
}
console.log("Recursive : ",factorial(0));