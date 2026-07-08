# include <iostream>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    while (n >= 100) {
        n -= 100;
        ans++;
    }
    while (n >= 20) {
        n -= 20;
        ans++;
    }
    while (n >= 10) {
        n -= 10;
        ans++;
    }
    while (n >= 5) {
        n -= 5;
        ans++;
    }
    ans += n;
    cout << ans << endl;
}