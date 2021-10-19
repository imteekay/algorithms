def common_elements(list1, list2):
    result = []
    elements = {}

    for item in list1:
        elements[item] = 1

    for item in list2:
        if item in elements:
            result.append(item)

    return result


# common_elements(list_a1, list_a2) should return [1, 4, 9] (a list).
list_a1 = [1, 3, 4, 6, 7, 9]
list_a2 = [1, 2, 4, 5, 9, 10]
print(common_elements(list_a1, list_a2))

# common_elements(list_b1, list_b2) should return [1, 2, 9, 10, 12] (a list).
list_b1 = [1, 2, 9, 10, 11, 12]
list_b2 = [0, 1, 2, 3, 4, 5, 8, 9, 10, 12, 14, 15]
print(common_elements(list_b1, list_b2))

# common_elements(list_b1, list_b2) should return [] (an empty list).
list_c1 = [0, 1, 2, 3, 4, 5]
list_c2 = [6, 7, 8, 9, 10, 11]
print(common_elements(list_c1, list_c2))
