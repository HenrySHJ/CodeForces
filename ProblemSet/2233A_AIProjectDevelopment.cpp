# include <iostream>

using namespace std;

void solve() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    // Without AI
    int ans1 = n / (x + y);
    if (n % (x + y) != 0) ans1++;

    n -= x * z;
    int ans2 = z + n / (x + 10 * y);

    if (n > 0) 
        if (n % (x + 10 * y) != 0) ans2++;
    
    cout << min(ans1, ans2) << endl;
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