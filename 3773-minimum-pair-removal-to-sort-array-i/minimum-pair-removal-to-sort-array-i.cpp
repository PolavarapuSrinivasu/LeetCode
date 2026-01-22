class Solution {
public:

    bool isSorted(vector<int>nums) {
        for(int i=0;i<nums.size()-1;i++) {
            if(nums[i] > nums[i+1]) return false;
        }

        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while(!(isSorted(nums))) {
            int i1 = 0;
            for(int i=0;i<nums.size()-1;i++) {
                if(nums[i1]+nums[i1+1] > nums[i]+nums[i+1]) {
                    i1 = i;
                }
            }

            int sum = nums[i1] + nums[i1+1];
            nums.erase(nums.begin()+i1);
            nums.erase(nums.begin()+i1);
            nums.insert(nums.begin()+i1,sum);

            count++;
        }

        return count;
    }
};