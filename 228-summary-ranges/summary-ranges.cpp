class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int b = nums[i];

            while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) {
                i++;
            }

            b = nums[i];

            if (a == b)
                ans.push_back(to_string(a));
            else
                ans.push_back(to_string(a) + "->" + to_string(b));
        }

        return ans;
    }
};