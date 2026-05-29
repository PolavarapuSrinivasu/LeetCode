class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for(auto val : nums) {
            int sum = 0;
            while(val) {
                int r = val % 10;
                sum += r;
                val /= 10; 
            }
            ans = min(ans, sum);
        }

        return ans;
    }
};