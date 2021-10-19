'''
https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

input: "Let's take LeetCode contest"
output: "s'teL ekat edoCteeL tsetnoc"
'''

def reverse_words(s):
    return ' '.join([word[::-1] for word in s.split(' ')])

print(reverse_words("Let's take LeetCode contest") == "s'teL ekat edoCteeL tsetnoc")
