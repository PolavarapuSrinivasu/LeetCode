class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0 || abs(nums[i])%size==0)
                result.push_back(nums[i]);
            else if (nums[i] < 0) {
                int temp = (i+(nums[i]%size) + size)%size;
                result.push_back(nums[temp]);
            } else {
                int temp = (i + nums[i]) % size;
                result.push_back(nums[temp]);
            }
        }
        return result;
    }
};