# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
 
using namespace std;

const int N = 5000;
int n;
int l[N + 10], r[N + 10], u[N + 10], v[N + 10];

bool check(int m) {
    int j = 1;

    // Greedy : starting from the lowest index
    for (int i = 1; i <= n && j <= m; i++) {
        int x = m - j + 1;

        // left rank : j, right rank : x not to be in the range
        if ((j < l[i] || j > r[i]) && (x < u[i] || x > v[i]))
            j++;
    }
    return j == m + 1;
}

void solve() {
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    
    // Trying every m by descending order
    for (int m = n; m >= 1; m--) {
        if (!check(m)) 
            continue;
        cout << m << '\n';
        return;
    }
    cout << 0 << '\n';
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