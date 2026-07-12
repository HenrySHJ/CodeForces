# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - 1 - i]) 
            ans++;
    }

    cout << ans / 2 << endl;
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