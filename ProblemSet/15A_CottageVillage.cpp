# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    
    vector<pair<double, double> > house(n);
    
    double x;
    double a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cin >> a;
        house[i].first = x - a / 2.0;
        house[i].second = x + a / 2.0;
    }

    // Sorting by starting point
    sort(house.begin(), house.end());

    int ans = 2;
    for (int i = 0; i < n - 1; i++) {
        double gap = house[i + 1].first - house[i].second;

        if (gap > t) {
            ans += 2; 
        } else if (gap == t) {
            ans += 1;
        }
    }
    cout << ans << "\n"; 

}