class Solution {
public:
    void reverse(string& s, int i, int j) {
        while (i < j) {
            swap(s[i++], s[j--]);
        }
    }

    string reverseStr(string s, int k) {
        int i = 0;
        int n = s.size();

        while (i < n) {
            int end = min(i + k - 1, n - 1);
            reverse(s, i, end);

            i += 2 * k;
        }

        return s;
    }
};