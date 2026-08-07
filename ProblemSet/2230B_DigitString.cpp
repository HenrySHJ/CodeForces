# include <iostream>
# include <string>
# include <vector>

using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    
    int prefix = 0;
    int suffix = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1' || s[i] == '3')
            suffix++;
    }
    int ans = prefix + suffix;
    for (int i = 0; i < n; i++) {
        if (s[i] == '2') 
            prefix++;
        else if (s[i] == '1' || s[i] == '3')
            suffix--;

        ans = max(ans, prefix + suffix);
    }
        
    cout << s.size() - ans << '\n';
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