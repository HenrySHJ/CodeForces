# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
 
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int count = 0;
    int cur = 1;
    while (count < n) {
        if (cur % 3 == 0) {
            cur++;
            continue;
        }
        cout << cur << ' ';
        cur++;
        count++;
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