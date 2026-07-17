# include <iostream>

using namespace std;

void solve() {
    int x;
    cin >> x;

    cout << x << '\n';
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