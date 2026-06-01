class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int l = cost.size() - 1;
        int minimum_sum = 0;
        
        while(l >= 0) {
            if(l-1 < 0) {
                minimum_sum += cost[l];
                l--;
            }
            else if(l-2 < 0){
                minimum_sum += cost[l];
                minimum_sum += cost[l-1];
                l-=2;
            }
            else{
                minimum_sum += cost[l];
                minimum_sum += cost[l-1];
                l-=3;
            }
        }
    
        return minimum_sum;
    }
};