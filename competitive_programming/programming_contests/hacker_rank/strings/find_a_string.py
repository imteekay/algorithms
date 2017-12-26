# https://www.hackerrank.com/challenges/find-a-string/problem

# ABCDCDC
# CDC
# 2

# ABCDCDCD
# CD
# 3

# ABCDCDC
# AD
# 0

def count_substring(string, sub_string):
    counter = 0

    for index in range(0, len(string) - len(sub_string) + 1):
        if sub_string == string[index:index + len(sub_string)]:
            counter += 1

    return counter

print(count_substring('ABCDCDC', 'CDC'))
print(count_substring('ABCDCDCD', 'CD'))
print(count_substring('ABCDCDC', 'AD'))
