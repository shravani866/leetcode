class Solution:
    def minOperations(self, nums, k):
        
        if any(num < k for num in nums):
            return -1
        
       
        unique_values = set()
        
        for num in nums:
            if num > k:
                unique_values.add(num)
        
        return len(unique_values)