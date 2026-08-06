# include <iostream>
# include <vector>
# include <algorithm>
# include <string>
# include <set>
# include <map>
# include <queue>

using namespace std;

void solve() {
    int n;
    cin >> n;

    multiset<long long> b;
    for (int i = 0; i < n; i++){
        long long x;
        cin >> x;
        b.insert(x);
    }

    vector<long long> a;
    a.reserve(n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        auto it = b.lower_bound(1 - sum);
        if (it == b.end()) {
            cout << "-1\n";
            return;
        }

        sum += *it;
        a.push_back(sum);
        b.erase(it);
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << "\n";
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