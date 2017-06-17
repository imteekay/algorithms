def binary_search(list, item):
    if len(list) == 0:
        return False

    middle_index = (len(list) - 1) // 2

    if item == list[middle_index]:
        return True
    elif item > list[middle_index]:
        return binary_search(list[middle_index+1:], item)
    else:
        return binary_search(list[0:middle_index-1], item)

list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(binary_search(list, 8))
print(binary_search(list, 0))
print(binary_search(list, 10))
print(binary_search(list, 89))

other_list = [0, 1, 2, 8, 13, 17, 19, 32, 42,]
print(binary_search(other_list, 3))
print(binary_search(other_list, 13))
