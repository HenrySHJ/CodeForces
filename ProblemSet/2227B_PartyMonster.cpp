# include <iostream>
# include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    if (n % 2 == 1) {
        cout << "NO" << endl;
        return;
    }

    int l = 0;
    int r = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') l++;
        else if (s[i] == ')') r++;
    }

    if (l == r) cout << "YES" << endl;
    else cout << "NO" << endl;
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