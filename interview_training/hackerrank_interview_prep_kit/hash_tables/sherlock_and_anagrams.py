# https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem?h_l=interview&h_r%5B%5D=next-challenge&h_r%5B%5D=next-challenge&h_v%5B%5D=zen&h_v%5B%5D=zen&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=dictionaries-hashmaps&isFullScreen=true

def sherlock_and_anagrams(s):
    substrings = {}

    for i in range(0, len(s) - 1):
        for index in range(0, len(s) - i):
            sorted_substring = ''.join(sorted(s[index:index+i+1]))
            
            if sorted_substring in substrings:
                substrings[sorted_substring] += 1
            else:
                substrings[sorted_substring] = 1

    count_anagrams = 0

    for _, count in substrings.items():
        if count > 0:
            count_anagrams += (count * (count - 1) // 2)

    return count_anagrams

print(sherlock_and_anagrams('abba'))
print(sherlock_and_anagrams('ifailuhkqq'))
print(sherlock_and_anagrams('kkkk'))
# print(sherlock_and_anagrams('ifailuhkqqhucpoltgtyovarjsnrbfpvmupwjjjfiwwhrlkpekxxnebfrwibylcvkfealgonjkzwlyfhhkefuvgndgdnbelgruel'))

