class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        lst = []

        for val in nums:
            lst.append(val * val)

        lst.sort()

        return lst