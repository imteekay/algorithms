def sequential_search(list, item):
    for element in list:
        if element == item:
            return True

    return False

list = [1, 2, 32, 8, 17, 19, 42, 13, 0]
print(sequential_search(list, 3))
print(sequential_search(list, 13))
