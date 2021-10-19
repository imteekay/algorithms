# https://leetcode.com/problems/goal-parser-interpretation


def interpret(command):
    result, empty_paren = [], True

    for char in command:
        if char == 'G':
            result.append('G')
        else:
            if char == ')':
                if empty_paren:
                    result.append('o')
                else:
                    result.append('al')
                empty_paren = True
            elif char != '(':
                empty_paren = False

    return ''.join(result)
