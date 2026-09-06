class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();

        if (m > n) return 0;

        vector<vector<unsigned long long>> dp(
            n + 1,
            vector<unsigned long long>(m + 1, 0)
        );

        // Empty string t banane ka 1 way
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                // Skip current character
                dp[i][j] = dp[i - 1][j];

                // Take current character
                if (s[i - 1] == t[j - 1]) {
                    dp[i][j] += dp[i - 1][j - 1];
                }
            }
        }

        return (int)dp[n][m];
    }
};