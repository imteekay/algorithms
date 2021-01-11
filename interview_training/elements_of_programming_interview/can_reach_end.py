"""
In a particular board garne, a player has to try to advance through a sequence of positions. Each
position has a nonnegative integer associated with it, representing the maximum you can advance
from that position in one move. You begin at the first position, and win by getting to the last
position. For example, let A = (3,3,1,0,2,0,1) represent the board game, i.e., the lth entry in A is
the maximum we can advance from L Then the game can be won by the following sequence of
advances through A: take 1 step from A[0] to A[1], then 3 steps from A[1] to A[4], then 2 steps from
A[4] to A[6], which is the last position. Note that A[0] = 3 >= 1, A[1] =3 >= 3, and A[4] = 2 >= 2, so all
moves are valid. If A instead was (3,2,0,0,2,0,1), it would not possible to advance past position 3,
so the game cannot be won.

Write a program which takes an array of n integers, where A[i] denotes the maximum you can
advance from index l, and retums whether it is possible to advance to the last index starting from
the beginning of the array.
"""

def can_reach_end(A):
    furthest_reach_so_far, last_index = 0, len(A) - 1
    current_index = 0

    while current_index <= furthest_reach_so_far and furthest_reach_so_far < last_index:
        furthest_reach_so_far = max(furthest_reach_so_far, A[current_index] + current_index)
        current_index += 1
    
    return furthest_reach_so_far >= last_index

print(can_reach_end([3, 3, 7, 0, 2, 0, 1]))
print(can_reach_end([2, 4, 1, 1, 0, 2, 3]))