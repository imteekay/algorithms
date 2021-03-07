# https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side

def replace_elements(arr):
    index, max_num = len(arr) - 1, -1

    for number in reversed(arr):
        arr[index] = max_num
        max_num = max(number, max_num)
        index -= 1
            
    return arr