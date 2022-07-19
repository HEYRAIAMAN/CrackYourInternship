class Solution(object):
    def twoSum(self, nums, target):
        res=[]
        l=[target-x for x in nums]
        i=0
        while i<len(nums):
            if l[i] in nums and nums.index(l[i])!=i :
                return([i,nums.index(l[i])])
            i+=1
        return(res)
        