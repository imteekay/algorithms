'''
https://leetcode.com/problems/judge-route-circle/description/

Example 1:
Input: "UD"
Output: true

Example 2:
Input: "LL"
Output: false
'''

def judge_circle(moves):
    horizontal, vertical = 0, 0
    moves_mapper = { 'U': 1, 'D': -1, 'R': 1, 'L': -1 }
    for move in moves:
        if move in ['U', 'D']:
            vertical += moves_mapper[move]
        else:
            horizontal += moves_mapper[move]

    return horizontal == 0 and vertical == 0

print(judge_circle("UD"))
print(judge_circle("LL"))
