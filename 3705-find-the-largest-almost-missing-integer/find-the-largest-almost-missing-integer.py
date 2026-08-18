class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        if len(nums) == 1:
            return nums[0]

        elif k == 1:
            maxi = -1
            for num in nums:
                if nums.count(num) == 1:
                    if num > maxi:
                        maxi = num
            return maxi

        elif len(nums) == k:
            maxi = -1
            for num in nums:
                maxi = max(maxi, num)
            return maxi

        else:
            a = nums[0]
            b = nums[-1]
            maxi = max(a, b)
            mini = min(a, b)
            if nums.count(maxi) == 1:
                return maxi
            elif nums.count(mini) == 1:
                return mini
            else:
                return -1
