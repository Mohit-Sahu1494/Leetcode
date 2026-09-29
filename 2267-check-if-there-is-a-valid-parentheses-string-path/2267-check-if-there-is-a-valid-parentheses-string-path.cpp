class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Total path length must be even
        if ((m + n - 1) % 2 != 0)
            return false;

        // Starting cell must be '('
        if (grid[0][0] == ')')
            return false;

        // dp[j][balance] = is it possible to reach current cell
        // with this balance?
        vector<vector<bool>> dp(n, vector<bool>(m + n, false));

        dp[0][1] = true;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (i == 0 && j == 0)
                    continue;

                int val = (grid[i][j] == '(' ? 1 : -1);

                vector<bool> current(m + n, false);

                for (int balance = 0; balance <= m + n; balance++) {

                    int prevBalance = balance - val;

                    if (prevBalance < 0)
                        continue;

                    bool possible = false;

                    // From top
                    if (i > 0)
                        possible |= dp[j][prevBalance];

                    // From left
                    if (j > 0)
                        possible |= dp[j - 1][prevBalance];

                    // Balance can never become negative
                    if (possible && balance >= 0)
                        current[balance] = true;
                }

                dp[j] = current;
            }
        }

        return dp[n - 1][0];
    }
};