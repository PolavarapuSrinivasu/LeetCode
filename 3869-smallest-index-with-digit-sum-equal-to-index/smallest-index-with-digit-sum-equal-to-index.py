class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for i in range(0, len(nums)):
            val = str(nums[i])
            sum = 0
            for d in val:
                sum += int(d)
            if sum == i:
                return i
        
        return -1

        