# https://leetcode.com/problems/arithmetic-subarrays

def check_arithmetic_subarrays(nums, l, r):
    answer = []

    for index in range(len(l)):
        l_value = l[index]
        r_value = r[index]
        nums_range = sorted(nums[l_value:r_value+1])
        is_arithmetic = True
        diff = nums_range[1] - nums_range[0]
        
        for i in range(2, len(nums_range)):
            if diff != nums_range[i] - nums_range[i-1]:
                is_arithmetic = False
                break

        answer.append(is_arithmetic)
        
    return answer
