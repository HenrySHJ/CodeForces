#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a) 
        cin >> x;
    for (auto &x : b) 
        cin >> x;

    if (n < 2 * m) { 
        cout << "NO\n"; 
        return; 
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < m; i++) {
        int low  = a[i];             
        int high = a[n - m + i];     
        if (!(low <= b[i] && high >= b[i])) { 
            cout << "NO" << '\n';
            return; 
        }
    }
    cout << "YES" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}