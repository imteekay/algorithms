def list_sum(list):
    if len(list) == 1:
        return list[0]
    else:
        return list[0] + list_sum(list[1:])

list = [1, 2, 3, 4, 5]
print(list_sum(list))

list = [0, 1, 0, 0, 0]
print(list_sum(list))

list = [1, 2, 1, 1, 10]
print(list_sum(list))
