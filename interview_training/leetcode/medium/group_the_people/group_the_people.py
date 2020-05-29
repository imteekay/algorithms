# https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/


def group_the_people(groupSizes):
    grouped_by_size = {}

    for index in range(len(groupSizes)):
        size = groupSizes[index]

        if size in grouped_by_size:
            grouped_by_size[size] += [index]
        else:
            grouped_by_size[size] = [index]

    grouped_by_ids = []

    for size, indices in grouped_by_size.items():
        for index in range(0, len(indices), size):
            grouped_by_ids.append(indices[index:index+size])

    return grouped_by_ids
