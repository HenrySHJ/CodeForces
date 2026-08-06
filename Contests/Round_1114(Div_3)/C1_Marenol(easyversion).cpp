# include <iostream>
# include <algorithm>
# include <vector>
# include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    int evenA = 0;
    int oddA = 0;
    int evenB = 0;
    int oddB = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0) evenA++;
            else oddA++;
        }
        if (b[i] == '1') {
            if (i % 2 == 0) evenB++;
            else oddB++;
        }
    }

    if ((evenA - oddA) == (evenB - oddB) && (oddA + evenA == oddB + evenB)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while(t--) {
        solve();
    }
}
