class Solution {
public:
    int binaryGap(int n) {

        if((n&(n-1))==0) return 0;

        while(n) {
            if((n&1)==0){
                n = n>>1;
                continue;
            }
            else {
                break;
            }
        }

        int c = 0;
        int maxi = 0;
        while(n) {
            n = n>>1;
            c++;
            if((n&1)==0) continue;
            else {
                maxi = max(c,maxi);
                c = 0;
            }
        }

        return maxi;
    }
};