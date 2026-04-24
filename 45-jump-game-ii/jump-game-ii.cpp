class Solution {
public:
    int jump(vector<int>& nums) {
        int i = 0;
        int c = 0;

        while (i < nums.size() - 1) {

            if (i + nums[i] >= nums.size() - 1) {
                c++;
                break;
            }

            int maxi = 0;
            int id = i;

            for (int j = i + 1; j <= i + nums[i] && j < nums.size(); j++) {
                if (maxi < j + nums[j]) {
                    maxi = j + nums[j];
                    id = j;
                }
            }

            c++;
            i = id;
        }

        return c;
    }
};