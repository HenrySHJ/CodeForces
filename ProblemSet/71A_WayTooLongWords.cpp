# include <iostream>
# include <string>
using namespace std;

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }   
        else {
            cout << s << endl;
        }
    }
}