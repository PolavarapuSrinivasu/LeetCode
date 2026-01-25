class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;

        sort(nums.rbegin(),nums.rend());

        int mini = INT_MAX;
        for(int i=0;i<=nums.size()-k;i++) {
            mini = min(mini,nums[i]-nums[i+k-1]);
        }

        return mini;

    }
};