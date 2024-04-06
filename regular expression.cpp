#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isMatch(string s, string p) {
    int m = s.length(), n = p.length();
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Base case: empty string and empty pattern are a match
    dp[0][0] = true;

    // Handle patterns like a*, a*b*, a*b*c* that can match an empty string
    for (int j = 1; j <= n; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 2];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
                // If the current characters match or pattern has '.', check for the previous state
                dp[i][j] = dp[i - 1][j - 1];
            } else if (p[j - 1] == '*') {
                // If the pattern character is '*', it can represent zero of the previous character
                dp[i][j] = dp[i][j - 2];
                if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                    // If '*' represents one or more of the previous character
                    dp[i][j] = dp[i][j] || dp[i - 1][j];
                }
            } else {
                dp[i][j] = false; // Current characters did not match
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s = "aab";
    string p = "c*a*b";
    cout << "Match result: " << isMatch(s, p) << endl; // Output: 1 (true)

    s = "mississippi";
    p = "mis*is*p*.";
    cout << "Match result: " << isMatch(s, p) << endl; // Output: 0 (false)

    return 0;
}
