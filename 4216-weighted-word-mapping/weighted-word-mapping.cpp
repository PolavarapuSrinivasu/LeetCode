class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for(auto word : words) {
            int sum = 0;
            for(auto ch : word) {
                sum += weights[ch-'a'];
            }

            int val = 26 - (sum%26) - 1;

            ans += char('a'+val);
        }

        return ans;
    }
};