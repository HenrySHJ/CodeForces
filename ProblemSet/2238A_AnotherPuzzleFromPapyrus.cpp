# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            ans = c;
            break;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            cout << -1 << endl;
            return;
        }
        else if (a[i] >= b[i]) {
            ans += a[i] - b[i];
        }
    }

    cout << ans << endl;
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