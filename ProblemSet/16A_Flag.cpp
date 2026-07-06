#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Input
    int n, m;
    cin >> n >> m;
    
    // String Vector for each row
    vector<string> flag(n);
    for (int i = 0; i < n; i++) {
        cin >> flag[i];
    }

    for (int i = 0; i < n; i++) {
        char first_char = flag[i][0];
        // Checking columns in a row if all characters are same
        for (int j = 1; j < m; j++) {
            if (flag[i][j] != first_char) {
                cout << "NO\n";
                return 0; 
            }
        }

        // Checking upper row in a same column
        if (i > 0) {
            if (flag[i] == flag[i - 1]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    // All Test Passed
    cout << "YES\n";
    return 0;
}