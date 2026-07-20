# include <iostream>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    // 
    if ((x == 0 && (x + y) % 2 == 0) || (x + y) / 2 < x) {
        cout << "NO" << '\n';
        return;
    }

    cout << "YES" << '\n';

    int m = 2 * x + (y - x) % 2;
    for (int i = 2; i < m + 1; i++) {
        cout << i - 1 << ' ' << i << '\n';
    }
    for (int i = m + 1; i < x + y + 1; i++) {
        cout << m << ' ' << i << '\n';
    }
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