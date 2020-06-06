def sum_and_list(node, total, values):
    left_total = 0
    right_total = 0
    left_values = []
    right_values = []

    if node.left:
        [left_total, left_values] = sum_and_list(node.left, total, values)

    if node.right:
        [right_total, right_values] = sum_and_list(node.right, total, values)

    return [
        total + left_total + node.val + right_total,
        values + left_values + [node.val] + right_values
    ]


def modify_helper(node, mapper):
    if node.left:
        modify_helper(node.left, mapper)

    if node.right:
        modify_helper(node.right, mapper)

    node.val = mapper[node.val]
    return node


def bst_to_gst(root):
    [total, values] = sum_and_list(root, 0, [])

    smaller_total = 0
    mapper = {}

    for value in values:
        mapper[value] = total - smaller_total
        smaller_total += value

    return modify_helper(root, mapper)
