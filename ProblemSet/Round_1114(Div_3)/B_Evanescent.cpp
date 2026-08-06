#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    int ans = 1;
    int len = s.size();
    for (int i = 1; i < len; i++) {
        if (s[i] != s[i - 1])
            ans++;
    }

    int minus = 0;
    for (int i = 1; i < len - 1; i++) {
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
            minus = max(minus, 2);
        }
        else if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            minus = max(minus, 1);
        }
    }

    cout << ans - minus << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}