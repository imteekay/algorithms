'''
https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

Input: [0, 1, 0]
Output: 1

Input: [0, 2, 1, 0]
Output: 1
'''

def peak_index_in_mountain_array(A):
    peak = A[0]
    peak_index = 0

    for index, mountain_height in enumerate(A):
        if mountain_height > peak:
          peak_index = index
          peak = mountain_height

    return peak_index

print(peak_index_in_mountain_array([0, 1, 0]) == 1)
print(peak_index_in_mountain_array([0, 2, 1, 0]) == 1)
