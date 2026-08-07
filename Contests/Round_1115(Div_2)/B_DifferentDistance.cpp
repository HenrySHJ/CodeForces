# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
# include <queue>
# include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n * 4, -1);
    for (int num = 1; num < n + 1; num++) {
        int idx = 0;
        while (a[idx] != -1)
            idx++;
            
        a[idx] = num;
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