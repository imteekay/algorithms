# https://leetcode.com/problems/find-the-highest-altitude

def largest_altitude(gain):
    highest_altitude, current_altitude = 0, 0 

    for net_gain in gain:
        current_altitude += net_gain
        if current_altitude > highest_altitude:
            highest_altitude = current_altitude
        
    return highest_altitude