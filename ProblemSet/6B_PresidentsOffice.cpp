# include <iostream>
# include <vector>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    char c;
    cin >> n >> m;
    cin >> c;

    vector<string> matrix(n);
    for (int i = 0; i < n; i++) 
        cin >> matrix[i];
    
    vector<bool> desk(26, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char colour = matrix[i][j];
            
            // has desk colour and yet occupied
            if (colour != '.' && colour != c && !desk[colour - 'A']) {
                if (i + 1 < n && matrix[i + 1][j] == c) desk[colour - 'A'] = true;
                if (j + 1 < m && matrix[i][j + 1] == c) desk[colour - 'A'] = true;
                if (i - 1 >= 0 && matrix[i - 1][j] == c) desk[colour - 'A'] = true;
                if (j - 1 >= 0 && matrix[i][j - 1] == c) desk[colour - 'A'] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 26; i++)
        if (desk[i]) ans++;

    cout << ans << endl;
}