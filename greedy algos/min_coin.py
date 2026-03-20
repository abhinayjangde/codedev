# Minimum Number Of Coin
# n = 203
coins = [1,2,5,10,20,50,100,200,500,1000]

def min_coin(coins,n):
    ans=[]
    for item in reversed(coins):
        while n>=item:
            n-=item # n = n-item
            ans.append(item)
    return ans
def min_coin2(coins,n):
    ans=[]
    notes,i=0,0
    while (n):
        notes = n//coins[i]
        while(notes):
            ans.append(coins[i])
            notes-=1
        n%=coins[i]
        i+=1
    return ans

print(min_coin2(coins,143))
