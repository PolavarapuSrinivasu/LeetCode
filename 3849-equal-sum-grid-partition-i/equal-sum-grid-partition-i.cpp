class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long int hsum = 0;
        for(auto row : grid) {
            for(auto val : row)
                hsum += val;
        }

        long long int vsum = hsum;
        long long int temp = 0;
        
        for(int i=0;i<grid.size()-1;i++) {
            for(int j=0;j<grid[0].size();j++) {
                temp += grid[i][j];
                hsum -= grid[i][j];
            }
            if(hsum == temp) return true;
        }

        temp = 0;
        for(int i=0;i<grid[0].size()-1;i++) {
            for(int j=0;j<grid.size();j++) {
                temp += grid[j][i];
                vsum -= grid[j][i];
            }
            if(vsum == temp) return true;
        }

        return false;
        

    }
};