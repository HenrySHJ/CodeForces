# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> w(n + 1);
    int sum = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> w[i];
    }
 
    if (n % 2 == 1) {
        cout << "NO" << '\n';
        return;
    }
    
    long long min_odd = 1e9;
    long long max_even = 1;
    for (int i = 1; i < n + 1; i++) {
        if (i % 2 == 1)
            min_odd = min(min_odd, w[i]);
        else   
            max_even = max(max_even, w[i]);
    }
 
    if (min_odd > max_even + 1) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
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