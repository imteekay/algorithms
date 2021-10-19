'''
Example: Given an array of distinct integer values, count the number of pairs of integers that
have difference k. For example, given the array { 1, 7, 5, 9, 2, 12, 3 } and the difference 
k = 2,there are four pairs with difference2: (1, 3), (3, 5), (5, 7), (7, 9).
'''

def pairs_of_difference(array, diff):
    hash_table = {}

    for num in array:
        hash_table[num] = num

    count = 0

    for num in array:
        if num + diff in hash_table: count += 1
        if num - diff in hash_table: count += 1

    return count // 2

print(pairs_of_difference([1, 7, 5, 9, 2, 12, 3], 2))
