def process_queries(queries, m):
    result = []
    list_m = list(range(1, m + 1))

    for index in range(len(queries)):
        for index_m in range(len(list_m)):
            if queries[index] == list_m[index_m]:
                result.append(index_m)
                list_m = [list_m[index_m]
                          ] + list_m[:index_m] + list_m[index_m + 1:]
                break

    return result
