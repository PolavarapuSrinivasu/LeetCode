class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans = "";

        for(auto str : words) {
            ans += str;
            if(ans == s) return true;
            if(ans.size() > s.size()) return false;
        }

        return false;
    }
};