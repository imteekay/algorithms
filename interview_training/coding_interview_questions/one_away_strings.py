# 'abcde'
# 'abfde'
# => True

# 'abcde'
# 'abde'
# => True

# 'abde'
# 'abfde'
# => True

def handle_different_sized_strings(s1, s2):
    indice1, indice2, number_of_differences = 0, 0, 0

    while indice2 < len(s2):
        if number_of_differences > 1:
            return False

        if s1[indice1] != s2[indice2]:
            number_of_differences += 1
            indice1 += 1

        indice1 += 1
        indice2 += 1

    return True

def handle_same_sized_strings(s1, s2):
    number_of_differences = 0

    for indice in range(len(s1)):
        if s1[indice] != s2[indice]:
            number_of_differences += 1

    return number_of_differences == 1

def is_one_away(s1, s2):
    if len(s1) - len(s2) > 1 or len(s2) - len(s1) > 1:
        return False

    if s1 == s2:
        return True

    if len(s1) > len(s2):
        return handle_different_sized_strings(s1, s2)

    if len(s2) > len(s1):
        return handle_different_sized_strings(s2, s1)

    if len(s1) == len(s2):
        return handle_same_sized_strings(s1, s2)

print(is_one_away('abcde', 'abfde'))
print(is_one_away('abcde', 'abde'))
print(is_one_away('abde', 'abfde'))
print(is_one_away('', ''))
print(is_one_away('', 'a'))
print(is_one_away('a', ''))
print(is_one_away('aabb', 'aacc'))

print()

print(is_one_away("abcde", "abcd"))  # should return True
print(is_one_away("abde", "abcde"))  # should return True
print(is_one_away("a", "a"))  # should return True
print(is_one_away("abcdef", "abqdef"))  # should return True
print(is_one_away("abcdef", "abccef"))  # should return True
print(is_one_away("abcdef", "abcde"))  # should return True
print(is_one_away("aaa", "abc"))  # should return False
print(is_one_away("abcde", "abc"))  # should return False
print(is_one_away("abc", "abcde"))  # should return False
print(is_one_away("abc", "bcc"))  # should return False
