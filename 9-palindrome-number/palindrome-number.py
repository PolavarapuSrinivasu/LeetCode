class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        num = int(str(x) [::-1])

        if num == x:
            return True
        else:
            return False
