# shuffle string
# https://leetcode.com/problems/shuffle-string


def restore_string(s, indices):
    index_to_char_mapper = {}

    for index in range(len(s)):
        index_to_char_mapper[indices[index]] = s[index]

    return ''.join([index_to_char_mapper[index] for index in range(len(s))])
