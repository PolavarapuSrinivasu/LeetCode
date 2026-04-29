class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fromLeft = -1;
        int i = 0;
        while(i < nums.size()) {
            if(nums[i] == target) {
                fromLeft = i;
                break;
            }
            i++;
        }

        int fromRight = -1;
        int j = nums.size()-1;
        while(j >= 0) {
            if(nums[j] == target) {
                fromRight = j;
                break;
            }
            j--;
        }

        return {fromLeft, fromRight};

    }
};