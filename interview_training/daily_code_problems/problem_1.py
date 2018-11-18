'''
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
'''

k = 17
l = [3, 7, 10, 15]
start, end = 0, len(l) - 1
found = False

while start < end:
    print(start, end)
    if l[start] + l[end] == k:
        found = True
        break
    elif l[start] + l[end] > k:
        end -= 1
    else:
        start += 1

print(found)
