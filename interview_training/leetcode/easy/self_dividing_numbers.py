'''
https://leetcode.com/problems/self-dividing-numbers/description/

Input: left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
'''

def self_dividing_numbers(left, right):
    output = []

    for number in range(left, right + 1):
        if dividing(number, number): output.append(number)

    return output

def dividing(number, original):
    if number == 0: return True
    if number % 10 == 0: return False
    return dividing(number / 10, original) and original % (number % 10) == 0

print(self_dividing_numbers(1, 22) == [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22])
