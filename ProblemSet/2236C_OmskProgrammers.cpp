# include <iostream>

using namespace std;

void solve() {
    int a, b, x;
    cin >> a >> b >> x;

    int count = abs(a - b);
    int op = 0;

    while (1) {
        if (a > b) {
            count = min(count, op + a - b);
            a = a / x;
        }
        else if (a < b) {
            count = min(count, op + b - a);
            b = b / x;
        }
        else {
            count = min(count, op);
            cout << count << '\n';
            return;
        }
        op++;
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