# include <iostream>
# include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // Zero Count
    int count = 0;

    bool ans = true;
    bool cur;

    // cur is 0 if zero, 1 if one
    if (s[0] == '1') 
        cur = true;
    else cur = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') 
            count++;
        
        if (i == 0)
            continue;

        // Continuous zeros are safe
        if (s[i] == s[i - 1] && s[i] == '0')
            cur = false;

        // Continuous ones : Check & Reset counting
        if (s[i] == s[i - 1] && s[i] == '1') {
            if (cur && count % 2 == 1)
                ans = false;
            cur = true;
            count = 0;
        }
    }

    if (cur && count % 2 == 1 && s[n - 1] == '1')
        ans = false;

    if (ans)
        cout << "YES" << '\n';
    else    
        cout << "NO" << '\n';
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