# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool two_count = false;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 3) {
            cout << "YES" << endl;
            return;
        }
        else if (a[i] == 2) {
            if (two_count) {
                cout << "YES" << endl;
                return;
            }
            two_count = true;
        }
    }
    cout << "NO" << endl;
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