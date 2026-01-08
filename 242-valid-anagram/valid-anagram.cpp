class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26,0);
        for(auto ch : s) ans[ch-'a']++;
        for(auto ch : t) ans[ch-'a']--;
        for(auto f : ans){
            if(f!=0) return false;
        }
        return true;
    }
};