class Solution:
    def maximumDifference(self, nums: list[int]) -> int:
        ans = -1

        for i in range(0, len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] < nums[j]:
                    ans = max(ans, ( nums[j] - nums[i]))

        return ans