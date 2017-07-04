def pre_order(node):
    print(node.data)

    if node.left:
        pre_order(node.left)

    if node.right:
        pre_order(node.right)
