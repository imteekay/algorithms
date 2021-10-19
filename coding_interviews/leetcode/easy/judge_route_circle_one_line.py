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
    return moves.count("U") == moves.count("D") and moves.count("R") == moves.count("L")

print(judge_circle("UD"))
print(judge_circle("LL"))
