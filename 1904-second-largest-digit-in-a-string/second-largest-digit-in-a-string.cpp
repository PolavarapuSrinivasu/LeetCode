class Solution {
public:
    int secondHighest(string s) {
        int maxi1 = -1;
        for(auto ch : s) {
            if(isdigit(ch) and (ch-'0') > maxi1) maxi1 = ch-'0';
        }

        int maxi2 = -1;
        for(auto ch : s) {
            if(isdigit(ch) and ((ch-'0') < maxi1)  and ((ch-'0') > maxi2)) maxi2 = ch-'0'; 
        }

        return maxi2;
    }
};