class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        int val = 0;
        long long int ans = 0;
        int i = 0;
        while(k--){
            if(happiness[i]-val <= 0) break;
            ans+= happiness[i] - val;
            i++;
            val++;
        }
        return ans;
    }
};