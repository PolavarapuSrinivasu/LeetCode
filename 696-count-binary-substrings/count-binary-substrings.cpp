class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>freq;
        int cnt0 = 0;
        int cnt1 = 0;
        for(auto val : s) {
            if(val=='1'){
                if(cnt0==0) cnt1++;
                else{
                    freq.push_back(cnt0);
                    cnt0 = 0;
                    cnt1++;
                }
            }
            else {
                if(cnt1==0) cnt0++;
                else {
                    freq.push_back(cnt1);
                    cnt1 = 0;
                    cnt0++;
                }
            }
        }

        if(cnt0!=0) freq.push_back(cnt0);
        if(cnt1!=0) freq.push_back(cnt1);

        int cnt = 0;
        for(int i=0;i<freq.size()-1;i++) {
            cnt += min(freq[i],freq[i+1]);
        }

        return cnt;
    }
};