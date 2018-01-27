def common_elements(list1, list2):
    result = []
    point1 = 0
    point2 = 0

    while point1 < len(list1) and point2 < len(list2):
        if list1[point1] == list2[point2]:
            result.append(list1[point1])
            point1 += 1
            point2 += 1
        elif list1[point1] > list2[point2]:
            point2 += 1
        else:
            point1 += 1

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
