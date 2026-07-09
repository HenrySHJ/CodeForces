# include <iostream>
# include <string>

using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string t;
    cin >> s;
    cin >> t;

    int hor = t[0] - s[0];
    int ver = t[1] - s[1];

    cout << max(abs(hor), abs(ver)) << endl;
    while (hor != 0 || ver != 0) {
        if (hor < 0) { 
            cout << 'L';
            hor++;
        }
        else if (hor > 0) {
            cout << 'R';
            hor--;
        }

        if (ver < 0) { 
            cout << 'D';
            ver++;
        }
        else if (ver > 0) {
            cout << 'U';
            ver--;
        }
        cout << endl;
    }
}