class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr.sort()

        d = len(arr) // 20

        trimmed_array = arr[d : len(arr) - d]

        return sum(trimmed_array) / len(trimmed_array)