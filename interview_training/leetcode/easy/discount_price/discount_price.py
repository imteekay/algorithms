def finalPrices(prices):
    result = []

    for index, price in enumerate(prices):
        discount = get_discount(prices, index, price)
        result.append(price - discount)

    return result


def get_discount(prices, index, price):
    for other_price in prices[index + 1:]:
        if other_price <= price:
            return other_price

    return 0
