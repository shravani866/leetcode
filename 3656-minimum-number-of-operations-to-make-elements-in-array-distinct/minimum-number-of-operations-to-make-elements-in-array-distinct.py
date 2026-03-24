class Solution:
    def minimumOperations(self, nums):
        e = 0
        
        while len(nums) != len(set(nums)):
            nums = nums[3:]
            e += 1
            
        return e