class Solution:
    def mergeArrays(self, nums1: List[List[int]], nums2: List[List[int]]) -> List[List[int]]:
        nums1_size = len(nums1)
        nums2_size = len(nums2)
        i = 0
        j = 0

        id = -1

        resultant = []

        while i < nums1_size and j < nums2_size:
            sum = 0
            if nums1[i][0] < nums2[j][0]:
                sum += nums1[i][1]
                id = nums1[i][0]
                i += 1

            elif nums2[j][0] < nums1[i][0]:
                sum += nums2[j][1]
                id = nums2[j][0]
                j += 1

            else:
                sum += nums1[i][1] + nums2[j][1]
                id = nums1[i][0]
                i += 1
                j += 1

            resultant.append([id, sum])

        while i < nums1_size:
            resultant.append([nums1[i][0], nums1[i][1]])
            i += 1

        while j < nums2_size:
            resultant.append([nums2[j][0], nums2[j][1]])
            j += 1

        return resultant