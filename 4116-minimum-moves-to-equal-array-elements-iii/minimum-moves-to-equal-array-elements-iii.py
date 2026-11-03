class Solution:
    def minMoves(self, nums: List[int]) -> int:
        maxi = max(nums)

        sum = 0

        for val in nums:
            sum += maxi - val

        return sum
        