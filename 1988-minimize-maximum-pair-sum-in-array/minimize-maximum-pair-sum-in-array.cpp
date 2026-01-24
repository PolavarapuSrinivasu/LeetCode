class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = 0;
        int i=0,j=nums.size()-1;
        while(i<j) {
            maxi = max(nums[i]+nums[j],maxi);
            i++;
            j--;
        }
        return maxi;
    }
};