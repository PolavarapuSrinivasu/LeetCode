class Solution {
public:
    int numberOfSpecialChars(string word) {
        int c = 0;

        unordered_map<int, int> lower_freq;
        for (auto ch : word) {
            if (ch >= 'a' and ch <= 'z')
                lower_freq[ch - 'a']++;
        }

        vector<int> freq(26, 0);

        for (auto ch : word) {
            if (ch >= 'a' and ch <= 'z') {
                freq[ch - 'a']++;
            } else {
                if(lower_freq[ch - 'A']!=0 and freq[ch - 'A'] == lower_freq[ch - 'A']){
                    c++;
                    lower_freq[ch - 'A'] = 0;
                }
                else if(lower_freq[ch - 'A'] != freq[ch - 'A']) {
                    lower_freq[ch - 'A'] = 0;
                }
            }
        }

        return c;
    }
};