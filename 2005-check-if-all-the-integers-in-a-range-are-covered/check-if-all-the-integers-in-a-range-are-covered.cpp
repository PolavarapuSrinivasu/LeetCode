class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_map<int, int> freq;
        int count = 0;
        for (int i = 0; i < ranges.size(); i++) {
            for (int j = ranges[i][0]; j <= ranges[i][1]; j++) {
                if (j >= left and j <= right) {
                    if (freq[j] == 0) {
                        freq[j] = 1;
                        count++;
                    }
                }
            }
        }

        int total = right - left + 1;
        if (count == total)
            return true;
        else
            return false;
    }
};