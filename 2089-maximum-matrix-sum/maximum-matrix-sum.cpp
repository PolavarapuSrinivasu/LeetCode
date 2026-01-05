class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long int sum = 0;
        int neg = 0;
        int mini = INT_MAX;
        for(auto val : matrix) {
            for(auto ele : val) {
                if(ele<0) neg++;
                ele = abs(ele);
                sum += ele;
                mini = min(mini,ele);
            }
        }
        if(mini==0 || neg%2==0) return sum;
        else return sum - (2*(mini)); 
    }
};