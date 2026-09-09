class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) {
            return 0;
        }

        long long ans = 0;
        int digits = 0;
        long long t = n;

        while(t) {
            digits++;
            t/=10;
        }

        int commas = 1;
        while(digits > 3) {
            if(digits % 3 == 0){
                commas = (digits/3) - 1;
            }
            else {
                commas = digits/3;
            }

            long long p = pow(10, digits-1);
            long long temp = (n - p + 1) * commas;
            ans += temp;
            n = p-1;
            digits -= 1;
        }

        return ans;

    }
};