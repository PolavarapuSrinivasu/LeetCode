#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current_num = 1;
        int i = 0;
        int missing_count = 0;

        while (missing_count < k) {
            if (i < arr.size() && arr[i] == current_num) {
                i++;
            } else {
                missing_count++;
                if (missing_count == k) {
                    return current_num;
                }
            }
            current_num++;
        }

        return current_num;
    }
};
