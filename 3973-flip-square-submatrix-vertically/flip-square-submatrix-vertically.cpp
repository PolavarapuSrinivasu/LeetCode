class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
            int col = y+k-1;
            int row = x+k-1;
            int cl = y;
            while(cl <= col) {
                int c = cl;
                int r = x;
                int t = row;
                while(r < t) {
                    swap(grid[r][c],grid[t][c]);
                    r++;
                    t--;
                }
                cl++;
            }

        return grid;
    }
};