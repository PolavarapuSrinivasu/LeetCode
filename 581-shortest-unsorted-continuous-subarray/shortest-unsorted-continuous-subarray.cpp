class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int s = -1, e = -1;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                s = i;
                break;
            }
        }

        if (s == -1)
            return 0;

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] < nums[i - 1]) {
                e = i;
                break;
            }
        }

        int mn = nums[s], mx = nums[s];
        for (int i = s; i <= e; i++) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }

        while (s > 0 && nums[s - 1] > mn)
            s--;
        while (e < n - 1 && nums[e + 1] < mx)
            e++;

        return e - s + 1;
    }
};