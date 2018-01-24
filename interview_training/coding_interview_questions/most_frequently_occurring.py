def most_frequent(given_list):
    max_item = 0
    result = 0

    if not given_list:
        return None

    frequencies = {}

    for item in given_list:
        if item in frequencies:
            frequencies[item] += 1
        else:
            frequencies[item] = 1

    for keyvalue in frequencies.items():
        if keyvalue[1] > max_item:
            result = keyvalue[0]
            max_item = keyvalue[1]

    return result

# most_frequent(list1) should return 1
list1 = [1, 3, 1, 3, 2, 1]
print(most_frequent(list1))

# most_frequent(list2) should return 3
list2 = [3, 3, 1, 3, 2, 1]
print(most_frequent(list2))

# most_frequent(list3) should return None
list3 = []
print(most_frequent(list3))

# most_frequent(list4) should return 0
list4 = [0]
print(most_frequent(list4))

# most_frequent(list5) should return -1
list5 = [0, -1, 10, 10, -1, 10, -1, -1, -1, 1]
print(most_frequent(list5))
