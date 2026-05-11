class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (auto val : nums) {
            vector<int> temp;

            if (val == 0)
                temp.push_back(0);

            while (val) {
                temp.push_back(val % 10);
                val /= 10;
            }

            reverse(temp.begin(), temp.end());

            for (int d : temp) {
                ans.push_back(d);
            }
        }

        return ans;
    }
};