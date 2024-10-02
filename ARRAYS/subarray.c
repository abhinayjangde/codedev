#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void getSubarray(int nums[], int length){
    int total_subarray = 0;
    for (int i = 0; i < length; i++)
    {
        int start = i;
        for (int j = i; j < length; j++)
        {
            int end = j;
            for (int k = start; k <= end; k++)
            {
                printf("%d ", nums[k]);
            }
            total_subarray+=1;
            printf("\n");
            
        }
        printf("\n");
        
    }
    printf("Total no. of subarray is = %d", total_subarray);
    
}
int main(int argc, char *argv[]){
    int nums[] = {1,4,5,7,10};
    int length = sizeof(nums)/sizeof(nums[0]);
    getSubarray(nums, length);
    return 0;
}