'''
"615"

"5" --> 5 --> 5 * (7 ** 0)
"1" --> 1 --> 1 * (7 ** 1)
"6" --> 6 --> 6 * (7 ** 2)

=> 306

306 % 13 = 7
306 / 13 = 23

23 % 13 = 10
23 / 13 = 1

1 % 13 = 1
'''

num_representation = {
  10: 'A',
  11: 'B',
  12: 'C',
  13: 'D',
  14: 'E',
  15: 'F',
}

def to_num_representation(num):
    if num < 10:
        return str(num)

    return num_representation[num]

def base_conversion(string_num, base1, base2):
    decimal = 0
    reversed_string_num = string_num[::-1]

    for index in range(len(reversed_string_num)):
        char_num = reversed_string_num[index]
        decimal += int(char_num) * (base1 ** index)

    digits = []
    
    while decimal:
        modulo = decimal % base2
        decimal = decimal // base2
        digits.append(to_num_representation(modulo))

    return ''.join(digits)[::-1]


print(base_conversion("615", 7, 13))
