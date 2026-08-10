# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
# include <queue>
# include <map>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    long long N = n * 2;

    string s;
    cin >> s;

    int pot = 0;
    int red = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] == '1') {
            pot++;
            if (i % 2 == 1) red++;
        }
    }

    // Only move at the last round
    for (int i = 0; i < N; i++) {
        if (s[i] == '1') {
            int j = (i + 1 == N) ? 0 : i + 1;
            if (s[j] == '0') {
                if (i % 2 == 0) red++;
                else red--;
            }
        }
    }

    cout << red << ' ' << pot - red << '\n';
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