class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int>rows;
        unordered_map<int,int>cols;
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j]==0) {
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }

        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++) {
                if(rows[i]==1 or cols[j]==1) matrix[i][j]=0;
            }
        }
    }
};