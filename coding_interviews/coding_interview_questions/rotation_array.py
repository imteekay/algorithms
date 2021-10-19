# both arrays are the same size? => true
# is A and B is equal, is A a rotation of B? => false
# is both array is empty, one is a rotation of another? => true

# [1, 2, 3, 4, 5, 6, 7]
# [4, 5, 6, 7, 1, 2, 3]
# True

# [1, 2, 3, 4, 5, 6, 7]
# [4, 3, 6, 7, 1, 2, 3]
# False

# []
# []
# True

def is_rotation(a, b):
    if a == b:
        return True

    if len(a) != len(b):
        return False

    for index in range(1, len(b)):
        if b[index:len(b)] + b[0:index] == a:
            return True

    return False

a = [1, 2, 3, 4, 5, 6, 7]
b = [4, 5, 6, 7, 1, 2, 3]
print(is_rotation(a, b))

a = [1, 2, 3, 4, 5, 6, 7]
b = [4, 3, 6, 7, 1, 2, 3]
print(is_rotation(a, b))

a = []
b = []
print(is_rotation(a, b))
