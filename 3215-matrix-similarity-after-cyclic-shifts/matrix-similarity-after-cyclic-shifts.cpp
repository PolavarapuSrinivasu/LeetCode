class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int size = mat[0].size();
        k%=size;

        vector<vector<int>>temp = mat;

        while(k--) {
            for(int i=0;i<temp.size();i++) {
                if(i%2==0) {
                    for(int j=0;j<temp[i].size()-1;j++) {
                        swap(temp[i][j],temp[i][j+1]);
                    }
                }
                else{
                    for(int j=temp[i].size()-1;j>0;j--) {
                        swap(temp[i][j],temp[i][j-1]);
                    }
                }
            }
        }

        if(temp == mat) return true;
        else return false;
    }
};