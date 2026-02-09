class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto val : nums) freq[val]++;

        int ans = 0;

        for(auto val : nums) {
            if(freq[val]==1) ans+=val;
        }
        
        return ans;
    }
};