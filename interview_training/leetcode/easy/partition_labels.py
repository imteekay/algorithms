'''
https://leetcode.com/problems/partition-labels/description/

Input: S = "ababcbacadefegdehijhklij"
Output: [9, 7, 8]

Input: S = "abc"
Output: [1, 1, 1]

Input: S = "abbaa"
Output: [5]
'''

def partition_labels(S):
    partitions = []
    start_index = 0
    last_index = S.rfind(S[0])

    for i, c in enumerate(S, 1):
        if i == len(S):
            partitions.append(S[start_index:])
        elif last_index == i - 1:
            partitions.append(S[start_index:i])
            start_index = i
            last_index = S.rfind(S[i])
        elif S.rfind(S[i]) > last_index:
            last_index = S.rfind(S[i])

    return [len(partition) for partition in partitions]

print(partition_labels("ababcbacadefegdehijhklij") == [9, 7, 8])
print(partition_labels("abc") == [1, 1, 1])
print(partition_labels("abbaa") == [5])
