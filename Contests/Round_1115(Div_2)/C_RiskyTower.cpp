# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
# include <queue>
# include <map>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> v(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> v[i];

    vector<vector<int>> a(n + 1, vector<int>(m));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) 
            cin >> a[i][j];
    }
    
    int ans = m;
    vector<int> top_a; 
    top_a.reserve(n * m);

    for (int k = n; k >= 1; k--) {
        for (int j = 0; j < m; j++) 
            top_a.push_back(a[k][j]);

        if ((int)top_a.size() > m) {
            nth_element(top_a.begin(), top_a.begin() + m, top_a.end(), greater<int>());
            top_a.resize(m);
        }

        vector<int> cur = top_a;
        sort(cur.rbegin(), cur.rend());

        long long damage = 0;
        for (int x = 0; x < (int)cur.size(); x++) {
            damage += cur[x];
            if (damage >= v[k]) {
                ans = min(ans, x + 1);
                break;
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
}