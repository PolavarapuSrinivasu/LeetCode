class Solution {
public:
    bool judgeCircle(string moves) {
        int L_count = 0;
        int R_count = 0;
        int U_count = 0;
        int D_count = 0;

        for(auto move : moves) {
            if(move == 'L') L_count++;
            else if(move == 'R') R_count++;
            else if(move == 'U') U_count++;
            else D_count++;
        }

        if(L_count==R_count and U_count==D_count) return true;
        else return false; 
    }
};