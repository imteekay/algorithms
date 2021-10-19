# https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts

def generate_the_string(n):
    if n % 2 == 0:
        return 'a' * (n - 1) + 'b'
    
    return 'a' * n