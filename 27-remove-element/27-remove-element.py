class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        ans=nums.count(val)
        ans1=len(nums)-ans
        for i in range(ans):
            nums.remove(val)
        
        return ans1