def in_order(node):
    if node.left:
        in_order(node.left)

    print node.data,

    if node.right:
        in_order(node.right)    
