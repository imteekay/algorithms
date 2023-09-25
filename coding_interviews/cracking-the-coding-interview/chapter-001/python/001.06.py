'''
String Compression: Implement a method to perform basic string compression using the
counts of repeated characters. For example, the string aabcccccaaa would become a2b1c5a3.

If the "compressed" string would not become smaller than the original string,
our method should return the original string.

You can assume the string has only uppercase and lowercase letters (a - z).
'''


def string_compression(string):
    if string is '':
        return ''

    counter = 1
    current_char = string[0]
    compressed_string = []

    for char in string[1:]:
        if char == current_char:
            counter += 1
        else:
            compressed_string.append(current_char)
            compressed_string.append(str(counter))
            current_char = char
            counter = 1

    compressed_string.append(current_char)
    compressed_string.append(str(counter))

    return ''.join(compressed_string)


test_cases = [
    ('Aa', 'A1a1'),
    ('aabcccccaaa', 'a2b1c5a3'),
    ('', ''),
    ('abcdef', 'a1b1c1d1e1f1')
]

for [string, expected] in test_cases:
    actual = string_compression(string)
    print(actual == expected)
