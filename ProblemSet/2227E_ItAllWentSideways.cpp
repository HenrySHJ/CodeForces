# include <iostream>
# include <vector>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Total Complexity : O(tn)
    while (t--) {
        // Need to be solved in O(n)
        int n;
        cin >> n;

        long long total = 0;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        // Following the lowest height start from the right side
        long long min_height = a[n - 1] + 1;
        long long rooted = 0;
        long long streak = 1;
        long long max_streak = 1;

        for (int i = n - 1; i >= 0; i--) {
            // minimum height updated -> streak updated;
            if (min_height > a[i]) {
                min_height = a[i];
                
                streak = 1;
            }
            // add streak if not updated
            else {
                streak++;
            }
            
            // add rooted blocks
            rooted += min_height;
            max_streak = max(max_streak, streak);
        }

        long long ans = total - rooted + max_streak - 1;
        cout << ans << endl;
    }
}