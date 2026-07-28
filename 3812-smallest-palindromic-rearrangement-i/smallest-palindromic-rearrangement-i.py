class Solution:
    def smallestPalindrome(self, s: str) -> str:
        lst = [0] * 26
        size = len(s)
        
        for ch in s:
            lst[ord(ch)-97] += 1

        mid = None

        if size % 2 != 0:
            for i in range(26):
                if lst[i] % 2 != 0:
                    mid = chr(ord('a') + i)
                    break
        ans = ""
        for i in range(26):
            if lst[i] == 0: 
                continue
            m = lst[i] // 2
            while m > 0:
                ans += chr(ord('a') + i)
                m -= 1
        
        if mid == None:
            return ans + ans[ : : -1]

        else: 
            return  ans + mid + ans[ : : -1]
