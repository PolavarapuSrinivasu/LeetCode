class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        freq = {}

        for val in nums:
            if val in freq.keys():
                freq[val] += 1
            else:
                freq[val] = 1
        
        freq = dict(sorted(freq.items(), reverse = True))
        freq = dict(sorted(freq.items(), key=lambda item: item[1]))

        result = []

        for key in freq.keys():
            for i in range(0, freq[key]):
                result.append(key)

        return result