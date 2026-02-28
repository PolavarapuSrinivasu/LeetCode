class Solution {
public:
    string reverseByType(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (isalpha(s[i]) and isalpha(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (isalpha(s[i]))
                j--;
            else if (isalpha(s[j]))
                i++;
            else {
                i++;
                j--;
            }
        }

        i = 0;
        j = s.size() - 1;
        while (i < j) {
            if (!isalpha(s[i]) and !isalpha(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (!isalpha(s[i]))
                j--;
            else if (!isalpha(s[j]))
                i++;
            else {
                i++;
                j--;
            }
        }

        return s;
    }
};