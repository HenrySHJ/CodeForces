#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; i++) 
        cin >> b[i];

    // Checking no valid process
    vector<long long> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    for (int i = 0; i < n; i++) {
        if (sorted_a[i] > b[i]) {
            cout << -1 << "\n";
            return;
        }
    }

    // stores original a matched for b
    vector<int> p(n);
    vector<bool> used(n, false);

    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = 0; j < n; j++) {
            // finding unused, smaller a
            if (!used[j] && a[j] <= b[i]) {
                p[i] = j; 
                used[j] = true;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << -1 << "\n";
            return;
        }
    }

    // Checking swap count;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i] > p[j]) {
                ans++;
            }
        }
    }

    cout << ans << "\n";
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
    return 0;
}