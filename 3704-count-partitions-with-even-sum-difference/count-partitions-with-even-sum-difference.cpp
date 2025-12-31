class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int right = 0;
        for(auto val : nums) right+=val;
        int ans = 0;
        int left = 0;
        for(int i=0;i<nums.size()-1;i++) {
            left+=nums[i];
            right-=nums[i];
            if(abs(left-right)%2==0) ans++;
        }
        return ans;
    }
};