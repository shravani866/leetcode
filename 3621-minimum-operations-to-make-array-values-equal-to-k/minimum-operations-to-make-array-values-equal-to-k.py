class Solution:
    def minOperations(self, nums, k):
        if min(nums) < k:
            return -1
        return len(set(num for num in nums if num > k))