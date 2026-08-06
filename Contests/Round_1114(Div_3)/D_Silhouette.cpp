#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<long long, int>> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(b.begin(), b.end());

    if (b[0].first != 0) {
        cout << -1 << '\n';
        return;
    }

    vector<long long> a(n);
    long long prefix = 0; 
    long long prev_a = 0;    

    int s = 0;
    while (s < n) {
        int e = s;
        while (e < n && b[e].first == b[s].first) {
            e++;
        }

        long long count = e - s;
        long long cur_b = b[s].first;

        if (cur_b != prefix) {
            cout << -1 << '\n';
            return;
        }

        long long a_val;
        if (e < n) {
            long long next_b = b[e].first;
            long long diff = next_b - cur_b;

            if (diff % count != 0) {
                cout << -1 << '\n';
                return;
            }

            a_val = diff / count;

            if (a_val <= prev_a || a_val <= 0) {
                cout << -1 << '\n';
                return;
            }
        } 
        else {
            a_val = max(1LL, prev_a + 1);
        }

        for (int i = s; i < e; i++) {
            a[b[i].second] = a_val;
        }

        prefix += count * a_val;
        prev_a = a_val;
        s = e;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
