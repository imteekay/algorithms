# https://leetcode.com/problems/count-of-matches-in-tournament
'''
Runtime: O(N)
Space: O(1)
'''


def number_of_matches(n):
    if n <= 0:
        return 0

    number_of_games = 0

    while n > 1:
        games = n // 2
        number_of_games += games

        if n % 2 == 0:
            n = games
        else:
            n = games + 1

    return number_of_games
