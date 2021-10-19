# Interconvert String and Integer

'''
"123" => 123
"-123" => -123
'''

def to_int(string):
    sign = 1
    
    if string[0] == '-':
        sign = -1
        string = string[1:]

    integer = 0
    reversed_string = string[::-1]

    for index in range(len(string)):
        int_char = reversed_string[index]
        digit = ord(int_char) - 48
        integer += (digit * 10 ** index)

    return integer * sign

print(to_int('123'))
print(to_int('-123'))

'''
123 => "123"
-123 => "-123"
'''

def to_string(integer):
    sign = ''

    if integer < 0:
        sign = '-'

    abs_integer = abs(integer)
    digits = []

    while abs_integer > 0:
        digits.append(chr(ord('0') + abs_integer % 10))
        abs_integer = abs_integer // 10

    return sign + ''.join(digits[::-1])

print(to_string(123))
print(to_string(-123))
