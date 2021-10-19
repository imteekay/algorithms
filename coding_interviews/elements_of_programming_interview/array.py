# Your input is an array of
# integers, and you have to reorder its entries
# so that the even entries appear first.

def even_before_odd(numbers):
    next_even, next_odd = 0, len(numbers)
    
    while next_even < next_odd:
        if numbers[next_even] % 2 == 0:
            next_even += 1
        else:
            numbers[next_even], numbers[next_odd] = numbers[next_odd], numbers[next_even]
            next_odd -= 1

## With this solution, we have a O(1) space complexity and O(N) time complexity