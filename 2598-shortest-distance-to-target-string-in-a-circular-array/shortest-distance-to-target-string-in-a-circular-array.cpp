class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int right = abs(i - startIndex);
                int left = n - right;
                ans = min(ans, min(right, left));
            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};