#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m = n * 2;
    vector<long long> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    vector<int> lp(n * 2, -1); // First index of the reappeared number
    vector<int> occ(n + 1, - 1); // First Index of the number

    for (int i = 0; i < n * 2; i++) {
        if (occ[a[i] - 1] != -1) 
            lp[i] = occ[a[i] - 1];
        else 
            occ[a[i] - 1] = i;
    }
    
    vector<long long> dp(m);
	dp[0] = 1;
	for (int i = 1; i < m; i++) {
		dp[i] = dp[i - 1] + 1;

		if (lp[i] != -1) {
			dp[i] = max(dp[i], (lp[i] == 0 ? 0 : dp[lp[i] - 1]) + 1LL * (i - lp[i] + 1) * (i - lp[i] + 1));
		}
	}

    cout << dp[m - 1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) 
        solve();
}