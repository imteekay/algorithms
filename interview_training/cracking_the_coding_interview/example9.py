def sum(node):
    if node is None:
        return 0

    return sum(node.left) + node.value + sum(node.right)

# If we have N nodes in our tree, this will be O(N) complexity
