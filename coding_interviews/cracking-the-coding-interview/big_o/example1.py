def foo(array):
    sum = 0
    product = 1

    for element in array:
        sum += element

    for element in array:
        product *= element

    print("%d, %d" %(sum, product))

foo([1, 2, 3, 4, 5])

# The complexity of the foo function is: O(N)
# Initializing sum and product = 1 + 1 = 2
# We iterate through the array two times = 2 * length(array) = 2 * N
# Printing sum and product = 1
# Conclusion: O(2N + 3) = O(N)
