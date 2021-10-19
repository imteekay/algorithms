# https://leetcode.com/problems/finding-pairs-with-a-certain-sum

class FindSumPairs:
    def __init__(self, nums1, nums2):
        self.nums1 = nums1
        self.nums2 = nums2
        self.nums2_freq = Counter(nums2)

    def add(self, index, val):
        self.nums2_freq[self.nums2[index]] -= 1
        self.nums2[index] += val
        self.nums2_freq[self.nums2[index]] += 1

    def count(self, total):
        count = 0

        for num in self.nums1:
            if (total - num) in self.nums2_freq:
                count += self.nums2_freq[total - num]
                    
        return count

