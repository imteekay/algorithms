# https://leetcode.com/problems/maximum-number-of-coins-you-can-get


def max_coins(piles):
    piles = sorted(piles)
    bob = 0
    me = len(piles) - 2
    alice = len(piles) - 1
    counter = 0

    while me > bob:
        counter += piles[me]
        bob += 1
        me -= 2
        alice -= 2

    return counter
