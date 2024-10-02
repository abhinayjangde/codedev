#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

long long int sumOfN(long long int n){
    return (n*(n+1)/2);
}

long long int iteractiveSum(long long int n){
    long long int sum=0;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
long long int recursiveSum(long long int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n + recursiveSum(n-1);
}
int main(int argc, char *argv[]){
    // printf("%d", sumOfN(10000000000000));
    printf("%d", recursiveSum(100));
    // printf("%d", iteractiveSum(1000000000000000));
    return 0;
}