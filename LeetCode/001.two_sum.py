class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = {}
        for i in xrange(0, len(nums)):
            if target-nums[i] in d:
                return d[target-nums[i]], i
            else:
                d[nums[i]] = i