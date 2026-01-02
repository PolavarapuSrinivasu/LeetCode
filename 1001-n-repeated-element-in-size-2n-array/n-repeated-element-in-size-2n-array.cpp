class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans;
        for(auto val : nums) {
            if(freq[val]==1) {
                ans = val;
                break;
            }
            freq[val]++;
        }
        return ans;
    }
};