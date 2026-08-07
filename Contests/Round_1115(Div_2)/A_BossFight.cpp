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
    
    vector<long long> a(n);
    map<long long, int> freq;
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
        sum += a[i];
    }
    
    int max_freq = 0;
    long long max_val = 0;
    for (auto const& [val, count] : freq) {
        if (count > max_freq) {
            max_freq = count;
            max_val = val;
        }
    }
    
    int other = n - max_freq;
    int max_card = min(max_freq, other + 2);
    long long ans = sum - 1LL * max_freq * max_val + 1LL * max_card * max_val;

    cout << ans << '\n';
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