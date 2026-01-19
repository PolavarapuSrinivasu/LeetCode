class Solution {
public:
    int arrangeCoins(int n) {
        long long int i = 1;
        while(i) {
            long long int val = (i*(i+1))/2;
            if(val <= n) i++;
            else break;
        }

        return int(i-1);
    }
};