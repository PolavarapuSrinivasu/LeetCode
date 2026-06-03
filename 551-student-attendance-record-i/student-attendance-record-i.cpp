class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;
        int temp_L = 0;
        int L = 0;

        for (auto ch : s) {
            if (ch == 'P') {
                L = max(temp_L, L);
                temp_L = 0;
                continue;
            }
            if (ch == 'A') {
                L = max(temp_L, L);
                temp_L = 0;
                A++;
            }
            if (ch == 'L') {
                temp_L++;
            }
        }

        L = max(temp_L, L);
        
        if (A < 2 and L < 3)
            return true;
        else
            return false;
    }
};