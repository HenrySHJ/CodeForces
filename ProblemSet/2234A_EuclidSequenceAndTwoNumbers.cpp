# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> b(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    bool flag = true;
    for (int i = n - 1; i >= 2; i--) {
        if (b[i] % b[i - 1] != b[i - 2]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << b[n - 1] << ' ' << b[n - 2];
    }
    else {
        cout << -1;
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