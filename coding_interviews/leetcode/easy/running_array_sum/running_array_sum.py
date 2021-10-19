def running_sum(nums):
    sum = 0
    result = []

    for num in nums:
        sum += num
        result.append(sum)

    return result
