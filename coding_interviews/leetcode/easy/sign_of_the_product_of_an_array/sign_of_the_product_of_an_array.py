# https://leetcode.com/problems/sign-of-the-product-of-an-array

def array_sign(nums):
    product = 1
    
    for num in nums:
        if num == 0: return 0
        product *= num
        
    if product > 0:
        return 1

    if product < 0:
        return -1