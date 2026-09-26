class Solution {
public:
    int minimumChairs(string s) {
        int E = 0;
        int minChairs = 0;

        for(char ch : s) {
            if(ch == 'E') {
                E++;
                minChairs = max(minChairs, E);
            }
            else {
                E--;
            }
        }

        return minChairs;
    }
};