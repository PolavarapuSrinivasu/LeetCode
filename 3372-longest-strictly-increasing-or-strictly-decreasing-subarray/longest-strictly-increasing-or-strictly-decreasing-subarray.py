class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        def longestSubarray(nums):
            cnt = 1
            maxi = 1

            for i in range(0, len(nums)-1):
                if nums[i] < nums[i+1]:
                    cnt += 1
                else:
                    maxi = max(cnt, maxi)
                    cnt = 1
            
            return max(maxi, cnt)

        fromFront = longestSubarray(nums)
        fromBack = longestSubarray(nums[::-1])

        return max(fromFront, fromBack)