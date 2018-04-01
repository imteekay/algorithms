# https://leetcode.com/problems/climbing-stairs/description/

def climb_stairs(n):
    memo = [0, 1, 2, 3]

    for i in range(4, n + 1):
        memo.append(memo[i - 1] + memo[i - 2])

    return memo[n]

print climb_stairs(1)
print climb_stairs(2)
print climb_stairs(3)
print climb_stairs(4)
print climb_stairs(5)
print climb_stairs(6)
