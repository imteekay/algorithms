# https://leetcode.com/problems/sum-of-all-odd-length-subarrays

'''
Time complexity: O(O*A*S) or O(N^3) to simplify, where O = number of odd numbers, A = length of arr, and S = sum of the subarrays
Space complexity: O(1)
'''

def sum_odd_length_subarrays(arr):
    odd, sum_of_subarrays = 1, 0
    
    while (odd <= len(arr)):
        for index in range(0, len(arr) - odd + 1):
            sum_of_subarrays += sum(arr[index:index+odd])
            
        odd += 2
            
    return sum_of_subarrays

'''
Time complexity: O(N)
Space complexity: O(1)
'''

def sum_odd_length_subarrays_optimized(A):
    sum_of_subarrays, length_of_A = 0, len(A)

    for index, num in enumerate(A):
        sum_of_subarrays += ((index + 1) * (length_of_A - index) + 1) // 2 * num

    return sum_odd_length_subarrays
