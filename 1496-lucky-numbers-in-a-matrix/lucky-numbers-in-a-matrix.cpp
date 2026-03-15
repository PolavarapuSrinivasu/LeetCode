class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        unordered_map<int,int>mini;
        unordered_map<int,int>maxi;
        vector<int>ans;

        for(int i=0;i<matrix.size();i++) {
            int minval = matrix[i][0];
            for(int j=0;j<matrix[0].size();j++) {
                minval = min(minval, matrix[i][j]);
            }
            mini[i] = minval;
        }

        for(int i=0;i<matrix[0].size();i++) {
            int maxval = matrix[0][i];
            for(int j=0;j<matrix.size();j++) {
                maxval = max(maxval,matrix[j][i]);
            }
            maxi[i] = maxval;
        }

        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[0].size();j++) {
                if(matrix[i][j]==mini[i] and matrix[i][j]==maxi[j]) ans.push_back(matrix[i][j]);
            }
        }

        return ans;
    }
};