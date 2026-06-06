class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightSum = 0;

        int j = nums.size() - 1;

        while (j > 0) {
            rightSum += nums[j--];
        }

        vector<int> ans;

        int leftSum = 0;
        ans.push_back(abs(leftSum - rightSum));
        leftSum += nums[0];
        j = 1;
        while (j < nums.size()) {
            rightSum -= nums[j];
            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[j];
            j++;
        }

        return ans;
    }
};