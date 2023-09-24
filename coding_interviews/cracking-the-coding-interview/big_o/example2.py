def print_pairs(array):
    for i in array:
        for j in array:
            print("%d, %d" %(i, j))

print_pairs([1, 2, 3, 4, 5])

# The complexity of the print_pairs function is: O(N^2)
# We do a nested loop = length(array) ^ 2 = N * 2
# There are O(N^2) pairs
# Conclusion: O(N^2)
