# include <iostream>
# include <vector>

using namespace std;

const int maxn = 2e5;
vector<int> graph[maxn];
int depth[maxn];
int dp[maxn];
long long ans[maxn];

void dfs(int v, int p = -1) {
    ans[v] = 0;
    dp[v] = depth[v];

    int m1 = depth[v];
    int m2 = depth[v];

    for (auto u : graph[v]) {
        if (u != p) {
            depth[u] = depth[v] + 1;
            dfs(u, v);

            dp[v] = max(dp[v], dp[u]);
            ans[v] += ans[u];

            if (dp[u] >= m1) {
                m2 = m1;
                m1 = dp[u];
            }
            else if (dp[u] >= m2) {
                m2 = dp[u];
            }
        }
    }

    ans[v] += m2 - depth[v] + 1;
}

// Used Editorial to solve
void solve() {
    int n;
    cin >> n;
    
    for (int i = 1; i < n; i++) {
        int p;
        cin >> p;
        graph[p - 1].push_back(i);
    }
    
    dfs(0);

    cout << ans[0] << '\n';
    for (int i = 0; i < n; i++)
        graph[i].clear();
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