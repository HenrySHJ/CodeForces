# include <iostream>
# include <vector>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int p, s, v;
        cin >> p >> s >> v;
        
        int solve = p + s + v;

        if (solve >= 2)
            ans++;
    }

    cout << ans << endl;
}