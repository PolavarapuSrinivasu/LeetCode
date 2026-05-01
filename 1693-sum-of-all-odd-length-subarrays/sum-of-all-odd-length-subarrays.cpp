class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                for (int id = i; id <= j; id++) {
                    if ((j - i + 1) % 2 != 0) {
                        sum += arr[id];
                    }
                }
            }
        }

        return sum;
    }
};