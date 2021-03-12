# https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

def k_weakest_rows(mat, k):
    sum_index_list = [[sum(row), index] for index, row in enumerate(mat)]
    return [sum_index[1] for sum_index in sorted(sum_index_list)][:k]