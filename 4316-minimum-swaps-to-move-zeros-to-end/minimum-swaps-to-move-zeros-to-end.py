class Solution:
    def minimumSwaps(self, nums: list[int]) -> int:
        cnt = nums.count(0)

        nums = nums[::-1]

        for i in range(cnt):
            if nums[i] == 0:
                cnt -= 1

        return cnt