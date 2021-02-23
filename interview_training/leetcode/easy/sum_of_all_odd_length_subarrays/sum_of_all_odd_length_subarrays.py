# https://leetcode.com/problems/sum-of-all-odd-length-subarrays

def sum_odd_length_subarrays(arr):
    odd, sum_of_subarrays = 1, 0
    
    while (odd <= len(arr)):
        for index in range(0, len(arr) - odd + 1):
            sum_of_subarrays += sum(arr[index:index+odd])
            
        odd += 2
            
    return sum_of_subarrays
