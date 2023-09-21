# https://www.hackerrank.com/challenges/birthday-cake-candles/problem

def birthday_cake_candles(n, ar):
    sorted_ar = sorted(ar, reverse = True)
    tallest = sorted_ar[0]
    result = 0

    for candle_height in sorted_ar:
        if tallest == candle_height:
            result += 1

    return result

print(birthday_cake_candles(int(raw_input()), map(int, raw_input().strip().split(' '))))
