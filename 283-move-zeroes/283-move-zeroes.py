class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        for i in range(nums.count(0)):
            nums.remove(0)
            nums.append(0)
        return nums
        """
        Do not return anything, modify nums in-place instead.
        """
        