class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (auto ch : s) {
            if (ch >= 'a' and ch <= 'z') {
                result += ch;
            } 
            else if (!result.empty()) {
                if (ch == '#') {
                    result += result;
                } else if (ch == '*') {
                    result.pop_back();
                } else {
                    reverse(result.begin(), result.end());
                }
            }
        }

        return result;
    }
};