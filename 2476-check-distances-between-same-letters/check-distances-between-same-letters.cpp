class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> start(26, -1);
        vector<int> end(26, -1);

        for (int i = 0; i < s.size(); i++) {
            int t = s[i] - 'a';
            if (start[t] == -1) {
                start[t] = i;
            } else {
                end[t] = i;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (start[i] == -1)
                continue;
            if (end[i] - start[i] - 1 != distance[i])
                return false;
        }

        return true;
    }
};