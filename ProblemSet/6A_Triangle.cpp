# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
    // faster IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> sticks(4);
    for (int i = 0; i < 4; i++)
        cin >> sticks[i];

    sort(sticks.begin(), sticks.end());

    if (sticks[0] + sticks[1] > sticks[2] || sticks[1] + sticks[2] > sticks[3]) {
        cout << "TRIANGLE\n";
    }
    else if (sticks[0] + sticks[1] == sticks[2] || sticks[1] + sticks[2] == sticks[3]) {
        cout << "SEGMENT\n";
    }
    else {
        cout << "IMPOSSIBLE\n";
    }
}