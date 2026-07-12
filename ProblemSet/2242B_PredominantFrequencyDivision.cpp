# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> count(n + 1, 0);
    int phase = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        count[a[i]]++;

        if (phase == 1) {
            if (count[1] > count[2] + count[3]) {
                if (i + 1 < n && a[i + 1] != 3) {
                    for (int j = 1; j <= 3; j++)
                        count[j] = 0;
                    phase++;
                }
            }
            else if (count[1] == count[2] + count[3]) {
                for (int j = 1; j <= 3; j++)
                    count[j] = 0;
                phase++;
            }
        }
        else if (phase == 2) {
            if (count[1] + count[2] >= count[3]) {
                for (int j = 1; j <= 3; j++)
                    count[j] = 0;
                phase++;
            }
        }
    }

    if (phase == 3 && (count[1] || count[2] || count[3]))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
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