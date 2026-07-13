# include <iostream>
# include <string>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for (int i = 0; i < n - k; i++) {
        if (s[i] == '1') {
            s[i] = '0';

            if (s[i + k] == '1') 
                s[i + k] = '0';
            else s[i + k] = '1';
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
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