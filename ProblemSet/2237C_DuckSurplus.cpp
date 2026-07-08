# include <iostream>
# include <vector>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i < n + 1; i++) {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                long long temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] += temp;
            }
        }
        cout << a[n] << endl;
    }
}