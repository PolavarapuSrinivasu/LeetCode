class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            string s = to_string(x);
            int i = 0;
            int j = s.size() - 1, c = 0;
            while (i <= j) {
                if (s[i] == s[j]) {
                    i++;
                    j--;
                } else {
                    c = 1;
                    break;
                }
            }
            if (c == 1) {
                return false;
            } else {
                return true;
            }
        }
    }
};