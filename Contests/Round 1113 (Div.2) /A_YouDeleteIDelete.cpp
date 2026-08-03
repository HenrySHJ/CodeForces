# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            for (int j = i; j < n; j++) {
                s[j] = s[j + 1];
            }
            break;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1') {
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            break;
        }
    }

    for (int i = 0; i < n - 2; i++) {
        cout << s[i];
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
