# https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

def is_point_within_circuference(qx, qy, qr, px, py):
    return qr ** 2 >= abs(qx - px) ** 2 + abs(qy - py) ** 2

def count_points(points, queries):
    answer = []
    
    for [qx, qy, qr] in queries:
        count = 0
        
        for [px, py] in points:
            if is_point_within_circuference(qx, qy, qr, px, py):
                count += 1

        answer.append(count)
        
    return answer
