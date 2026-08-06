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

    vector<int> evenA, oddA, evenB, oddB;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0) 
                evenA.push_back(i);
            else 
                oddA.push_back(i);
        }
        if (b[i] == '1') {
            if (i % 2 == 0) 
                evenB.push_back(i);
            else 
                oddB.push_back(i);
        }
    }

    int eas = evenA.size();
    int oas = oddA.size();
    int ebs = evenB.size();
    int obs = oddB.size();

    if ((eas + oas == ebs + obs) && (eas - oas == ebs - obs)) {
        long long ans = 0;
        for (int i = 0; i < eas; i++) {
            ans += abs(evenB[i] - evenA[i]) / 2;
        }
        for (int i = 0; i < oas; i++) {
            ans += abs(oddB[i] - oddA[i]) / 2;
        }
        cout << ans << '\n';
    } 
    else {
        cout << "-1\n";
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
