# https://leetcode.com/problems/number-of-recent-calls

class RecentCounter:
    def __init__(self):
        self.requests = []

    def ping(self, t: int) -> int:
        self.requests.append(t)
        initial_time = t - 3000
        
        counter = 0
        
        for request in self.requests:
            if request >= initial_time and request <= t:
                counter += 1
        
        return counter

class RecentCounter:
    def __init__(self):
        self.requests = deque()

    def ping(self, t: int) -> int:
        self.requests.append(t)
        
        while self.requests[0] < t - 3000:
            self.requests.popleft()
            
        return len(self.requests)