class Solution {
    public boolean isMonotonic(int[] nums) {
        if(nums.length == 1) return true;

        int s = 0;
        while(s < nums.length - 1) {
            if(nums[s] != nums[s+1]) break;
            s++;
        }

        if(s == nums.length - 1) return true;

        if(nums[s] <= nums[s + 1]) {
            for(int i = s; i < nums.length - 1; i++) {
                if(nums[i] > nums[i+1]) return false;
            }
        }

        if(nums[s] >= nums[s + 1]) {
            for(int i = s; i < nums.length - 1; i++) {
                if(nums[i] < nums[i+1]) return false;
            }
        }

        return true;
    }
}