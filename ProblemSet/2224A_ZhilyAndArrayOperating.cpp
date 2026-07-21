# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count = 0;
    if (a[n - 1] > 0) count++;

    for (int i = n - 1; i > 0; i--) {
        if (a[i] > 0) 
            a[i - 1] = a[i - 1] + a[i];
        
        if (a[i - 1] > 0) count++;
    }

    cout << count << '\n';
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