# include <iostream>
# include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int count = 0;
    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] == s[i - 1]) count++;
    }

    if (count > 2) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
    }
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