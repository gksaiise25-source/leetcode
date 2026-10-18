
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        auto limatecega = grid;

        vector<int> ans = {0, 0};
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        visited[0][0] = true;

        while (true) {
            int r = ans[0], c = ans[1];
            int nr = r, nc = c;

            if (grid[r][c] == 'L') nc--;
            else if (grid[r][c] == 'R') nc++;
            else if (grid[r][c] == 'U') nr--;
            else if (grid[r][c] == 'D') nr++;

            if (nr < 0 || nr >= m || nc < 0 || nc >= n ||
                visited[nr][nc]) {
                break;
            }

            ans[0] = nr;
            ans[1] = nc;
            visited[nr][nc] = true;
        }

        return ans;
    }
};
