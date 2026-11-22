class Solution:
    def checkString(self, s: str) -> bool:
        count1 = 0
        count2 = 0
        flag = True
        count_b = 0
        for ch in s:
            if ch == 'b' and flag == True:
                count1 = count2
                flag = False
            if ch == 'a':
                count2 += 1
            if ch == 'b':
                count_b += 1

        if count1 == count2 or count_b == 0:
            return True
        else:
            return False