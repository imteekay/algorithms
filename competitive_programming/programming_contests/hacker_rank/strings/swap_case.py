# https://www.hackerrank.com/challenges/swap-case/problem

# A - Z (65 - 90)
# a - z (97 - 122)

def swap_case(s):
    difference = 32
    swapped_s = ''

    for i in s:
        if ord(i) < 65 or (ord(i) > 90 and ord(i) < 97) or ord(i) > 122:
            swapped_s += i
        elif ord(i) <= 90:
            swapped_s += chr(ord(i) + difference)
        else:
            swapped_s += chr(ord(i) - difference)


    return swapped_s

print(swap_case('Www.HackerRank.com'))
print(swap_case('Pythonist 2'))
print(swap_case('HackerRank.com presents "Pythonist 2".'))
