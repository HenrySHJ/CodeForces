# include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int min_num = 7;
    int max_num = 1;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
    
        min_num = min(min_num, h);
        max_num = max(max_num, h);
    }

    cout << max_num - min_num + 1 << '\n';
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