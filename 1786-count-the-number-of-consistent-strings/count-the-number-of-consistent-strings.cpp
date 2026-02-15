class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mpp;
        for(auto ch : allowed) mpp[ch]++;

        int cnt = 0;
        for(auto word : words) {
            bool flag = true;
            for(auto ch : word) {
                if(mpp[ch]==0) {
                    flag = false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;

    }
};