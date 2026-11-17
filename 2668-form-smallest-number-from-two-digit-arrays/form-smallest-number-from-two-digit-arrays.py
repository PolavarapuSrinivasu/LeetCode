class Solution:
    def minNumber(self, nums1: list[int], nums2: list[int]) -> int:
        mini = 10
        for val in nums1:
            if val in nums2:
                mini = min(val, mini)

        if mini != 10:
            return mini

        val1 = min(nums1)
        val2 = min(nums2)

        if val1 < val2:
            return val1 * 10 + val2
        else:
            return val2 * 10 + val1