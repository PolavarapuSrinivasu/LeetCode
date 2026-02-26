class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(auto val : arr) {
            mpp[val]++;
        }

        unordered_map<int,int>unq;
        for(auto p : mpp) {
            if(unq[p.second]==0) unq[p.second]++;
            else return false;
        }

        return true;
    }
};