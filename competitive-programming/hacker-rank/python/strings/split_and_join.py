# https://www.hackerrank.com/challenges/python-string-split-and-join/problem

# this is a string => this-is-a-string
# 123 456 789 => 123-456-789
# ... ... ... => ...-...-...

def split_and_join(line):
    new_line = ''

    for c in line:
        if c == ' ':
            new_line += '-'
        else:
            new_line += c

    return new_line

print(split_and_join('this is a string'))
print(split_and_join('123 456 789'))
print(split_and_join('... ... ...'))
print(split_and_join('... ... ...  '))
