# Write a program that takes two arrays representing integers,
# and retums an integer representing their product

"""
1234
4321

result1 = 1 x 4 + 1 x 3 x 10 + 1 x 2 x 100 + 1 x 1 x 1000
result2 = ...
result3 = ...
result4 = ...

result = result1 + result2 + result3 + result4
"""

def multiply_two_arbitrary_precision_integers(int1, int2):
    result = 0

    for integer in int1:
        for index in range(len(int2)):
            result += integer * int2[len(int2) - 1 - index] * pow(10, index)

    return result

print(multiply_two_arbitrary_precision_integers([1,9,3,7,0,7,7,2,1], [-7,6,1,8,3,8,2,5,7,2,8,7]))
