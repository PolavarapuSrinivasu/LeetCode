class Solution {
public:
    int reverse(int x) {
        if (x >= 2147483647 || x <= -2147483648)
            return 0;
        int flag = 0;
        if (x < 0) {
            x = -1 * x;
            flag = 1;
        }
        long long rev = 0;
        while (x) {
            int m = x % 10;
            rev = rev * 10 + m;
            x = x / 10;
        }
        if (rev > 2147483647)
            return 0;
        if (flag == 1)
            return (int)-1 * rev;
        else
            return (int)rev;
    }
};