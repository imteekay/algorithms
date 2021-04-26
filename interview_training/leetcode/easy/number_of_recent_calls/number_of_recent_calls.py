# https://leetcode.com/problems/number-of-recent-calls

class RecentCounter:
    def __init__(self):
        self.requests = deque()

    def ping(self, t: int) -> int:
        self.requests.append(t)
        
        while self.requests[0] < t - 3000:
            self.requests.popleft()
            
        return len(self.requests)