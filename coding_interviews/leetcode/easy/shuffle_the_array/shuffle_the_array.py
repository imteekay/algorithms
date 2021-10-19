def shuffle(nums, n):
    first_half = nums[:n]
    last_half = nums[n:]
    final_list = []

    for index in range(len(first_half)):
        final_list.append(first_half[index])
        final_list.append(last_half[index])

    return final_list
