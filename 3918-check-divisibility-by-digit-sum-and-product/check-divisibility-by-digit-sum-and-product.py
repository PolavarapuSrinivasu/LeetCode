class Solution:
    def checkDivisibility(self, n: int) -> bool:
        num = str(n)

        sum_num = 0
        product_num = 1

        for i in num:
            sum_num += int(i)
            product_num *= int(i)

        total = sum_num + product_num

        if n % total == 0:
            return True
        else:
            return False