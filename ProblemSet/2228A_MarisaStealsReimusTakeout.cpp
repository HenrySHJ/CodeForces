# include <iostream>
# include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> count(3, 0);
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        count[w]++;
    }
    
    cout << count[0] + min(count[1], count[2]) + abs(count[1] - count[2]) / 3<< '\n';
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