# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
# include <queue>
# include <map>

using namespace std;

void solve() {
    vector<int> num(3);
    cin >> num[0] >> num[1] >> num[2];

    sort(num.begin(), num.end());
    if (num[0] + num[1] > num[2]) {
        cout << num[2] - num[0];
    }
    else {
        cout << num[1];
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