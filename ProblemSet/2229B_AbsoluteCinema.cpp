# include <iostream>
# include <vector>

using namespace std;

void swap(long long* a, long long* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; i++) 
        cin >> b[i];
    
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            swap(&a[i], &b[i]);
        }
    }

    long long ans = 0;
    long long max_A = 0;
    for (int i = 0; i < n; i++) 
        max_A = max(max_A, a[i]);
    ans += max_A;

    for (int i = 0; i < n; i++)
        ans += b[i];

    cout << ans << endl;
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