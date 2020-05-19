# https://leetcode.com/problems/defanging-an-ip-address/

'''
"1.1.1.1"
"1[.]1[.]1[.]1"

"255.100.50.0"
"255[.]100[.]50[.]0"
'''


def defang_ip_address(address):
    address_chars_list = []

    for char in address:
        if char == '.':
            address_chars_list.append('[.]')
        else:
            address_chars_list.append(char)

    return ''.join(address_chars_list)


data_tests = [
    ("1.1.1.1", "1[.]1[.]1[.]1"),
    ("255.100.50.0", "255[.]100[.]50[.]0")
]

for address, expected in data_tests:
    result = defang_ip_address(address)
    print(result, result == expected)
