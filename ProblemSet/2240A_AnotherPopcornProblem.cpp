# include <iostream>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    long long bit = 1;

    // Greedy : Filling from the lowest bit
    while (n > 0) {
        long long cost = k * bit;

        if (n >= cost) {
            ans += k;
            n -= cost;
        } 
        // Fill as possible and end
        else {
            ans += (n / bit);
            break; 
        }

        // Mulitplying bit
        bit *= 2;
    }

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
    return 0;
}