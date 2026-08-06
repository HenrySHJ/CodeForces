# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
 
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long k = 0;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        k = max(k, a[i - 1] - a[i]);
    }

    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i])
            a[i] = a[i] + k;

        if (a[i] < a[i - 1]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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