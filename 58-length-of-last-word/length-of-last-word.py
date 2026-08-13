class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip()

        if len(s) == 0:
            return 0

        str_arr = s.split()
        return len(str_arr[-1])