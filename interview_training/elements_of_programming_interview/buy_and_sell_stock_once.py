# Buy and Sell stoks once

def buy_and_sell_stock_once(prices):
    if not prices:
        return 0

    min_price, max_profit = float('inf'), 0.0

    for price in prices:
        profit_if_sell_today = price - min_price
        max_profit = max(max_profit, profit_if_sell_today)
        min_price = min(min_price, price)

    return max_profit

def test(prices):
    print(buy_and_sell_stock_once(prices))

prices = [310, 315, 275, 295, 260, 270, 290, 230, 255, 250]
test(prices)
