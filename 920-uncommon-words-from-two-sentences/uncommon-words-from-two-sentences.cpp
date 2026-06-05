class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;

        int i = 0;
        string str = "";
        while (i < s1.size()) {
            if (s1[i] == ' ') {
                freq[str]++;
                str = "";
            } else {
                str += s1[i];
            }
            i++;
        }

        freq[str]++;
        str = "";
        i = 0;

        while (i < s2.size()) {
            if (s2[i] == ' ') {
                freq[str]++;
                str = "";
            } else {
                str += s2[i];
            }
            i++;
        }

        freq[str]++;

        vector<string> ans;
        for (auto p : freq) {
            if (p.second == 1)
                ans.push_back(p.first);
        }

        return ans;
    }
};