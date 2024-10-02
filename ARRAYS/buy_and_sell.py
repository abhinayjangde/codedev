
# Best time to buy and sell the stocks

prices = [7,1,4,6,2,8,10]

def find_max_profit(prices):
    if not prices:
        return 0
    min_price = float('inf')
    max_profit = 0
    for price in prices:
        if price < min_price:
            min_price = price
        elif price - min_price > max_profit:
            max_profit = price - min_price
    return max_profit
    

print(find_max_profit(prices))