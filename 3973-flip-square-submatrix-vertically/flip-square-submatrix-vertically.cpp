class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
            int col = y+k-1;
            int row = x+k-1;
            while(y <= col) {
                int c = y;
                int r = x;
                int t = row;
                while(r < t) {
                    swap(grid[r][c],grid[t][c]);
                    r++;
                    t--;
                }
                y++;
            }

        return grid;
    }
};