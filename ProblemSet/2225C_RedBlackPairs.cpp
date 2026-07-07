# include <iostream>
# include <vector>
# include <string>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s1;        
        cin >> s1;

        string s2;
        cin >> s2;
        
        // dp[i] : Minimum repaint on 0 ~ i column
        vector<int> dp(n + 1);

        // Setting base case
        dp[0] = 0;

        // Filling dp table
        for (int i = 1; i < n + 1; i++) {
            // Col pairs
            int cost1 = 0;
            if (s1[i - 1] != s2[i - 1]) 
                cost1++;
                
            dp[i] = dp[i - 1] + cost1;

            // Row pairs
            if (i >= 2) {
                int cost2 = 0;
                if (s1[i - 1] != s1[i - 2])
                    cost2++;
                if (s2[i - 1] != s2[i - 2])
                    cost2++;

                dp[i] = min(dp[i], dp[i - 2] + cost2);
            }
        }
        cout << dp[n] << endl;
    }
}