class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i = 0
        j = 0
        k = 0
        merged_nums = [0] * (len(nums1) + len(nums2))

        while i < len(nums1) and j < len(nums2):
            if nums1[i] < nums2[j]:
                merged_nums[k] = nums1[i]
                i += 1
                k += 1
            else:
                merged_nums[k] = nums2[j]
                j += 1
                k += 1
        
        while i < len(nums1):
            merged_nums[k] = nums1[i]
            i += 1
            k += 1
        
        while j < len(nums2):
            merged_nums[k] = nums2[j]
            j += 1
            k += 1

        if len(merged_nums) % 2 != 0:
            mid = len(merged_nums) // 2
            return float(merged_nums[mid])
        else:
            mid1 = len(merged_nums) // 2
            mid2 = mid1 - 1
            return (merged_nums[mid1] + merged_nums[mid2]) / 2
