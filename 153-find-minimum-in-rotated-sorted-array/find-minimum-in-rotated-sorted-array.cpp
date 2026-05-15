class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = nums[0];

        for(auto val : nums) {
            mini = min(mini , val);
        }

        return mini;
    }
};