class Solution {
public:
    bool isPerfectSquare(int num) {
        int val = (int) sqrt(num);

        if(val*val==num) return true;
        else return false;
    }
};