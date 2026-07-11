# include <iostream>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    if ((x % 2 == 1) && (y % 2 == 1))
        cout << "NO" << endl;
    else   
        cout << "YES" << endl;
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