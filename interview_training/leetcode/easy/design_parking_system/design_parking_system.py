# https://leetcode.com/problems/design-parking-system

class ParkingSystem:
    def __init__(self, big, medium, small):
        self.big = big
        self.medium = medium
        self.small = small

    def add_car(self, car_type):
        if car_type == 1:
            if self.big >= 1:
                self.big -= 1
                return True
            else:
                return False
        
        if car_type == 2:
            if self.medium >= 1:
                self.medium -= 1
                return True
            else:
                return False
        
        if car_type == 3:
            if self.small >= 1:
                self.small -= 1
                return True
            else:
                return False
