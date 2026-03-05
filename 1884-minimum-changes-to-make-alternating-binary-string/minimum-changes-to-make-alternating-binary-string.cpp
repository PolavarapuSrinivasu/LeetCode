class Solution {
public:
    int minOperations(string s) {
        int cnt1 = 0;
        for(int i=0;i<s.size();i++) {
            if(i%2==0 and s[i]!='0') cnt1++;
            if(i%2!=0 and s[i]!='1') cnt1++;  
        }

        int cnt2 = 0;
        for(int i=0;i<s.size();i++) {
            if(i%2==0 and s[i]!='1') cnt2++;
            if(i%2!=0 and s[i]!='0') cnt2++;
        }

        return min(cnt1,cnt2);
    }
};