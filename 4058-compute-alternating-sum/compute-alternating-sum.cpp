class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int Sum = 0;
        for(int i=0;i<nums.size();i++) {
            if(i%2==0) Sum += nums[i];
            else Sum -= nums[i];
        }

        return Sum;
    }
};