class Solution:
    def minOperations(self, nums, k):
        seen = set()
        
        for num in nums:
            if num < k:
                return -1
            if num > k:
                seen.add(num)
        
        return len(seen)