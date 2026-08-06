# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>

using namespace std;

void solve() {
    vector<int> num(3);
    cin >> num[0] >> num[1] >> num[2];

    sort(num.begin(), num.end());

    cout << min(num[1] - num[0], num[2] - num[1]) << '\n';
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