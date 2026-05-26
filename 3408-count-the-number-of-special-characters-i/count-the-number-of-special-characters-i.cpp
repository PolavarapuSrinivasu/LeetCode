class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>freq(26,0);
        for(auto ch : word) {
            if(ch >= 'a' and ch <= 'z') {
                freq[ch-'a']++;
            }
            else {
                freq[ch-'A']+=50;
            }
        }

        int c = 0;
        for(auto val : freq) {
            if(val > 50 and val % 50 != 0) c++;
        }

        return c;
    }
};