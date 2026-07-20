# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = a[0];
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) 
            min = a[i];
        else 
            a[i] = min;
        
        ans += a[i];
    }

    cout << ans << '\n';
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