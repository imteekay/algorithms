# https://leetcode.com/problems/number-of-students-unable-to-eat-lunch

def is_empty(arr):
    return len(arr) == 0
    
def count_students(students, sandwiches):
    preferred_circles = 0
    preferred_squares = 0
    
    for student in students:
        if student:
            preferred_squares += 1
        else:
            preferred_circles += 1
            
    while not is_empty(students) and not is_empty(sandwiches):
        if students[0] == sandwiches[0]:
            if students[0]:
                preferred_squares -= 1
            else:
                preferred_circles -= 1
            
            del students[0]
            del sandwiches[0]
        else:
            students.append(students[0])
            del students[0]
            
        if not is_empty(sandwiches) and (sandwiches[0] and preferred_squares == 0 or sandwiches[0] == 0 and preferred_circles == 0):
            break
            
    return len(students)



def count_students(students, sandwiches):
    preferences = [0, 0]
        
    for student in students:
        preferences[student] += 1

    index = 0

    while index < len(students):
        if preferences[sandwiches[index]] > 0:
            preferences[sandwiches[index]] -= 1
        else:
            break
            
        index += 1

    return len(students) - index