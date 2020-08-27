# https://leetcode.com/problems/all-elements-in-two-binary-search-trees


def get_all_elements(root1, root2):
    values = []
    get_sorted_list(root1, values)
    get_sorted_list(root2, values)
    return sorted(values)


def get_sorted_list(node, values):
    if node.left:
        get_sorted_list(node.left, values)

    values.append(node.val)

    if node.right:
        get_sorted_list(node.right, values)
