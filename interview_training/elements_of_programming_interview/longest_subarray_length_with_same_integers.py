'''
Write a program that takes an array of integers and finds
the length of a longest subarray all of whose entries are equal.
'''

def longest_subarray_length_with_same_integers(numbers):
    if not numbers:
        return 0

    longest_subarray_length, counter, current_comparator = 0, 0, numbers[0]

    for number in numbers:
        if number == current_comparator:
            counter += 1
        else:
            counter = 1
            current_comparator = number

        longest_subarray_length = max(longest_subarray_length, counter)

    return longest_subarray_length

numbers = [260, 290, 290, 250, 250, 250]
prices = [310, 315, 275, 295, 260, 270, 290, 230, 255, 250]

print(longest_subarray_length_with_same_integers(numbers))
print(longest_subarray_length_with_same_integers(prices))
print(longest_subarray_length_with_same_integers([]))
