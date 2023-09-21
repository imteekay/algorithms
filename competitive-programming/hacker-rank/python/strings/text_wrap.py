# https://www.hackerrank.com/challenges/text-wrap/problem

import textwrap

def wrap(string, max_width):
    wrapped_text = ''

    for i in range(1, len(string) + 1):
        if i % max_width == 0:
            wrapped_text += string[i-1]
            print(wrapped_text)
            wrapped_text = ''
        else:
            wrapped_text += string[i-1]

    return wrapped_text

print(wrap('ABCDEFGHIJKLIMNOQRSTUVWXYZ', 4))
