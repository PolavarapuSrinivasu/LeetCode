class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        if(m * n == k) return grid;

        while(k > 0) {

            int key = grid[0][0];

            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    if(i == m - 1 && j == n - 1) {
                        grid[0][0] = key;
                    }
                    else if(j == n - 1) {
                        int temp = grid[i + 1][0];
                        grid[i + 1][0] = key;
                        key = temp;
                    }
                    else {
                        int temp = grid[i][j + 1];
                        grid[i][j + 1] = key;
                        key = temp;
                    }
                }
            }

            k--;
        }

        return grid;
    }
};