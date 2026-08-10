# include <iostream>
# include <vector>
# include <numeric>
# include <algorithm>
# include <string>
# include <queue>
# include <map>

using namespace std;

int count_ways(string s) {
    bool p1 = true; 
    bool p2 = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') 
            continue;

        char c1 = (i % 2 == 0) ? '0' : '1';
        char c2 = (i % 2 == 0) ? '1' : '0';

        if (s[i] != c1) p1 = false;
        if (s[i] != c2) p2 = false;
    }

    int ans = 0;

    if (p1) ans++;
    if (p2) ans++;
     
    return ans;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string odd_string = "";  
    string even_string = ""; 

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
            odd_string += s[i];
        else 
            even_string += s[i];
    }

    long long odd_ans = count_ways(odd_string);
    long long even_ans = count_ways(even_string);

    long long ans = (odd_ans * even_ans) % 998244353;
    cout << ans << "\n";
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