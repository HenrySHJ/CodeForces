# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    vector<int> counts;
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }

    // Adding the count of numbers
    int count = 1;
    for (int i = 2; i < n + 1; i++) {
        if (a[i] != a[i - 1]) {
            counts.push_back(count);
            count = 1;
        }
        else {
            count++;
        }
    }
    counts.push_back(count);
    sort(counts.begin(), counts.end());

    int length = (int)counts.size();
    int used = 0;

    int ans = 0;
    int idx = 0;

    // Starting from the lowest count
    while (idx < length) {
        int len = counts[idx];
        int x = len - 1;
        int q = length - idx;

        // Checking if able to make answer
        int curLen = n - used - x * q;
        if (curLen <= k && (k - curLen) % q == 0)
            ans++;
        
        // Skipping index which has same value
        int nextIdx = idx;
        while (nextIdx < length && counts[nextIdx] == len)
            nextIdx++;
        used += (nextIdx - idx) * counts[idx];
        idx = nextIdx;
    }


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