class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double minimumAverage = sum / k;

        for(int i = 0; i < nums.length - k; i++) {
            sum -= nums[i];
            sum += nums[i+k];

            minimumAverage = Math.max(minimumAverage, sum/k);
        }

        return minimumAverage;
    } 
}