class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto val : nums) freq[val]++;

        for(auto p : freq) {
            if(p.second > 2) return false;
        }

        return true;
    }
};