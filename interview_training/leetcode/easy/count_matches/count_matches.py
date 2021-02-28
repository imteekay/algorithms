# https://leetcode.com/problems/count-items-matching-a-rule

def count_matches(items, ruleKey, ruleValue):
    counter = 0

    for item in items:
        if ruleKey == 'type' and item[0] == ruleValue: counter += 1
        if ruleKey == 'color' and item[1] == ruleValue: counter += 1
        if ruleKey == 'name' and item[2] == ruleValue: counter += 1
    
    return counter
