class Solution:
    def findTheDistanceValue(self, arr1: list[int], arr2: list[int], d: int) -> int:
        cnt = 0

        for val1 in arr1:
            flag = True
            for val2 in arr2:
                if abs(val1 - val2) <= d:
                    flag = False
                    break

            if flag == True:
                cnt += 1
            
        return cnt