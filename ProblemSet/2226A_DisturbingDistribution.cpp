# include <iostream>
# include <vector>
# define MOD 676767677

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1)
            continue;
        
        ans = (ans + a[i]) % MOD;
    }

    if (a[n - 1] == 1) ans++;
    cout << ans << '\n';
}

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}