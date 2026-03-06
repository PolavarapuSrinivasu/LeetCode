class Solution {
public:
    bool checkOnesSegment(string s) {
        int ones = 0;
        int zeroes = 0;
        int cnt = 0;
        for(auto bit : s) {
            if(bit=='0' and ones==0) ones = cnt;
            if(bit=='0') zeroes++;
            if(bit=='1') cnt++; 
        }

        if(ones==0) ones = cnt;
        if(ones+zeroes == s.size()) return true;
        return false;
    }
};