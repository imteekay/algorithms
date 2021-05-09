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

# ---------------------------------------------------------------------

def get_sorted_elements_from(node):
    if not node:
        return []
    
    elements = []
    
    if node.left:
        elements = get_sorted_elements_from(node.left)
    
    elements.append(node.val)
    
    if node.right:
        elements += get_sorted_elements_from(node.right)
        
    return elements
    

def get_all_elements(root1, root2):
    sorted_tree_1 = get_sorted_elements_from(root1)
    sorted_tree_2 = get_sorted_elements_from(root2)
    
    index_1, index_2 = 0, 0
    result = []
    
    while index_1 < len(sorted_tree_1) and index_2 < len(sorted_tree_2):
        value1 = sorted_tree_1[index_1]
        value2 = sorted_tree_2[index_2]
        
        if value1 <= value2:
            result.append(value1)
            index_1 += 1
        else:
            result.append(value2)
            index_2 += 1
            
    if index_1 < len(sorted_tree_1):
        result += sorted_tree_1[index_1:]
        
    if index_2 < len(sorted_tree_2):
        result += sorted_tree_2[index_2:]
        
    return result