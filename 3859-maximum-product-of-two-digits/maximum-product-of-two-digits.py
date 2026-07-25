class Solution:
    def maxProduct(self, n: int) -> int:
        lst = []

        while n > 0:
            r = n % 10
            lst.append(r)
            n = n // 10

        lst.sort()

        return lst[-1] * lst[-2]