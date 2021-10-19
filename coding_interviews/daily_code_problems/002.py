"""
Given an array of integers,
return a new array such that each element at index i of the new
array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5],
the expected output would be [120, 60, 40, 30, 24].
If our input was [3, 2, 1], the expected output would be [2, 3, 6].
"""

from functools import reduce


def product_with_exception(integers):
    product_of_all = reduce((lambda product, item: product * item), integers)
    return list(map(lambda item: product_of_all / item, integers))


def test_product_with_exception(integers, result):
    print(product_with_exception(integers) == result)


test_product_with_exception([1, 2, 3, 4, 5], [120, 60, 40, 30, 24])
test_product_with_exception([3, 2, 1], [2, 3, 6])
test_product_with_exception(
    [-20, 20, 50, 10], [10000, -10000, -4000, -20000])
