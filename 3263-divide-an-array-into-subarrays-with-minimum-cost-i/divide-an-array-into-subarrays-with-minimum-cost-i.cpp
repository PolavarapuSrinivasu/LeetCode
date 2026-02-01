class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int min1=nums[0];
        nums.erase(nums.begin());
        sort(nums.begin(),nums.end());
        return min1+nums[0]+nums[1];
    }
};