# https://leetcode.com/problems/determine-color-of-a-chessboard-square/

mapper = {
    'a': 1,
    'b': 2,
    'c': 3,
    'd': 4,
    'e': 5,
    'f': 6,
    'g': 7,
    'h': 8
}

def is_even(num):
    return num % 2 == 0

def square_is_white(coordinates):
    x, y = mapper[coordinates[0]], int(coordinates[1])
    if x == y or (is_even(x - y)): return False
    return True

def square_is_white(coordinates):
    x, y = mapper[coordinates[0]], int(coordinates[1])
    return not (x == y or (is_even(x - y)))

def square_is_white(coordinates):
    return ord(coordinates[0]) % 2 != int(coordinates[1]) % 2
