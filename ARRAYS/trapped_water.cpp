#include<iostream>
#include<cmath>

using namespace std;
int trappedWater(int height[], int n){
    int leftMax[n];
    leftMax[0]=height[0];
    for(int i=1; i<n; i++){
        leftMax[i]=max(height[i],leftMax[i-1]);
    }
    int rightMax[n];
    rightMax[n-1] = height[n-1];
    for(int i=n-2; i>=0; i--){
        rightMax[i]=max(height[i], rightMax[i+1]);
    }
    int waterLevel = 0;
    int trappedWater = 0;
    for(int i=0; i<n; i++){
        waterLevel = min(leftMax[i],rightMax[i]);
        trappedWater+=waterLevel-height[i];
    }
    return trappedWater;
}
int main(){
    int height[] = {4};
    int n = sizeof(height)/sizeof(int);
    cout<<trappedWater(height,n)<<endl;
    return 0;
}