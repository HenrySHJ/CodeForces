# include <iostream>

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

    for (long long z = x + x; z < y; z += x) {
        if (y % z != 0) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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