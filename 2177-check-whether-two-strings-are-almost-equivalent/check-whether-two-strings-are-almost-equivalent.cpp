class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> word1Freq(26 , 0);
        vector<int> word2Freq(26 , 0);

        for(char ch : word1) {
            word1Freq[ch - 'a']++;
        }

        for(char ch : word2) {
            word2Freq[ch - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if(abs(word1Freq[i] - word2Freq[i]) > 3) return false;
        }

        return true;
    }
};