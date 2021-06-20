class Node:
    def __init__(self, value, left, right):
        self.value = value
        self.left = left
        self.right = right


def sum_and_count_nodes(node, sum_of_values, count):
    if node is None:
        return sum_of_values, count
    
    sum_of_values, count = sum_and_count_nodes(node.left, sum_of_values + node.value, count + 1)
    sum_of_values, count = sum_and_count_nodes(node.right, sum_of_values + node.value, count + 1)
    return sum_of_values, count
    

def median(tree):
    sum_of_values, count = sum_and_count_nodes(tree, 0, 0)
    if count == 0: return 0
    return sum_of_values / count


left = Node(1, None, None)
right = Node(2, None, None)
root = Node(3, left, right)

result = median(root)
print(result)
