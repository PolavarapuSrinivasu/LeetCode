class Solution:
    def maxLength(self, nums: List[int]) -> int:
        maxi = 0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if math.prod(nums[i:j+1]) == math.lcm(*nums[i:j+1]) * math.gcd(*nums[i:j+1]):
                    maxi = max(maxi, (j-i+1))

        return maxi
