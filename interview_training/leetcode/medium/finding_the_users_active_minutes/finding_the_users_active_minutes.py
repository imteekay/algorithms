# https://leetcode.com/problems/finding-the-users-active-minutes

def build_unique_actions_by_id(logs):
    unique_actions_by_id = {}    
    
    for [id, minute] in logs:
        if id in unique_actions_by_id:
            unique_actions_by_id[id].add(minute)
        else:
            unique_actions_by_id[id] = set({minute})
            
    return unique_actions_by_id

def build_count_by_actions_number(unique_actions_by_id):
    count = {}
    
    for _, actions in unique_actions_by_id.items():
        if len(actions) in count:
            count[len(actions)] += 1
        else:
            count[len(actions)] = 1
            
    return count

def build_answer(count_by_actions_number, k):
    answer = []

    for num in range(1, k + 1):
        if num in count_by_actions_number:
            answer.append(count_by_actions_number[num])
        else:
            answer.append(0)
            
    return answer

def finding_users_active_minutes(logs, k):
    unique_actions_by_id = build_unique_actions_by_id(logs)
    count_by_actions_number = build_count_by_actions_number(unique_actions_by_id)
    return build_answer(count_by_actions_number, k)
