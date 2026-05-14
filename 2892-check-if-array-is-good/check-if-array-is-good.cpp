class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size()-1;

        unordered_map<int,int>mpp;

        for(auto val : nums) mpp[val]++;

        int c = 0;
        for(int i = 1; i <= n-1; i++) {
            if(mpp[i]!=1) return false;
        }

        if(mpp[n]!=2) return false;
        return true;
    }
};