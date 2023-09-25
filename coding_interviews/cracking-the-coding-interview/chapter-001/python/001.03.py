'''
URLify: Write a method to replace all spaces in a string with '%20'.
You may assume that the string has sufficient space at the end to hold
the additional characters, and that you are given the "true" length of the string.

Example:
Input: "Mr John Smith ", 13
Output: "Mr%20John%20Smith"
'''

def urlify(string, length):
    original_string = string[0:length]
    chars = []

    for char in original_string:
        if char is " ":
            chars.append("%20")
        else:
            chars.append(char)

    return "".join(chars)


result = urlify("Mr John Smith ", 13)  # => "Mr%20John%20Smith"
print(result)
result = urlify("Mr John Smith ", 14)  # => "Mr%20John%20Smith%20"
print(result)
