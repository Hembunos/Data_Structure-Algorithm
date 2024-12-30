class Solution {
public:
    int rec(int i, int j, int n, int m, vector<vector<int>>& obstacleGrid,
            vector<vector<int>>& dp) {

        if (i >= n || j >= m || obstacleGrid[i][j] == 1)
            return 0;

        if (i == n - 1 && j == m - 1)
            return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        int right = rec(i, j + 1, n, m, obstacleGrid, dp);
        int down = rec(i + 1, j, n, m, obstacleGrid, dp);

        return dp[i][j] = right + down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        vector<vector<int>> dp(n + 2, vector<int>(m + 2, -1));
        return rec(0, 0, n, m, obstacleGrid, dp);
    }
};