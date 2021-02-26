# https://leetcode.com/problems/count-good-triplets

'''
Time Complexity: O(N^3)
Space Complexity: O(1) - no extra space rather than the input
'''

def count_good_triplets(arr, a, b, c):
    counter = 0
    
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            for k in range(j+1, len(arr)):
                if abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c:
                    counter += 1
                    
    return counter
