# include <iostream>

using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;

    if (a * 3 <= b) {
        cout << n * a << endl;
    }
    else {
        long long q = n / 3;
        long long rem = n % 3;

        if (a * rem <= b) {
            cout << q * b + rem * a << endl;
        }
        else {
            cout << (q + 1) * b << endl;
        }
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