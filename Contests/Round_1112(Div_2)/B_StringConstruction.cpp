# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    if (k == n - 1) {
        cout << -1 << '\n';
        return;
    }
 
    for (int i = 0; i < n - k - 1; i++) {
        if (i % 2 == 0)
            cout << '1';
        else    
            cout << '0';
    }
 
    for (int i = 0; i < k / 2 + k % 2; i++) {
        if ((n - k) % 2 == 1) 
            cout << '0';
        else    
            cout << '1';
    }
    for (int i = 0; i < k / 2 + 1; i++) {
        if ((n - k) % 2 == 1) 
            cout << '1';
        else    
            cout << '0';
    }
 
    cout << '\n';
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