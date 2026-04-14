class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mpp;
        for(auto ch : sentence) {
            mpp[ch] = 1;
        }

        int sum = 0;
        for(auto p : mpp) {
            sum+=p.second;
        }

        if(sum == 26) return true;
        else return false;
    }
};