# include <iostream>
# include <vector>

using namespace std;

void solve() {
    vector<int> a(7);
    for (int i = 0; i < 7; i++)
        cin >> a[i];

    int max = -67;
    for (int i = 0; i < 7; i++) {
        if (max < a[i])
            max = a[i];
    }

    int sum = 0;
    for (int i = 0; i < 7; i++) 
        sum += a[i];
    
    sum -= max * 2;
    sum *= -1;
    cout << sum << '\n';
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