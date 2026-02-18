class Solution {
public:
    bool hasAlternatingBits(int n) {
        int r = n&1;
        n = n>>1;
        while(n) {
            if((n&1) != r) {
                r = n&1;
                n = n>>1;
            }
            else return false;
        }
        return true;
    }
};