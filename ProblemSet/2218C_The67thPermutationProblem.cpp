# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << ' ' << i * 2 + n - 1  << ' ' << i * 2 + n << ' ';
    }
    cout << '\n';
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