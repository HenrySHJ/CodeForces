# include <iostream>

using namespace std;

void solve() {
    int n, m, d;
    cin >> n >> m >> d;

    int ans = n / (1 + d / m);
    if (n % (1 + d / m) != 0) 
        ans++;

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