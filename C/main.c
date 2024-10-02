#include <stdio.h>
#include <math.h>

void main() {
    int i=0,n,x,s=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while(n!=0){
        x = n%2; // 1
        n = n/2; // 1
        s = s + pow(10,i)*x; // 1 + 10^2*1 = 101
        printf("x: %d\n",x);
        printf("n: %d\n",n);
        printf("s: %d\n",s);
        i++; // 2
    }
    printf("Binary equivalent: %d",s);
}