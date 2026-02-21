class Solution {
public:

    bool isPrime(int n) {
        if(n<2) return false;
        for(int i=2;i*i<=n;i++) {
            if(n%i==0) return false;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i=left;i<=right;i++) {
            int n = i;
            int cnt_1 = 0;
            while(n){
                if((n&1)==1) cnt_1++;
                n = n>>1;
            }
            if(isPrime(cnt_1)) cnt++;
        }

        return cnt;
    }
};