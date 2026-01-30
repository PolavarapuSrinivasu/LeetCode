class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = nums[0];
        int index = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > maxi){
                maxi = nums[i];
                index = i;
            }
        }

        for(auto val : nums) {
            if(val==maxi) continue;
            if(val*2 > maxi) return -1; 
        }

        return index;
    }
};