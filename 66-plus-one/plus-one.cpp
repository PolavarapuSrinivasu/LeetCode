class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int c = 1;
        for(int i=digits.size()-1;i>=0;i--) {
            int temp = c + digits[i];
            if(temp>9) {
                c = 1;
                temp = temp%10;
            }
            else c = 0;
            ans.push_back(temp);
        }
        if(c==1) ans.push_back(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};