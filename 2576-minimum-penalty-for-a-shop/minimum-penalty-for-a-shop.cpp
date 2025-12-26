class Solution {
public:
    int bestClosingTime(string customers) {
        int ans = 0;
        int yc = 0;
        int nc = 0;
        for(auto ch : customers) {
            if(ch=='Y') yc++;
        }
        int i=0;
        int p = INT_MAX;
        for(i=0;i<customers.size();i++) {
            int temp = yc + nc;
            if(p>temp) {
                p = temp;
                ans = i;
            }
            if(customers[i]=='Y') yc--;
            else nc++;
        }
        if(p>yc+nc) ans=i;
        return ans;
    }
};