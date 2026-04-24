class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy = strs;

        for (auto& str : copy)
            sort(str.begin(), str.end());

        vector<vector<string>> ans;

        unordered_map<string, vector<int>> freq;

        for (int i = 0; i < strs.size(); i++) {
            freq[copy[i]].push_back(i);
        }

        for (auto pair : freq) {
            vector<string> temp;

            for (auto id : pair.second) { 
                temp.push_back(strs[id]);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};