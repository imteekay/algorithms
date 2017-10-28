def reverse(array):
    for i in range(len(array) / 2):
        index = len(array) - i - 1
        temporary_num = array[index]
        array[index] = array[i]
        array[i] = temporary_num

    return array

new_array = reverse([1, 2, 3, 4, 5])

for i in new_array:
    print(i)

# The complexity of the reverse function is: O(N)
# Even though we iterate only through half of the array (O(N/2)), we still consider this a O(N) complexity
# Conclusion: O(N)
