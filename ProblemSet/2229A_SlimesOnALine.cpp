# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int min_num = 1000;
    int max_num = 1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        min_num = min(min_num, a[i]);
        max_num = max(max_num, a[i]);
    }

    int ans = (max_num - min_num) / 2;
    if ((max_num - min_num) % 2 == 1) 
        ans++;
    
    cout << ans << endl;
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