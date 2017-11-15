def post_order(node):
    if node.left:
        post_order(node.left)

    if node.right:
        post_order(node.right)

    print(node.data)
