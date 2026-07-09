# include <iostream>
# include <vector>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> t(n);
    for (int i = 0; i < n; i++) 
        cin >> t[i];
    
    // Two Pointers
    int l = 0;
    int r = n - 1;

    int alice = 0;
    int bob = 0;
    int last = -1;

    while (l < r) {
        if (t[l] <= t[r]) {
            t[r] -= t[l];
            t[l++] = 0;
            alice++;
            last = 0;
        }
        else {
            t[l] -= t[r];
            t[r--] = 0;
            bob++;
            last = 1;
        }
    }
    if (last == 0) bob++;
    else alice++;
    
    cout << alice << " " << bob << endl;
}
