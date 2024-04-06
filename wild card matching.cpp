#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isMatch(string s, string p) {
    int m = s.length();
    int n = p.length();

    // Create a dp table to store the results of subproblems
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Empty pattern matches empty string
    dp[0][0] = true;

    // Initialize the first row of the dp table
    for (int j = 1; j <= n; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    // Fill the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            } else if (p[j - 1] == '?' || s[i - 1] == p[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s = "adceb";
    string p = "*a*b";
    cout << "Matching result: " << isMatch(s, p) << endl;

    s = "acdcb";
    p = "a*c?b";
    cout << "Matching result: " << isMatch(s, p) << endl;

    return 0;
}
