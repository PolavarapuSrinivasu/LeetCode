class Solution:
    def minMoves(self, nums: list[int]) -> int:
        sum = 0
        mini = nums[0]

        for i in nums:
            sum += i
            mini = min(mini, i)

        return sum - (mini * len(nums))