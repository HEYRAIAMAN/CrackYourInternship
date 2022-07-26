class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        nums1 = sorted(nums1 + nums2)
        
        l = len(nums1)
        
        if l % 2:
            return nums1[l // 2] 
        else:
            l //= 2
            return (nums1[l] + nums1[l - 1]) / 2