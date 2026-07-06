# include <iostream>
# include <vector>

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
        
        vector<int> songLength(n);
        vector<bool> dp(n * 2 + 5, false);

        for (int i = 0; i < n; i++) {
            cin >> songLength[i];
        }

        // Greedy : Starting backwards
        for (int i = n - 1; i >= 0; i--) {
            if (!dp[songLength[i] + 1]) {
                dp[songLength[i] + 1] = true;
            } 
            else {
                dp[songLength[i]] = true;
            }
        }

        // add answer if true
        int ans = 0;
        for (int i = 1; i <= n * 2 + 2; i++) {
            if (dp[i]) ans++;
        }

        cout << ans << "\n"; 
    }
}