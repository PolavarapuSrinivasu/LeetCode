class Solution {
public:
    int maxPower(string s) {
        char ch = s[0];
        int maxi = 0;
        int cnt = 1;
        for(int i=1;i<=s.size();i++) {
            if(s[i]!=ch) {
                ch = s[i];
                maxi = max(maxi,cnt);
                cnt = 1;
            }
            else cnt++;
        }

        maxi = max(maxi,cnt);

        return maxi;
    }
};