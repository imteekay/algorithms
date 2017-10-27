def print_unordered_pairs(array):
    for i in range(len(array)):
        for j in range(i+1, len(array)):
            print("%d, %d" %(array[i], array[j]))

print_unordered_pairs([1, 2, 3, 4, 5])

# The complexity of the print_unordered_pairs function is: O(N^2)
# We do a nested loop = length(array) * (length(array) - 1) / 2 = (length(array) * 2 - length(array)) / 2 = (N^2 - N) / 2
# There are O((N^2 - N) / 2) pairs
# Conclusion: O(N^2)
