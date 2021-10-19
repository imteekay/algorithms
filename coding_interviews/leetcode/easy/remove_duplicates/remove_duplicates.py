# https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

def remove_duplicates(S):
    if len(S) <= 1: return S

    start, end = 0, 1

    while end < len(S):
        if S[start] != S[end]:
            start = end
            end = start + 1

        elif S[start] == S[end] and end + 1 == len(S):
            S = S[0:start]

        elif S[start] == S[end]:
            S = S[0:start] + S[end+1:]
            start, end = 0, 1

    return S

def remove_duplicates(S):
    stack = []

    for char in S:
        if len(stack) and stack[-1] == char:
            stack.pop()
        else:
            stack.append(char)

    return ''.join(stack)