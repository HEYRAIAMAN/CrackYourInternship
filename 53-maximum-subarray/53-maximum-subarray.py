import sys
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        else:
            maximum = -sys.maxsize - 1
            sum = 0
            for i in range(len(nums)):
                sum += nums[i]
                if sum > maximum:
                    maximum = sum
                if sum < 0:
                    sum = 0
            return maximum
