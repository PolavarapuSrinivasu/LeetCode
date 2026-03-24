class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;
        int maxi = 0;
        for(auto val : nums) maxi = max(maxi,val);

        while(k--) {
            sum += maxi;
            maxi++;
        }

        return sum;
    }
};