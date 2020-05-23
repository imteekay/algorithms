# https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/


def get_target_copy(original, cloned, target):
    if cloned.val == target.val:
        return cloned

    if cloned.left:
        result = get_target_copy(original.left, cloned.left, target)

        if result:
            return result

    if cloned.right:
        result = get_target_copy(original.right, cloned.right, target)

        if result:
            return result
