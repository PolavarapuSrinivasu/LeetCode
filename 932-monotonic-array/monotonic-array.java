class Solution {
    public boolean isMonotonic(int[] nums) {
        if(nums.length == 1) return true;

        int s = 0;
        while(s < nums.length - 1) {
            if(nums[s] != nums[s+1]) break;
            s++;
        }

        if(s == nums.length - 1) return true;

        int i = 0;
        int d = 0;

        for(int j = s; j < nums.length - 1; j++) {
            if(nums[j] < nums[j+1]) i++;
            else if(nums[j] > nums[j+1]) d++;
            else continue;
        }

        if(i == 0 || d == 0) return true;
        else return false;
    }
}