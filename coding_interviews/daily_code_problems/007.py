'''
Given the mapping a = 1, b = 2, ... z = 26, and an encoded message,
count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

You can assume that the messages are decodable. For example, '001' is not allowed.
'''


def count_decoded_possibilities(encoded_message):
    pass


count = count_decoded_possibilities('111')
print(count)  # 3 - 'aaa', 'ka', and 'ak'

count = count_decoded_possibilities('121')
print(count)  # 3 - 'aba', 'la', 'au'
