h = [4,2,0,6,3,2,5]
def trapped_water(height):
    n=len(height)
    if len(height)>2:
        # leftMax boundry - array
        leftMax=list()
        leftMax.insert(0,height[0])
        for i in range(1,n):
            leftMax.insert(i,max(height[i],leftMax[i-1]))
        
        # rightMax boundry - array
        rightMax=list()
        rightMax.insert(n-1,height[n-1])
        for i in range(n-2,-1):
            rightMax.insert(i,max(height[i],rightMax[i+1]))
        # loop
        trappedWater = 0
        for i in range(0,n-1):
            # waterLevel = min(leftMax,rightMax)
            waterLevel = min(leftMax[i], rightMax[i])
            # trappedWater = waterLevel - height[i]
            trappedWater+=waterLevel-height[i]
        return trappedWater
    return 0

print(trapped_water(h))