'''
https://leetcode.com/problems/number-complement/description/

Input: 5
Output: 2

Input: 1
Output: 0
'''

def to_binary(num):
    binary_num = ''
    copy_num = num

    while copy_num > 0:
        binary_num += str(copy_num % 2)
        copy_num /= 2

    return binary_num

def to_binary_complement(binary_num):
    return ''.join(['1' if binary == '0' else '0' for binary in binary_num])

def to_complement(complement_binary_num):
    return sum([pow(2, index) for index, binary in enumerate(complement_binary_num) if binary == '1'])

def find_complement(num):
    binary_num = to_binary(num)
    complement_binary_num = to_binary_complement(binary_num)
    return to_complement(complement_binary_num)

print(find_complement(5) == 2)
print(find_complement(1) == 0)
print(find_complement(8) == 7)
