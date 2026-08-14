class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        alphabets = "abcdefghijklmnopqrstuvwxyz"
        maxi = 1

        for i in range(0, len(s)):
            for j in range(i, len(s)):
                temp = s[i:j+1]
                isvalid = True
                for char in alphabets:
                    if temp.count(char) > 2:
                        isvalid = False
                        break
                
                if isvalid == True:
                    maxi = max(maxi, len(temp))
                else:
                    break


        return maxi
